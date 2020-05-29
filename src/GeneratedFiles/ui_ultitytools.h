/********************************************************************************
** Form generated from reading UI file 'ultitytools.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ULTITYTOOLS_H
#define UI_ULTITYTOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UltityToolsClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *m_pBtSerialOpen;
    QPushButton *m_pBtHexCompare;
    QPushButton *m_pBtSerialClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UltityToolsClass)
    {
        if (UltityToolsClass->objectName().isEmpty())
            UltityToolsClass->setObjectName(QStringLiteral("UltityToolsClass"));
        UltityToolsClass->resize(600, 400);
        centralWidget = new QWidget(UltityToolsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 160, 83));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_pBtSerialOpen = new QPushButton(gridLayoutWidget);
        m_pBtSerialOpen->setObjectName(QStringLiteral("m_pBtSerialOpen"));

        gridLayout->addWidget(m_pBtSerialOpen, 1, 0, 1, 1);

        m_pBtHexCompare = new QPushButton(gridLayoutWidget);
        m_pBtHexCompare->setObjectName(QStringLiteral("m_pBtHexCompare"));

        gridLayout->addWidget(m_pBtHexCompare, 0, 0, 1, 1);

        m_pBtSerialClose = new QPushButton(gridLayoutWidget);
        m_pBtSerialClose->setObjectName(QStringLiteral("m_pBtSerialClose"));

        gridLayout->addWidget(m_pBtSerialClose, 2, 0, 1, 1);

        UltityToolsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UltityToolsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        UltityToolsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UltityToolsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UltityToolsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UltityToolsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UltityToolsClass->setStatusBar(statusBar);

        retranslateUi(UltityToolsClass);

        QMetaObject::connectSlotsByName(UltityToolsClass);
    } // setupUi

    void retranslateUi(QMainWindow *UltityToolsClass)
    {
        UltityToolsClass->setWindowTitle(QApplication::translate("UltityToolsClass", "UltityTools", 0));
        m_pBtSerialOpen->setText(QApplication::translate("UltityToolsClass", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        m_pBtHexCompare->setText(QApplication::translate("UltityToolsClass", "\344\272\214\350\277\233\345\210\266\346\257\224\350\276\203", 0));
        m_pBtSerialClose->setText(QApplication::translate("UltityToolsClass", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class UltityToolsClass: public Ui_UltityToolsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ULTITYTOOLS_H
