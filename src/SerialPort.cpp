#include "SerialPort.h"

#include <qDebug>

SerialPort::SerialPort()
{
    this->setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);
    this->setDataBits(QSerialPort::Data8);
    this->setFlowControl(QSerialPort::NoFlowControl);
    this->setStopBits(QSerialPort::OneStop);
    this->setParity(QSerialPort::NoParity);
    connect(this,SIGNAL(readyRead()),this,SLOT(slot_DataRec()));
}

bool SerialPort::openPort(QString port)
{
    this->setPortName(port);
    this->close();
    if(this->open(QIODevice::ReadWrite))
        return true;
    else
        return false;

}

void SerialPort::slot_DataRec()
{
    QByteArray temp = this->read(1);
    qDebug()<<temp;
}

void SerialPort::writeMsg(QString msg)
{
    this->write(msg.toLatin1());
}