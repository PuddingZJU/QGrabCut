#include <QPainter>
#include <QPoint>
#include <QScrollBar>
#include <QSlider>
#include <QScrollBar>

#include "ImageWidget.h"
#include "ParamWidget.h"
#include "QGrabCut.h"

ImageWidget::ImageWidget(QImage *img /* = NULL */)
{
	if (img) image = *img;
	left_mouse_pressed = right_mouse_pressed = false;
	scale = 1.0;
	response_right_mouse = true;
	has_record_rect = false;
}

ImageWidget::~ImageWidget()
{

}

void ImageWidget::SetImage(QImage* img)
{
	if (img) image = *img;
	if (!image.isNull())
	{
		setPixmap(QPixmap::fromImage(image));
		QSize _size = this->parentWidget()->size();
		QSize _image_size = image.size();
		QSize _this_size = size();
		scale = ((double)_size.width()/_image_size.width()) < ((double)_size.height()/_image_size.height())? (double(_size.width())/_image_size.width()) : (double(_size.height())/_image_size.height());
		initial_scale = scale;
		resize(scale * _image_size);
		release();

#ifdef _DEBUG
		const QPixmap * pixmap = this->pixmap();
		QSize pixmap_size = pixmap->size();
#endif
	}
}

void ImageWidget::release()
{
	obj_points.clear();
	obj_rects.clear();
	bkg_points.clear();
	bkg_rects.clear();
}

void ImageWidget::mouseMoveEvent( QMouseEvent * event)
{
	const QPoint &pos = event->globalPos();
	if (left_mouse_pressed)
	{
		QScrollArea *scroll_area = dynamic_cast<QScrollArea *>((this->parentWidget()->parentWidget()));
		/// 移动滚动条
		QScrollBar *_scroll_bar = scroll_area->horizontalScrollBar();
		QScrollBar *_v_scroll_bar = scroll_area->verticalScrollBar();
		_scroll_bar->setValue(_scroll_bar->value() - pos.x() + move_pos.x());
		_v_scroll_bar->setValue(_v_scroll_bar->value() - pos.y() + move_pos.y());
		move_pos = pos;
	}
	else if (right_mouse_pressed)
	{
		if (!response_right_mouse) return;

		/// 依赖于QGrabCut
		QGrabCut* parent = dynamic_cast<QGrabCut*>(this->nativeParentWidget());
		QComboBox *combo_box_obj = parent->param_widget->ui.comboBox_obj;
		QComboBox *combo_box_bkg = parent->param_widget->ui.comboBox_bkg;

		DotPoint point;
		point.local_pos = event->pos();
		point.line_width = parent->line_width;
		point.scale = this->scale;

		DotRect rect;
		rect.scale = scale;

		if (parent->obj_paint && combo_box_obj->currentIndex() == 0)
		{
			point.color = parent->obj_color;
			obj_points.push_back(point);

			///加入开始开下的那个点
			point.local_pos = press_pos_local;
			obj_points.push_back(point);
		}
		else if (parent->obj_paint && combo_box_obj->currentIndex() == 1)
		{
			if (!has_record_rect)
			{
				rect.color = parent->obj_color;
				rect.local_rect.setTopLeft(press_pos_local);
				rect.local_rect.setBottomRight(event->pos());
				obj_rects.push_back(rect);
				has_record_rect = true;
			}
			else
			{
				DotRect &trect = obj_rects[obj_rects.size() - 1];
				trect.local_rect.setBottomRight(event->pos());
			}
		}
		/// 背景
		else if (!parent->obj_paint && combo_box_bkg->currentIndex() == 0)
		{
			point.color = parent->bkg_color;
			bkg_points.push_back(point);
		}
		else if (!parent->obj_paint && combo_box_bkg->currentIndex() == 1)
		{
			if (!has_record_rect)
			{
				rect.color = parent->bkg_color;
				rect.local_rect.setTopLeft(press_pos_local);
				rect.local_rect.setBottomRight(event->pos());
				bkg_rects.push_back(rect);
				has_record_rect = true;
			}
			else
			{
				DotRect &trect = bkg_rects[bkg_rects.size() - 1];
				trect.local_rect.setBottomRight(event->pos());
			}
		}
		this->repaint();
	}
}

void ImageWidget::mousePressEvent( QMouseEvent * e )
{
	Qt::MouseButton mb = e->button();
	if (mb == Qt::LeftButton) left_mouse_pressed = true;
	else if (mb == Qt::RightButton) right_mouse_pressed = true;
	else if (mb == Qt::NoButton) 
	{
		left_mouse_pressed = right_mouse_pressed = false;
	}

	has_record_rect = false;
	move_pos_local = press_pos_local = e->pos();
	move_pos = press_pos = e->globalPos();
}

void ImageWidget::mouseReleaseEvent( QMouseEvent * e )
{
	left_mouse_pressed = right_mouse_pressed = false;
	release_pos = e->globalPos();
	release_pos_local = e->pos();
}

void ImageWidget::wheelEvent(QWheelEvent *e)
{
	QPoint cursor_pos = QCursor::pos();
	QPoint local_original_pos = this->mapFromGlobal(cursor_pos);

	int delta = e->delta();
	double _delta = 1.0 + delta/1000.0;

	ScaleAtPoint(local_original_pos, _delta);
}

void ImageWidget::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	DrawPoints(this);
}

void ImageWidget::DrawPoints(QPaintDevice * device)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	QGrabCut* parent = dynamic_cast<QGrabCut*>(this->nativeParentWidget());

	for (int ii = 0; ii < bkg_points.size(); ii++)
	{
		painter.setPen(QPen(bkg_points[ii].color, bkg_points[ii].line_width * scale/bkg_points[ii].scale, Qt::SolidLine, Qt::RoundCap));
		painter.drawPoint(bkg_points[ii].local_pos * scale/bkg_points[ii].scale);
	}

	for (int ii = 0; ii < bkg_rects.size(); ii++)
	{
		painter.setBrush(QBrush(bkg_rects[ii].color, Qt::SolidPattern));
		painter.setPen(QPen(bkg_rects[ii].color, 1, Qt::SolidLine, Qt::RoundCap));
		QRect tmp_rect;
		tmp_rect.setTopLeft(bkg_rects[ii].local_rect.topLeft() * scale/bkg_rects[ii].scale);
		tmp_rect.setBottomRight(bkg_rects[ii].local_rect.bottomRight() * scale/bkg_rects[ii].scale);
		painter.drawRect(tmp_rect);
	}

	for (int ii = 0; ii < obj_points.size(); ii++)
	{
		painter.setPen(QPen(obj_points[ii].color,obj_points[ii].line_width * scale/obj_points[ii].scale, Qt::SolidLine, Qt::RoundCap));
		painter.drawPoint(obj_points[ii].local_pos * scale/obj_points[ii].scale);
	}

	for (int ii = 0; ii < obj_rects.size(); ii++)
	{
		painter.setBrush(QBrush(obj_rects[ii].color, Qt::SolidPattern));
		painter.setPen(QPen(obj_rects[ii].color, 1, Qt::SolidLine, Qt::RoundCap));
		QRect tmp_rect;
		tmp_rect.setTopLeft(obj_rects[ii].local_rect.topLeft() * scale/obj_rects[ii].scale);
		tmp_rect.setBottomRight(obj_rects[ii].local_rect.bottomRight() * scale/obj_rects[ii].scale);
		painter.drawRect(tmp_rect);
	}
}

void ImageWidget::resizeEvent(QResizeEvent * event)
{
	if (image.isNull()) return;
	QSize _image_size = image.size();
	QSize _this_size = size();
	scale = ((double)_this_size.width()/_image_size.width()) < ((double)_this_size.height()/_image_size.height())? (double(_this_size.width())/_image_size.width()) : (double(_this_size.height())/_image_size.height());
}

void ImageWidget::ZoomIn(const QPoint& local_pos)
{
	ScaleAtPoint(local_pos, 1.1);
}

void ImageWidget::ZoomOut(const QPoint& local_pos)
{
	ScaleAtPoint(local_pos, 0.9);
}

void ImageWidget::ScaleAtPoint(const QPoint& pos, double _scale)
{
	if (image.isNull()) return;
	const QPoint& local_original_pos = pos;

	if (scale * _scale < 0.05) return;
	scale *= _scale;

	ScaleAtPointAbs(local_original_pos, scale);
}

void ImageWidget::ScaleAtPointAbs(const QPoint& pos, double _abs_scale)
{
	if (image.isNull()) return;

	const QPoint& local_original_pos = pos;
	double ratio = (double)pos.x()/size().width();
	double ratio_y = (double)pos.y()/size().height();
	if (_abs_scale < 0.05) return;

	QPoint local_dest_pos = QPoint(image.size().width()* _abs_scale * ratio, image.size().height() * _abs_scale * ratio_y);

	QScrollArea *scroll_area = dynamic_cast<QScrollArea*>((this->parentWidget()->parentWidget()));
	/// 移动滚动条
	QScrollBar *_scroll_bar = scroll_area->horizontalScrollBar();
	QScrollBar *_v_scroll_bar = scroll_area->verticalScrollBar();

	int v1 = _scroll_bar->value();
	int v2 = _v_scroll_bar->value();
	QPoint p1 = this->mapTo(scroll_area, local_original_pos);
	QPoint p2 = this->mapTo(scroll_area, local_dest_pos);

	this->resize(image.size() * _abs_scale);

	_scroll_bar->setValue(v1 + local_dest_pos.x() - local_original_pos.x());
	_v_scroll_bar->setValue(v2 + local_dest_pos.y() - local_original_pos.y());
}
