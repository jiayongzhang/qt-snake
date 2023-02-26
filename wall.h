#ifndef WALL_H
#define WALL_H

#include <QGraphicsItem>

class Wall : public QGraphicsItem
{
public:
    Wall(qreal xs, qreal ys, qreal xl, qreal yl);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

    QPainterPath shape() const;
private:
    int xs;
    int ys;
    int xl;
    int yl;
};

#endif // WALL_H
