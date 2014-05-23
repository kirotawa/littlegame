
#include <QtGui>
#include <iostream>
#include "monster.h"

using namespace std;

Monster::Monster()
{

}

QRectF Monster::boundingRect() const
{
    return QRectF(-15.5, -15.5, 34, 34);
}

void Monster::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::darkGray);
    painter->drawEllipse(-12, -12, 30, 30);
    painter->setPen(QPen(Qt::black, 1));
   // painter->setBrush(QBrush(color));
    painter->drawEllipse(-15, -15, 30, 30);
}

void Monster::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    cout << "Clicked\n" << flush;
}

void Monster::keyPressEvent(QKeyEvent *event)
{;
    if (event->key() == Qt::Key_Right)
        cout << "Right\n" << flush;
    if (event->key() == Qt::Key_Left)
        cout << "Left\n" << flush;
    if (event->key() == Qt::Key_Up)
        cout << "Up\n" << flush;
    if (event->key() == Qt::Key_Down)
        cout << "Down!!!!\n" << flush;
}

void Monster::_keyPressEvent(QKeyEvent *event)
{
    this->keyPressEvent(event);
}


void Monster::timerEvent(QTimerEvent *event)
{
    this->update();
}
