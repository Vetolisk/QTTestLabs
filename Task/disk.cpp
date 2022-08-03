#include "disk.h"
Disk::Disk(int x, int y, int l, int w, QBrush Brash)
{
  x1Pos=x;
  y1Pos=y;
  L=l;
  W=w;
  MyBrash=Brash;

}

Disk::~Disk()
{

}

void Disk::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //painter->setBrush(QBrush(QColor(qrand()%255,qrand()%255,qrand()%255)));
    painter->setBrush(MyBrash);
    painter->drawRect(x1Pos,y1Pos,L,W);

}

QRectF Disk::boundingRect() const
{

    return QRectF(x1Pos,y1Pos,L,W);
}

