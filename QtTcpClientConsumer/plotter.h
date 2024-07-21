#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QTimer>
#include <QVector>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    int *atl;
    QTimer *atual;
    QVector<int> valor;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void setValor(int _valor);
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // PLOTTER_H
