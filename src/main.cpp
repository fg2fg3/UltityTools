#include "ultitytools.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UltityTools w;
	w.show();
	return a.exec();
}
