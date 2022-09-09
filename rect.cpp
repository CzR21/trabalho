#include "rect.h"
#include <iostream>
using namespace std;

void Rect::desenha(QPainter &painter)
{
    painter.drawRect(*this);
    cout << "passou aqui-> Rect::desenha 111" << endl;
}

void Rect::ajusta(int dx, int dy)
{
    adjust(dx,dy,dx,dy);
}
