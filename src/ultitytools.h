#ifndef ULTITYTOOLS_H
#define ULTITYTOOLS_H

#include <QtWidgets/QMainWindow>
#include "ui_ultitytools.h"
#include "SerialPort.h"

class UltityTools : public QMainWindow
{
	Q_OBJECT

public:
	UltityTools(QWidget *parent = 0);
	~UltityTools();

private:
	Ui::UltityToolsClass ui;
	SerialPort* m_pSerial;

private slots:
	void OnBtHexCompare();
	void OnBtSerialOpenClicked();
	void OnBtSerialCloseClicked();
};


#endif // ULTITYTOOLS_H
