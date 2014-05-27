#include <QApplication>

#include "QGrabCut.h"

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	
	//ImageSegmentation img_seg;
	//img_seg.show();

	QGrabCut grabcut;
	grabcut.show();

	app.exec();
	return 0;
}