#include <QtGui>
#include "monster.h"
#include "gamescene.h"
#include "view.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    GameScene *scene = new GameScene();
    Monster *m = new Monster();
    scene->setSceneRect(0, 0, 800.0, 600.0 );
    scene->addItem(m);
    View *view = new View();
    view->setScene(scene);
    view->resize(800,600);
    view->show();
    return app.exec();
}
