#include "line.h"
#include <iostream>
using namespace std;

void Line::desenha(QPainter &painter)
{
    painter.drawLine(*this);
    cout << "pasosu aqui-> Line::desenha 999" << endl;
}

void Line::ajusta(int dx, int dy)
{
    translate(dx,dy);
}
