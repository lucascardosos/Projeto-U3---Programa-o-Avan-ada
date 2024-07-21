#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(ui->conectar, SIGNAL(clicked()), this, SLOT(on_conectado_clicked()));
    connect(ui->desconectar, SIGNAL(clicked()), this, SLOT(on_desconectado_clicked()));
    connect(ui->iniciar, SIGNAL(clicked()), this, SLOT(on_start_clicked()));
    connect(ui->parar, SIGNAL(clicked()), this, SLOT(on_stop_clicked()));

    Temp = new QTimer(this);
    Temp->setInterval(interv);

    connect(Temp, SIGNAL(timeout()), this, SLOT(timerEvent()));
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}

void MainWindow::tcpConnect()
{
    socket->connectToHost(ui->endIp->text(), 1234);
    if (socket->waitForConnected(3000)) {
        qDebug() << "Connected";
        ui->onoff->setText("Conectado");
        ui->listaIPs->setText(ui->endIp->text());
    } else {
        qDebug() << "Disconnected";
        ui->onoff->setText("Desconectado");
        ui->listaIPs->setText("Endereço de Ip inválido.");
    }
}

void MainWindow::getData()
{
    QString str;
    QByteArray array;
    QStringList list;

    qDebug() << "to get data...";

    QHostAddress ipAddress = socket->peerAddress();
    QString ipString = ipAddress.toString();

    if (socket->state() == QAbstractSocket::ConnectedState) {
        if (socket->isOpen()) {
            qDebug() << "reading...";
            socket->write("get 127.0.0.1 5\r\n");
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();
            while (socket->bytesAvailable()) {
                str = socket->readLine().replace("\n", "").replace("\r", "");
                list = str.split(" ");
                if (list.size() == 2) {
                    str = list.at(0);
                    str = list.at(1);
                }
                valores = list.at(1).toInt();
                qDebug() << valores << "\n";
            }
        }
    }

    ui->widget->setValor(valores); // Atualiza o gráfico com o novo valor recebido
}

void MainWindow::timerEvent()
{
    getData();
}

void MainWindow::timerStop()
{
    Temp->stop();
    ui->startstop->setText("Parar");
}

void MainWindow::on_conectado_clicked()
{
    QString end_ip = "127.0.0.1";
    if (ui->endIp->text() == end_ip) {
        tcpConnect();
    } else {
        ui->listaIPs->setText("Endereço de Ip inválido.");
        socket->disconnectFromHost();
        ui->onoff->setText("Desconectado");
    }
}

void MainWindow::on_desconectado_clicked()
{
    socket->disconnectFromHost();
    ui->onoff->setText("Desconectado");
}

void MainWindow::on_start_clicked()
{
    Temp->start();
    ui->startstop->setText("Iniciar");
}

void MainWindow::on_stop_clicked()
{
    Temp->stop();
    ui->startstop->setText("Parar");
}
