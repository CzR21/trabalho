#ifndef MEU_FRAME_H
#define MEU_FRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QRect>
#include <QList>
#include <object.h>

class Meu_frame : public QFrame
{
    Q_OBJECT
private:
    QList<Object*> list;
public:
    explicit Meu_frame(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;

public slots:
    void muda(int i);
    void aumentaLinha();
    void aumentaPonto();
    void aumentaQuadrado();
    void diminuiLinha();
    void diminuiPonto();
    void diminuiQuadrado();
    void muda();

signals:

};

#endif // MEU_FRAME_H
