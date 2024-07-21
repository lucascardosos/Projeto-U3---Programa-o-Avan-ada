/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *update;
    QTextBrowser *listaIPs;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *endIp;
    QPushButton *conectar;
    QPushButton *desconectar;
    QGridLayout *gridLayout_3;
    QSlider *barraTimer;
    QLabel *labelTimer;
    QPushButton *iniciar;
    QPushButton *parar;
    Plotter *widget;
    QLabel *onoff;
    QLabel *startstop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(719, 522);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 11, 282, 366));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        update = new QPushButton(layoutWidget);
        update->setObjectName("update");

        gridLayout_2->addWidget(update, 2, 1, 1, 1);

        listaIPs = new QTextBrowser(layoutWidget);
        listaIPs->setObjectName("listaIPs");

        gridLayout_2->addWidget(listaIPs, 1, 0, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        endIp = new QLineEdit(layoutWidget);
        endIp->setObjectName("endIp");

        gridLayout->addWidget(endIp, 1, 0, 1, 2);

        conectar = new QPushButton(layoutWidget);
        conectar->setObjectName("conectar");

        gridLayout->addWidget(conectar, 2, 0, 1, 1);

        desconectar = new QPushButton(layoutWidget);
        desconectar->setObjectName("desconectar");

        gridLayout->addWidget(desconectar, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        barraTimer = new QSlider(layoutWidget);
        barraTimer->setObjectName("barraTimer");
        barraTimer->setMinimum(1);
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(barraTimer, 0, 0, 1, 1);

        labelTimer = new QLabel(layoutWidget);
        labelTimer->setObjectName("labelTimer");

        gridLayout_3->addWidget(labelTimer, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 2);

        iniciar = new QPushButton(layoutWidget);
        iniciar->setObjectName("iniciar");

        gridLayout_5->addWidget(iniciar, 1, 0, 1, 1);

        parar = new QPushButton(layoutWidget);
        parar->setObjectName("parar");

        gridLayout_5->addWidget(parar, 1, 1, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 10, 361, 371));
        onoff = new QLabel(centralWidget);
        onoff->setObjectName("onoff");
        onoff->setGeometry(QRect(10, 390, 91, 16));
        startstop = new QLabel(centralWidget);
        startstop->setObjectName("startstop");
        startstop->setGeometry(QRect(590, 390, 49, 16));
        startstop->setLayoutDirection(Qt::LeftToRight);
        startstop->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 719, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tempo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        endIp->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        conectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        desconectar->setText(QCoreApplication::translate("MainWindow", "Disconectar", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        iniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        parar->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
        onoff->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
        startstop->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
