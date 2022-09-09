#ifndef LINE_H
#define LINE_H

#include "object.h"

#include <QLine>

class Line : public Object, public QLine
{
public:
    Line(const QLine& r,const QString& nome, Qt::GlobalColor color=Qt::black):
        Object(nome, LINHA, color),QLine(r)
    {}

    virtual void desenha(QPainter& painter);
    virtual void ajusta (int dx, int dy);
};

#endif // LINE_H
