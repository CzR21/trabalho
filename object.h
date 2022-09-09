#ifndef OBJECT_H
#define OBJECT_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QPainter>


class Object
{

public:

    enum Tipos {
        PONTO,
        LINHA,
        RETANGULO
    };

    Object(const QString& nome, const Tipos& tipo, Qt::GlobalColor color);

    virtual void desenha(QPainter& painter)=0;
    virtual void ajusta (int dx, int dy)=0; //implementa uma translação

    inline QString getNome()const { return nome; }
    inline enum Tipos getTipo()const { return tipo; }
    inline Qt::GlobalColor getColor()const { return color; }

private:
    QString nome; //id do objeto instancido
    enum Tipos tipo;
    Qt::GlobalColor color;
};

#endif // OBJECT_H
