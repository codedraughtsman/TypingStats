#include "mainwindow.h"

#include "mainwidget.h"
#include <QApplication>

int main( int argc, char *argv[] ) {
	QApplication a( argc, argv );
	MainWidget w;
	w.show();

	return a.exec();
}
