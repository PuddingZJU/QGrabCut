#ifndef PARAMWIDGET_H
#define PARAMWIDGET_H

#include <QWidget>
#include "ui_ParamWidget.h"

class QGrabCut;
class ImageWidget;

class ParamWidget : public QWidget
{
	Q_OBJECT

	friend class QGrabCut;
	friend class ImageWidget;

public:
	ParamWidget(QWidget *parent = 0);
	~ParamWidget();

public:
	Ui::ParamWidget ui;
};

#endif // PARAMWIDGET_H
