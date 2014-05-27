#include <QPainter>
#include <QPoint>
#include <QScrollBar>
#include <QSlider>
#include <QScrollBar>

#include "ImageLabel.h"
#include "ParamWidget.h"
#include "QGrabCut.h"

/// ImageLabel function
ImageLabel::~ImageLabel()
{

}

ImageLabel::ImageLabel(QImage *img): ImageWidget(img)
{

}

void ImageLabel::release()
{
	obj_points.clear();
	obj_rects.clear();
	bkg_rects.clear();
	bkg_points.clear();

	seeds.clear();
}

void ImageLabel::mouseMoveEvent( QMouseEvent * event)
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

		SeedRecord seed_record;

		DotPoint &point = seed_record.point;
		point.line_width = parent->line_width;
		point.scale = this->scale;

		DotRect &rect = seed_record.rect;
		rect.scale = this->scale;

		if (parent->obj_paint)
		{
			seed_record.category = SC_Obj;

			if (combo_box_obj->currentIndex() == 0)
			{
				seed_record.type = ST_Point;

				point.color = parent->obj_color;

				///加入开始按下的那个点
				point.local_pos = press_pos_local;
				seeds.push_back(seed_record);

				point.local_pos = event->pos();
				seeds.push_back(seed_record);
			}
			else if (combo_box_obj->currentIndex() == 1)
			{
				if (!has_record_rect)
				{
					seed_record.type = ST_Rect;

					rect.color = parent->obj_color;
					rect.local_rect.setTopLeft(press_pos_local);
					rect.local_rect.setBottomRight(event->pos());
					seeds.push_back(seed_record);
					has_record_rect = true;
				}
				else
				{
					SeedRecord &tmp_record = seeds[seeds.size() - 1];
					tmp_record.rect.local_rect.setBottomRight(event->pos());
				}
			}
		}
		/// 背景
		else 
		{
			seed_record.category = SC_Bkg;

			if ( combo_box_bkg->currentIndex() == 0)
			{
				seed_record.type = ST_Point;

				point.color = parent->bkg_color;

				point.local_pos = event->pos();
				seeds.push_back(seed_record);
			}
			else if (combo_box_bkg->currentIndex() == 1)
			{
				if (!has_record_rect)
				{
					seed_record.type = ST_Rect;

					rect.color = parent->bkg_color;

					rect.local_rect.setTopLeft(press_pos_local);
					rect.local_rect.setBottomRight(event->pos());
					seeds.push_back(seed_record);
					has_record_rect = true;
				}
				else
				{
					SeedRecord &tmp_record = seeds[seeds.size() - 1];
					tmp_record.rect.local_rect.setBottomRight(event->pos());
				}
			}
		}
		this->repaint();
	}
}

void ImageLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	DrawPoints(this);
}

void ImageLabel::DrawPoints(QPaintDevice * device)
{
	QPainter painter(device);
	painter.setRenderHint(QPainter::Antialiasing, true);
	QGrabCut* parent = dynamic_cast<QGrabCut*>(this->nativeParentWidget());

	for (int ii = 0; ii < seeds.size(); ii++)
	{
		SeedRecord &seed_record = seeds[ii];
		if (seed_record.type == ST_Point)
		{
			painter.setPen(QPen(seed_record.point.color, seed_record.point.line_width * scale/seed_record.point.scale, Qt::SolidLine, Qt::RoundCap));
			painter.drawPoint(seed_record.point.local_pos * scale/seed_record.point.scale);
		}
		else if (seed_record.type == ST_Rect)
		{
			painter.setBrush(QBrush(seed_record.rect.color, Qt::SolidPattern));
			painter.setPen(QPen(seed_record.rect.color, 1, Qt::SolidLine, Qt::RoundCap));
			QRect tmp_rect;
			tmp_rect.setTopLeft(seed_record.rect.local_rect.topLeft() * scale/seed_record.rect.scale);
			tmp_rect.setBottomRight(seed_record.rect.local_rect.bottomRight() * scale/seed_record.rect.scale);
			painter.drawRect(tmp_rect);
		}
	}
}

QImage ImageLabel::make_mask_image()
{
	QImage paint_image(image.size(), QImage::Format_RGB32);
	paint_image.fill(0xFF7F7F7F);

	QPainter painter(&paint_image);
	painter.setRenderHint(QPainter::Antialiasing, true);

	for (int ii = 0; ii < seeds.size(); ii++)
	{
		SeedRecord &seed_record = seeds[ii];

		if (seed_record.category == SC_Bkg)
		{
			painter.setPen(QPen(QColor(0, 0, 0), seed_record.point.line_width/seed_record.point.scale, Qt::SolidLine, Qt::RoundCap));
			painter.setBrush(QBrush(QColor(0, 0, 0), Qt::SolidPattern));
		}
		else if (seed_record.category == SC_Obj)
		{
			painter.setPen(QPen(QColor(0xFF, 0xFF, 0xFF), seed_record.point.line_width/seed_record.point.scale, Qt::SolidLine, Qt::RoundCap));
			painter.setBrush(QBrush(QColor(0xFF, 0xFF, 0xFF), Qt::SolidPattern));
		}

		if (seed_record.type == ST_Point)
		{
			painter.drawPoint(seed_record.point.local_pos/seed_record.point.scale);
		}
		else if (seed_record.type == ST_Rect)
		{
			QRect tmp_rect;
			tmp_rect.setTopLeft(seed_record.rect.local_rect.topLeft()/seed_record.rect.scale);
			tmp_rect.setBottomRight(seed_record.rect.local_rect.bottomRight()/seed_record.rect.scale);
			painter.drawRect(tmp_rect);
		}
	}

	return paint_image;
}