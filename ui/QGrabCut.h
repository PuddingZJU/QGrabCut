#ifndef QGRABCUT_H
#define QGRABCUT_H

#include <QtWidgets>
#include <QMainWindow>
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
#include <QPushButton>
#include <QRadioButton>

#include "cv.h"

#include "ui_QGrabCut.h"

class ImageWidget;
class ImageLabel;
class ParamWidget;

class QActionGroup;
class QSplitter;

class QGrabCut : public QMainWindow
{
	Q_OBJECT

	friend class ImageWidget;
	friend class ImageLabel;

public:
	QGrabCut(QWidget *parent = 0, Qt::WindowFlags  flags = 0);
	~QGrabCut();

private:
	const static double s_delta;
	const static double s_tick_interval;
	const static int s_max_slide_value;
	const static int s_min_slide_value;
	const static int s_zoomin_ratio;


private slots:
	void chose_image_file();
	void excute();
	void chose_object_color();
	void chose_bkg_color();
	void zoomin_image();
	void zoomout_image();
	void scale_image_abs(int value);
	void paint_object_changed();
	void dot_width_changed(int _value);
	void segment_method_changed(QAction *action);
	void img_window_orientation_changed(QAction*action);
	void canny_chk_changed(int state);
	void use_canny_or_log();

private:
	void init_components();
	void init_connects();

	void draw_point_on_dotLabel(int _value);

	QImage segment_lazybrush(QImage &image, QImage &mask_img);
	QImage segment_grabcut(QImage &image, QImage &mask_img);
	QImage segment_hist(QImage &image, QImage &mask_img);
	QImage segment_mixture(QImage &image, QImage &mask_img);
	void get_image_from_segmat(QImage &img, cv::Mat &out_seg);
	void mask_image_to_mask_mat(QImage &mask_img, cv::Mat &mask_mat);

private:
	QColor obj_color;
	QColor bkg_color;
	bool obj_paint;
	int line_width;

	double lamda;
	double kappa;

	QString file_name;
	QImage image;

private:

	QPushButton *chose_obj_color_button;
	QPushButton *chose_bkg_color_button;
	QPushButton *excute_button;

	QRadioButton *paint_obj_bt;
	QRadioButton *paint_bkg_bt;

	QLineEdit *lamda_edit;
	QLineEdit *kappa_edit;

	QToolButton *zoom_in;
	QToolButton *zoom_out;
	QSlider *image_slider;

	QSplitter *splitter;
	/// top scroll_area
	QScrollArea *scroll_area;
	/// bottom scroll_area
	QScrollArea *scroll_area_bottom;

	QLabel *dot_label;
	QLabel *dot_label_num;
	QSlider *dot_width_slider;

	QActionGroup *segment_action_group;

	Ui::MainWindow ui;

	ParamWidget *param_widget;
	ImageLabel *image_widget;
	ImageLabel *image_widget_bottom;
};

#endif // QGRABCUT_H
