#ifndef LITTLEITEM_H
#define LITTLEITEM_H

#include <QGraphicsItem>


class Monster : public QGraphicsItem
{
public:
    Monster();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void timerEvent(QTimerEvent * event);
    void _keyPressEvent(QKeyEvent * event);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent * event);
};

#endif // LITTLEITEM_H
