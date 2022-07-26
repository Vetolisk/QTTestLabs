#ifndef DISK_H
#define DISK_H
#include <QGraphicsItem>
#include <QPainter>
#include<QGraphicsItem>

//Класс дисков
class Disk: public  QGraphicsRectItem
{


public:
    int x1Pos,y1Pos,L,W;
    QBrush MyBrash;
    Disk(int x, int y, int l, int w,QBrush Brash);
   ~Disk();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) override;
    QRectF boundingRect() const  override;






};

#endif // DISK_H
