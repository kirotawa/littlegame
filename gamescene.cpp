#include <QtGui>
#include <iostream>
#include "gamescene.h"
#include "monster.h"

using namespace std;

GameScene::GameScene()
{

}

void GameScene::keyPressEvent(QKeyEvent *event)
{
    const QList<QGraphicsItem*> v = this->items();
    foreach(QGraphicsItem *item, v)
    {
        Monster *m = qgraphicsitem_cast<Monster *>(item);
        m->_keyPressEvent(event);
    }
}

void GameScene::timerEvent(QTimerEvent *event)
{
    this->update();
}




