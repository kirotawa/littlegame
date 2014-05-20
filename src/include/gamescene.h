#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>

class GameScene : public QGraphicsScene
{
public:
    GameScene();
    void timerEvent(QTimerEvent *);

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAMESCENE_H
