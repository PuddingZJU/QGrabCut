#include <QFileDialog>
#include <QtCore/QStringList>
#include <QColorDialog>
#include <QtGui/QPalette>
#include <QtGui/QValidator>
#include <QtGui/QDoubleValidator>
#include <QtCore/QVariant>
#include <QMessageBox>
#include <QtGui/QImage>
#include <QtGui/QPainter>
#include <QScrollBar>
#include <QSplitter>

#include <math.h>

#include "QGrabCut.h"
#include "ParamWidget.h"
#include "ImageWidget.h"
#include "ImageLabel.h"
#include "SegmentInterface.h"
#include "CommonFunc.h"
#include "SegmentInterface.h"
#include "GMM.h"

using namespace NMH;

const double QGrabCut::s_delta = 0.1;
const double QGrabCut::s_tick_interval = 5;
const int QGrabCut::s_max_slide_value = 20;
const int QGrabCut::s_min_slide_value = -20;
const int QGrabCut::s_zoomin_ratio = 5;


QGrabCut::QGrabCut(QWidget *parent, Qt::WindowFlags  flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	obj_paint = true;
	
	obj_color = Qt::yellow;
	bkg_color = Qt::red;

	init_components();
	init_connects();
}

void QGrabCut::init_components()
{
	/// top scroll_area
	scroll_area = new QScrollArea();
	scroll_area->setBackgroundRole(QPalette::Dark);
	scroll_area->setFrameStyle(QFrame::NoFrame);
	scroll_area->setAlignment(Qt::AlignCenter);

	image_widget = new ImageLabel((QImage*)0);
	image_widget->setScaledContents(true);
	image_widget->setBackgroundRole(QPalette::Dark);
	image_widget->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	QSize scroll_area_size = scroll_area->size();
	image_widget->resize(scroll_area_size);
	scroll_area->setWidget(image_widget);
	scroll_area->setWidgetResizable(false);

	/// bottom scroll_area
	scroll_area_bottom = new QScrollArea();
	scroll_area_bottom->setBackgroundRole(QPalette::Dark);
	scroll_area_bottom->setFrameStyle(QFrame::NoFrame);
	scroll_area_bottom->setAlignment(Qt::AlignCenter);

	image_widget_bottom = new ImageLabel((QImage*)0);
	image_widget_bottom->setScaledContents(true);
	image_widget_bottom->setBackgroundRole(QPalette::Dark);
	image_widget_bottom->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	image_widget_bottom->set_response_right_mouse(false);
	scroll_area_size = scroll_area_bottom->size();
	image_widget_bottom->resize(scroll_area_size);
	scroll_area_bottom->setWidget(image_widget_bottom);
	scroll_area_bottom->setWidgetResizable(false);

	/// Splitter window
	splitter = new QSplitter(Qt::Vertical);
	splitter->addWidget(scroll_area);
	splitter->addWidget(scroll_area_bottom);

	/// central widget
	this->setCentralWidget(splitter);

	/// Dock widget
	QDockWidget *dock_widget = ui.dockWidget;
	QScrollArea *dock_scroll_area = new QScrollArea(dock_widget);
	dock_widget->setWidget(dock_scroll_area);
	param_widget = new ParamWidget();
	dock_scroll_area->setWidget(param_widget);
	ui.menu_Window->addAction(dock_widget->toggleViewAction());

	/// param ui
	excute_button = param_widget->ui.excute_bt;

	chose_obj_color_button = param_widget->ui.ObjColorBt;
	chose_bkg_color_button = param_widget->ui.BkgColorBt;
	chose_obj_color_button->setAutoFillBackground(true);
	chose_bkg_color_button->setAutoFillBackground(true);

	paint_obj_bt = param_widget->ui.paint_obj_radioButton;
	paint_bkg_bt = param_widget->ui.paint_bkg_radioButton;

	lamda_edit = param_widget->ui.lamda_lineEdit;
	kappa_edit = param_widget->ui.kappa_lineEdit;

	QValidator *validator = new QDoubleValidator(0.0, 10.0, 10, this);
	lamda_edit->setValidator( validator );
	lamda_edit->setToolTip(QString::fromLocal8Bit("Data项相对大小"));
	kappa_edit->setValidator( validator );
	kappa_edit->setToolTip(QString::fromLocal8Bit("Smooth项相对大小"));

	QValidator *validator2 = new QIntValidator(20, 200, this);
	param_widget->ui.canny_min_edit->setValidator(validator2);
	param_widget->ui.canny_max_edit->setValidator(validator2);

	obj_color = Qt::yellow;
	bkg_color = Qt::red;

	zoom_in = param_widget->ui.zoom_in;
	zoom_out = param_widget->ui.zoom_out;
	image_slider = param_widget->ui.image_slider;
	image_slider->setTracking(true);
	image_slider->setTickPosition(QSlider::TicksBelow);
	image_slider->setTickInterval(s_tick_interval);
	image_slider->setMaximum (s_max_slide_value);
	image_slider->setMinimum (s_min_slide_value + 1);

	dot_label = param_widget->ui.dot_label;
	dot_label_num = param_widget->ui.dot_label_num;
	dot_width_slider = param_widget->ui.dot_width_slider;
	dot_width_changed(dot_width_slider->value());

	/// segment method action
	segment_action_group = new QActionGroup(this);
	segment_action_group->addAction(ui.actionLazyBrush);
	segment_action_group->addAction(ui.actionGrabCut);
	segment_action_group->addAction(ui.actionHist);
	segment_action_group->addAction(ui.actionMixture);
	ui.actionGrabCut->setChecked(true);
	param_widget->ui.stackedWidget->hide();

	/// image window orientation
	QActionGroup *image_window_group = new QActionGroup(this);
	image_window_group->addAction(ui.actionHorizontal);
	image_window_group->addAction(ui.actionVertical);
	ui.actionVertical->setChecked(true);
}

void QGrabCut::init_connects()
{
	QObject:: connect(ui.action_Open, SIGNAL(triggered()), this, SLOT(chose_image_file()));
	QObject:: connect(chose_obj_color_button, SIGNAL(clicked()), this, SLOT(chose_object_color()));
	QObject:: connect(chose_bkg_color_button, SIGNAL(clicked()), this, SLOT(chose_bkg_color()));
	QObject:: connect(excute_button, SIGNAL(clicked()), this, SLOT(excute()));

	QObject:: connect(zoom_in, SIGNAL(clicked(bool)), this, SLOT(zoomin_image()));
	QObject:: connect(zoom_out, SIGNAL(clicked(bool)), this, SLOT(zoomout_image()));
	QObject:: connect(image_slider, SIGNAL(valueChanged(int )), this, SLOT(scale_image_abs(int)));

	QObject:: connect(paint_obj_bt, SIGNAL(clicked(bool )), this, SLOT(paint_object_changed()));
	QObject:: connect(paint_bkg_bt, SIGNAL(clicked(bool )), this, SLOT(paint_object_changed()));

	QObject:: connect(dot_width_slider, SIGNAL(valueChanged(int )), this, SLOT(dot_width_changed(int)));
	QObject::connect(segment_action_group, SIGNAL(triggered(QAction*)), this, SLOT(segment_method_changed(QAction*)));
	QObject::connect(ui.actionVertical->actionGroup(), SIGNAL(triggered(QAction*)), this, SLOT(img_window_orientation_changed(QAction*)));

	QObject:: connect(param_widget->ui.canny_checkbox, SIGNAL(stateChanged(int )), this, SLOT(canny_chk_changed(int)));
	QObject:: connect(param_widget->ui.use_canny_input, SIGNAL(toggled(bool)), this, SLOT(use_canny_or_log()));
	QObject:: connect(param_widget->ui.use_log_input, SIGNAL(toggled(bool)), this, SLOT(use_canny_or_log()));
}

void QGrabCut::canny_chk_changed(int state)
{
	if (state == Qt::Checked) param_widget->ui.canny_erode_checkbox->setEnabled(true);
	else param_widget->ui.canny_erode_checkbox->setEnabled(false);
}

void QGrabCut::use_canny_or_log()
{
	if (param_widget->ui.use_canny_input->isChecked())
	{
		param_widget->ui.canny_checkbox->setChecked(true);
	}
	else
	{
		param_widget->ui.canny_checkbox->setChecked(false);
	}
}

void QGrabCut::img_window_orientation_changed(QAction*action)
{
	if (action == ui.actionVertical)
	{
		splitter->setOrientation(Qt::Vertical);
	}
	else if (action == ui.actionHorizontal)
	{
		splitter->setOrientation(Qt::Horizontal);
	}
}

void QGrabCut::segment_method_changed(QAction *action)
{
	if (ui.actionGrabCut->isChecked() || ui.actionHist->isChecked())
	{
		param_widget->ui.stackedWidget->hide();
	}
	else if (ui.actionLazyBrush->isChecked())
	{
		param_widget->ui.stackedWidget->setCurrentIndex(0);
		param_widget->ui.stackedWidget->show();
	}
	else if (ui.actionMixture->isChecked())
	{
		param_widget->ui.stackedWidget->setCurrentIndex(1);
		param_widget->ui.stackedWidget->show();
	}
}

void QGrabCut::chose_image_file()
{
	QString fileName = QFileDialog::getOpenFileName(this, QString("Chose Image File"),QString("/"), QString("Image Files (*.png *.jpg *.bmp)"));
	if (fileName.isNull()) return;

	file_name = fileName;
	if (!image.load(file_name))
	{
		QMessageBox::information(this, QString("Unable to open the Image"), QString("Please select a valid image.")); 
		return;
	}

	double _scale_ratio = 640.0/image.width() < 400.0/image.height() ? 640.0/image.width() : 400.0/image.height();
	image = image.scaled(image.size() * _scale_ratio);
	image_widget->SetImage(&image);
}

void QGrabCut::excute()
{
	lamda = lamda_edit->text().toDouble();
	kappa = kappa_edit->text().toDouble();

	if(lamda == 0.0 || kappa == 0.0 || image.isNull())
	{
		QMessageBox msgBox;
		msgBox.setText("The input value is invalid.");
		msgBox.exec();
		return ;
	}

	if (!image_widget->seeds.size())
	{
		QMessageBox msgBox;
		msgBox.setText("Please draw some object and background seeds.");
		msgBox.exec();
		return ;
	}

	QImage mask_img = image_widget->make_mask_image();
	image_widget_bottom->SetImage(&mask_img);

	cv::waitKey();

	QImage segment_img;
	if (ui.actionLazyBrush->isChecked())
	{
		segment_img = segment_lazybrush(image, mask_img);
	}
	else if (ui.actionGrabCut->isChecked())
	{
		segment_img = segment_grabcut(image, mask_img);
	}
	else if (ui.actionHist->isChecked())
	{
		segment_img = segment_hist(image, mask_img);
	}
	else if (ui.actionMixture->isChecked())
	{
		segment_img = segment_mixture(image, mask_img);
	}

	image_widget_bottom->SetImage(&segment_img);
}

QImage QGrabCut::segment_lazybrush(QImage &image, QImage &mask_img)
{
	QImage result = image;

	cv::Mat img_mat;
	cv::Mat mask_mat;
	cv::Mat out_seg;

	QImage2Mat(image, img_mat);
	mask_image_to_mask_mat(mask_img, mask_mat);

	LazyBrushParam param;

	param.sd_param.lamda = param_widget->ui.lamda_lineEdit->text().toDouble();
	param.sd_param.kappa = param_widget->ui.kappa_lineEdit->text().toDouble();

	param.canny_param.canny_min = param_widget->ui.canny_min_edit->text().toInt();
	param.canny_param.canny_max = param_widget->ui.canny_max_edit->text().toInt();

	param.use_canny_input = param_widget->ui.use_canny_input->isChecked();
	param.use_canny_enhance = param_widget->ui.canny_checkbox->isChecked();
	param.canny_erode = param_widget->ui.canny_erode_checkbox->isChecked();

	LazyBrushSegmentor lazybrusher(param);

	lazybrusher.segment(img_mat, mask_mat, out_seg);

	get_image_from_segmat(result, out_seg);

	return result;
}

void QGrabCut::mask_image_to_mask_mat(QImage &mask_img, cv::Mat &mask_mat)
{
	mask_mat.create(mask_img.height(), mask_img.width(), CV_8SC1);

	for (int y = 0; y < mask_mat.rows; y++)
	{
		for (int x = 0; x < mask_mat.cols; x++)
		{
			QRgb pix = mask_img.pixel(x, y);
			if (pix == 0xFF000000)
			{
				mask_mat.at<char>(y, x) = MASK_BACKGROUND;
			}
			else if (pix == 0xFFFFFFFF) 
			{
				mask_mat.at<char>(y, x) = MASK_FOREGROUND;
			}
			else
			{
				mask_mat.at<char>(y, x) = MASK_UNKNOW;
			}
		}
	}
}

QImage QGrabCut::segment_grabcut(QImage &image, QImage &mask_img)
{
	QImage result = image;

	cv::Mat img_mat;
	cv::Mat mask_mat;
	cv::Mat out_seg;

	QImage2Mat(image, img_mat);
	mask_image_to_mask_mat(mask_img, mask_mat);

// 	cv::namedWindow("source_image");
// 	cv::namedWindow("seed_image");
// 	cv::imshow("source_image", img_mat);
// 	cv::imshow("seed_image", mask_mat);
// 	cv::waitKey();

	NMH::GrabCutParam param;
	NMH::GrabCutSegmentor grabcut_segmentor(param);
	
	grabcut_segmentor.segment(img_mat, mask_mat, out_seg);

	get_image_from_segmat(result, out_seg);

	return result;
}

void QGrabCut::get_image_from_segmat(QImage &img, cv::Mat &out_seg)
{
	for (int y = 0; y < out_seg.rows; y++)
	{
		for (int x = 0; x < out_seg.cols; x++)
		{
			char seg_value = out_seg.at<char>(y, x);
			if (seg_value == SegmentationBackground)
			{
				img.setPixel(x, y, 0xFF000000);
			}
		}
	}
}

QImage QGrabCut::segment_hist(QImage &image, QImage &mask_img)
{
	QImage result = image;

	cv::Mat img_mat;
	cv::Mat mask_mat;
	cv::Mat out_seg;

	QImage2Mat(image, img_mat);
	mask_image_to_mask_mat(mask_img, mask_mat);

	NMH::GraphCutParam param;
	param.sd_param.lamda = param_widget->ui.lamda_lineEdit->text().toDouble();
	param.sd_param.kappa = param_widget->ui.kappa_lineEdit->text().toDouble();

	NMH::GraphCutSegmentor graphcut_segmentor(param);

	graphcut_segmentor.segment(img_mat, mask_mat, out_seg);

	get_image_from_segmat(result, out_seg);

	return result;
}

QImage QGrabCut::segment_mixture(QImage &image, QImage &mask_img)
{
	QImage result = image;

	cv::Mat img_mat;
	cv::Mat mask_mat;
	cv::Mat out_seg;

	QImage2Mat(image, img_mat);
	mask_image_to_mask_mat(mask_img, mask_mat);

	NMH::MixtureParam param;
	param.sd_param.lamda = param_widget->ui.lamda_lineEdit->text().toDouble();
	param.sd_param.kappa = param_widget->ui.kappa_lineEdit->text().toDouble();

	param.canny_param.canny_min = param_widget->ui.canny_min_edit->text().toInt();
	param.canny_param.canny_max = param_widget->ui.canny_max_edit->text().toInt();

	param.edge_weight = param_widget->ui.edge_weight_lineEdit->text().toDouble();
	if (param_widget->ui.linear_radioButton->isChecked())
	{
		param.mixture_type = MT_Linear;
	}
	else if (param_widget->ui.comboBox->currentIndex() == 0)
	{
		param.mixture_type = MT_Squared;
	}
	else if (param_widget->ui.comboBox->currentIndex() == 1)
	{
		param.mixture_type = MT_Cubical;
	}

	NMH::MixtureSegmentor segmentor(param);

	segmentor.segment(img_mat, mask_mat, out_seg);

	get_image_from_segmat(result, out_seg);

	return result;
}

void QGrabCut::chose_object_color()
{
	obj_color = QColorDialog::getColor(obj_color, this);
	int red = obj_color.red();
	int green = obj_color.green();
	int blue = obj_color.blue();
	QString string = QString("color:red;background-color:rgb(%1,%2,%3)").arg(red).arg(green).arg(blue);
	chose_obj_color_button->setStyleSheet(string);
}

void QGrabCut::chose_bkg_color()
{
	bkg_color = QColorDialog::getColor(bkg_color, this);
	int red = bkg_color.red();
	int green = bkg_color.green();
	int blue = bkg_color.blue();
	QString string = QString("color:red;background-color:rgb(%1,%2,%3)").arg(red).arg(green).arg(blue);
	chose_bkg_color_button->setStyleSheet(string);
}

void QGrabCut::zoomin_image()
{
	if(image.isNull()) return;

	QPoint scroll_area_pos = QPoint(scroll_area->size().width()/2, scroll_area->size().height()/2);
	QPoint global_pos = scroll_area->mapToGlobal(scroll_area_pos);
	QPoint local_pos = image_widget->mapFromGlobal(global_pos);
	image_widget->ZoomIn(local_pos);
}

void QGrabCut::zoomout_image()
{
	if(image.isNull()) return;

	QPoint global_pos = scroll_area->mapToGlobal(QPoint(scroll_area->size().width()/2, scroll_area->size().height()/2));
	QPoint local_pos = image_widget->mapFromGlobal(global_pos);
	image_widget->ZoomOut(local_pos);
}

void QGrabCut::scale_image_abs(int absValue)
{
	if(image.isNull()) return;
	//TODO:
	QPoint global_pos = scroll_area->mapToGlobal(QPoint(scroll_area->size().width()/2, scroll_area->size().height()/2));
	QPoint local_pos = image_widget->mapFromGlobal(global_pos);
	image_widget->ScaleAtPointAbs(local_pos, 1.0 + -1.0 * absValue/(double)s_min_slide_value);
}

void QGrabCut::paint_object_changed()
{
	if (paint_obj_bt->isChecked()) obj_paint = true;
	else if (paint_bkg_bt->isChecked()) obj_paint = false;
}

void QGrabCut::dot_width_changed(int _value)
{
	line_width = _value;
	QString text = QString::number(dot_width_slider->value());
	dot_label_num->setText(text);
	draw_point_on_dotLabel(_value);
}

void QGrabCut::draw_point_on_dotLabel(int _value)
{
	QImage image(dot_label->size(), QImage::Format_RGB32);
	image.fill(0x00FFFFFF);
	QPainter painter(&image);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));
	painter.setPen(QPen(Qt::black, _value, Qt::SolidLine, Qt::RoundCap));

	painter.drawPoint(dot_label->size().width()/2, dot_label->size().height()/2);
	dot_label->setPixmap(QPixmap::fromImage(image));
}

QGrabCut::~QGrabCut()
{

}
