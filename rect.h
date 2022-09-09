#ifndef RECT_H
#define RECT_H

#include "object.h"

#include <QRect>

class Rect : public Object, public QRect
{
public:
    Rect(const QRect& r,const QString& nome, Qt::GlobalColor color=Qt::black):
        Object(nome, RETANGULO,color),QRect(r)
    {}

    virtual void desenha(QPainter& painter);
    virtual void ajusta (int dx, int dy);

};

#endif // RECT_H
