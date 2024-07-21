#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(ui->iniciar, //Inicia o temporizador
            SIGNAL(clicked()),
            this,
            SLOT(IniciarTemp())
            );
    connect(ui->parar, //Para o temporizador
            SIGNAL(clicked()),
            this,
            SLOT(ParaTemp())
            );
    connect(ui->conectar, //Conecta o produtor ao servidor ao clicar no botao conectar
            SIGNAL(clicked()),
            this,
            SLOT(on_connect_clicked())
            );
    connect(ui->disconectar, //Desconecta o produtor do servidor ao clicar no botao desconectar
            SIGNAL(clicked()),
            this,
            SLOT(on_disconnect_clicked())
            );
}


void MainWindow::tcpConnect(){
    socket->connectToHost(ui->endIp->text(),1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        ui->onoff->setText("Conectado");
    }
    else{
        qDebug() << "Disconnected";
    }
}

void MainWindow::putData(){
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    int valor_min = ui->minimo->value(); //Define o valor min a partir da barra de minimo
    int valor_max = ui->maximo->value(); //Define o valor max a partir da barra de maximo

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
              QString::number(valor_min + rand()% (valor_max - valor_min))+"\r\n";

        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str())
                 << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
        ui->tabela->append(str);
    }
}

void MainWindow::on_connect_clicked(){
    tcpConnect();
}

void MainWindow::on_disconnect_clicked(){
    socket->disconnectFromHost();
    ui->onoff->setText("Desconectado");
}

void MainWindow::timerEvent(QTimerEvent *event){
    putData();
}

void MainWindow::IniciarTemp(){
    int temp_seg = 1000*ui->barraTimer->value();
    temporizador = startTimer(temp_seg);
    ui->startstop->setText("Start");
}

void MainWindow::ParaTemp(){
    killTimer(temporizador);
    ui->startstop->setText("Stop");
}

void MainWindow::on_barraMin_valueChanged(int value){//Conecta a barra de min ao display
    ui->minimo->display(value);
}

void MainWindow::on_barraMax_valueChanged(int value){//Conecta a barra de max ao display
    ui->maximo->display(value);
}

void MainWindow::on_barraTimer_valueChanged(int value){//Conecta a barra de timer ao label
    ui->contTimer->setText(QString::number(value));
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}
