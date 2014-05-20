#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>

class GameScene : public QGraphicsScene
{
public:
    GameScene();
    typedef void (*eventPassFunc) (QKeyEvent*);
    void timerEvent(QTimerEvent *);
    eventPassFunc callFunc;

protected:
    void keyPressEvent(QKeyEvent *event);
    void setKeyPressEventItem(eventPassFunc func);

};

#endif // GAMESCENE_H
