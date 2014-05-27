#ifndef IMAGE_WIDGET_H
#define IMAGE_WIDGET_H

#include <QtWidgets>
#include <QtGui/QPaintEvent>
#include <QLabel>
#include <QPixmap>
#include <QPoint>
#include <QColor>

#include <vector>

struct DotPoint 
{
	double scale;
	QPoint local_pos;
	int line_width;
	QColor color;
};

struct DotRect
{
	double scale;
	QRect local_rect;
	QColor color;
};

enum SeedType
{
	ST_Point,
	ST_Rect,

	ST_Count
};

enum SeedCategory
{
	SC_Obj,
	SC_Bkg,

	SC_Count
};

struct SeedRecord
{
	SeedType type;
	SeedCategory category;

	DotPoint point;
	DotRect rect;
};

class QDragEnterEvent;
class QDragMoveEvent;
class QMouseEvent;
class QPixMap;
class QResizeEvent;
class QGrabCut;

class ImageWidget: public QLabel
{
	Q_OBJECT

	friend class QGrabCut;

public:
	ImageWidget(QImage *img);
	virtual ~ImageWidget();

	void SetImage(QImage* img);
	void ZoomIn(const QPoint& local_pos);
	void ZoomOut(const QPoint& local_pos);
	void ScaleAtPointAbs(const QPoint& pos, double _abs_scale);

	void set_response_right_mouse(bool _response)
	{
		response_right_mouse = _response;
	}

private:
	virtual void DrawPoints(QPaintDevice * device);
	virtual void release();
	void ScaleAtPoint(const QPoint& pos, double _scale);

protected:
	virtual void mouseMoveEvent ( QMouseEvent * event );
	virtual void	mousePressEvent ( QMouseEvent * e );
	virtual void	mouseReleaseEvent ( QMouseEvent * e );
	virtual void wheelEvent(QWheelEvent *e);
	virtual void paintEvent(QPaintEvent *event);
	virtual void resizeEvent(QResizeEvent * event);

protected:
	QImage image;
	QPoint press_pos;
	QPoint release_pos;
	QPoint move_pos;
	
	QPoint press_pos_local;
	QPoint release_pos_local;
	QPoint move_pos_local;

	bool left_mouse_pressed;
	bool right_mouse_pressed;

	double scale;
	double initial_scale;

	bool response_right_mouse;
	bool has_record_rect;

	std::vector<DotPoint> obj_points;
	std::vector<DotPoint> bkg_points;

	std::vector<DotRect> obj_rects;
	std::vector<DotRect> bkg_rects;
};

#endif