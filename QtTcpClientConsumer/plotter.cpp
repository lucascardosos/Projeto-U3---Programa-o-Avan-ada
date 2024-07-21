#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <iostream>
#include <QLine>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    atl = new int;
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(250,250,10));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(20,150,250));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(), height());

    pen.setColor(QColor(25,6,90));

    int numSamples = qMin(valor.size(), 30);
    int width = this->width();
    int height = this->height();
    double xScale = static_cast<double>(width) / numSamples;
    double yScale = static_cast<double>(height) / 100.0;

    for (int i = 1; i < numSamples; ++i) {
        int x1 = (i - 1) * xScale;
        int y1 = height - valor[i - 1] * yScale;
        int x2 = i * xScale;
        int y2 = height - valor[i] * yScale;
        painter.drawLine(x1, y1, x2, y2);
    }
}

void Plotter::setValor(int _valor)
{
    valor.append(_valor);
    if (valor.size() > 30)
        valor.pop_front(); // Mantém apenas as últimas 30 amostras

    update(); // Redesenha o gráfico
}





















