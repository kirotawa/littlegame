#include <QtGui>
#include "monster.h"
#include "gamescene.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    GameScene *scene = new GameScene();
    Monster *m = new Monster();
    scene->setSceneRect(-100.0, -100.0, 200.0, 200.0 );
    scene->addItem(m);
    QGraphicsView view(scene);
    view.show();
    return app.exec();
}
