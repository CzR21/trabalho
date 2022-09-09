#include "meu_frame.h"
#include <QPainter>
#include <iostream>

using namespace std;

#include "point.h"
#include "line.h"
#include "rect.h"

Meu_frame::Meu_frame(QWidget *parent)
    : QFrame{parent}
{
    /*
     * Incluindo objetos no mundo virtual
     * */
    list.append(new Rect(QRect(QPoint(100,10),QSize(100,90)),QString("ret-01"),Qt::blue));
    list.append(new Line(QLine(QPoint(50,10),QPoint(50,90)),QString("line-01"),Qt::green));
    list.append(new Point(QPoint(15,15),QString("Point-01")));
}

void Meu_frame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::red, 2));

    /*
     * Aqui percorre a lista de objetos desenhando
     * cada um
     * */
    for (int i = 0; i < list.size(); i++){
        painter.setPen(QPen(list[i]->getColor(),2));
        list[i]->desenha(painter);
    }
}

void Meu_frame::muda(int i)
{
    cout << "entrou no Meu_frame::muda" << endl;
    list[i]->ajusta(5,2);
    update();
}

void Meu_frame::muda()
{
    for (int i = 0; i < list.size(); ++i) {
        muda(i);
    }
}
