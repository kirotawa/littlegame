#include <QtGui>
#include "view.h"
#include <iostream>

using namespace std;

View::View()
{
    this->setCacheMode(CacheBackground);
    this->setRenderHints(QPainter::Antialiasing);
}

void View::drawBackground(QPainter *painter, const QRectF &rect)
{
    cout << "draw" << flush;
    QImage *pixmap = new QImage(":/data/background3.png");
    QRectF srect = this->sceneRect();
    painter->drawImage(0,0, *pixmap);
}
