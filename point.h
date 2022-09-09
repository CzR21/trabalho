#ifndef POINT_H
#define POINT_H

#include "object.h"

#include <QPoint>

class Point : public Object, public QPoint
{
public:
    Point(const QPoint& p,const QString& nome, Qt::GlobalColor color=Qt::black):
        Object(nome, PONTO,color),QPoint(p)
    {}

    virtual void desenha(QPainter& painter);
    virtual void ajusta (int dx, int dy);

};

#endif // POINT_H
