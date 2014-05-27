#ifndef _IMAGE_LABEL_H
#define _IMAGE_LABEL_H

#include <QtGui/QImage>

#include "ImageWidget.h"

#define BACKGROUND_COLOR 0xFF000000
#define FOREGROUND_COLOR  0xFF000001
#define UNDEFINED_COLOR		0xFF000002

class QGrabCut;

class ImageLabel: public ImageWidget
{
	Q_OBJECT

	friend class QGrabCut;

public:
	ImageLabel(QImage *img);
	virtual ~ImageLabel();
	
	QImage make_mask_image();

private:
	virtual void DrawPoints(QPaintDevice * device);
	virtual void release();

protected:
	virtual void mouseMoveEvent ( QMouseEvent * event );
	virtual void paintEvent(QPaintEvent *event);

private:
	std::vector<SeedRecord> seeds;
};


#endif