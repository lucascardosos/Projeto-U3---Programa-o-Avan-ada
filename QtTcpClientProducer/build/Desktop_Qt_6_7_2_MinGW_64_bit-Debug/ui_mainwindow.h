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
#include <QtWidgets/QLCDNumber>
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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *conectar;
    QLCDNumber *maximo;
    QSlider *barraMax;
    QLabel *startstop;
    QPushButton *iniciar;
    QPushButton *disconectar;
    QSlider *barraMin;
    QPushButton *parar;
    QLCDNumber *minimo;
    QLabel *onoff;
    QLabel *contTimer;
    QLabel *label_2;
    QLineEdit *endIp;
    QSlider *barraTimer;
    QLabel *label_3;
    QLabel *label;
    QTextBrowser *tabela;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(686, 485);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 521, 341));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        conectar = new QPushButton(layoutWidget);
        conectar->setObjectName("conectar");

        gridLayout->addWidget(conectar, 1, 0, 1, 2);

        maximo = new QLCDNumber(layoutWidget);
        maximo->setObjectName("maximo");
        maximo->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(maximo, 5, 3, 1, 2);

        barraMax = new QSlider(layoutWidget);
        barraMax->setObjectName("barraMax");
        barraMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMax, 5, 0, 1, 3);

        startstop = new QLabel(layoutWidget);
        startstop->setObjectName("startstop");

        gridLayout->addWidget(startstop, 8, 5, 1, 1);

        iniciar = new QPushButton(layoutWidget);
        iniciar->setObjectName("iniciar");

        gridLayout->addWidget(iniciar, 7, 0, 1, 2);

        disconectar = new QPushButton(layoutWidget);
        disconectar->setObjectName("disconectar");

        gridLayout->addWidget(disconectar, 1, 2, 1, 3);

        barraMin = new QSlider(layoutWidget);
        barraMin->setObjectName("barraMin");
        barraMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraMin, 3, 0, 1, 3);

        parar = new QPushButton(layoutWidget);
        parar->setObjectName("parar");

        gridLayout->addWidget(parar, 7, 2, 1, 3);

        minimo = new QLCDNumber(layoutWidget);
        minimo->setObjectName("minimo");
        minimo->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(minimo, 3, 3, 1, 2);

        onoff = new QLabel(layoutWidget);
        onoff->setObjectName("onoff");

        gridLayout->addWidget(onoff, 8, 0, 1, 2);

        contTimer = new QLabel(layoutWidget);
        contTimer->setObjectName("contTimer");

        gridLayout->addWidget(contTimer, 6, 4, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 3, 1, 1);

        endIp = new QLineEdit(layoutWidget);
        endIp->setObjectName("endIp");

        gridLayout->addWidget(endIp, 0, 0, 1, 5);

        barraTimer = new QSlider(layoutWidget);
        barraTimer->setObjectName("barraTimer");
        barraTimer->setMinimum(1);
        barraTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(barraTimer, 6, 1, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 3, 1, 1);

        tabela = new QTextBrowser(layoutWidget);
        tabela->setObjectName("tabela");

        gridLayout->addWidget(tabela, 0, 5, 8, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 686, 25));
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
        conectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        startstop->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        iniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        disconectar->setText(QCoreApplication::translate("MainWindow", "Disconectar", nullptr));
        parar->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
        onoff->setText(QCoreApplication::translate("MainWindow", "Aguardando...", nullptr));
        contTimer->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        endIp->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tempo(s)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
