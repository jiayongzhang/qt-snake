#include "wall.h"
#include "constants.h"
#include <QPainter>

Wall::Wall(qreal xs1, qreal ys1, qreal xl1, qreal yl1):
    xs(xs1),
    ys(ys1),
    xl(xl1),
    yl(yl1)
{
    for (int i=xs1;i<xs1+xl1; ++i) {
        for (int j=ys1;j<ys1+yl1; ++j) {
            setPos(i, j);
            setData(GD_Type, GO_Wall); //maybe check how snake is built
        }
    }
}

QRectF Wall::boundingRect() const
{
    return QRectF(xs, ys, xl, yl);
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->save();

    painter->setRenderHint(QPainter::Antialiasing);
    painter->fillPath(shape(), Qt::black);

    painter->restore();
}

QPainterPath Wall::shape() const
{
    QPainterPath p;
    p.addRect(QRectF(xs, ys, xl, yl));
    return p;
}
