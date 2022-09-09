#include "point.h"
#include <iostream>
using namespace std;

void Point::desenha(QPainter &painter)
{
    painter.drawPoint(*this);
    cout << "passou aqui-> Point::desenha111" << endl;
}

void Point::ajusta(int dx, int dy)
{
    setX((*this + QPoint(dx,dy)).x());
    setY((*this + QPoint(dx,dy)).y());
}
