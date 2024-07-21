#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTimer>
#include "plotter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_conectado_clicked();
    void on_desconectado_clicked();
    void on_start_clicked();
    void on_stop_clicked();
    void timerEvent();
    void timerStop();
    void tcpConnect();
    void getData();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTimer *Temp;
    int interv = 1000; // Intervalo inicial de 1 segundo
    int valores = 0;
};

#endif // MAINWINDOW_H
