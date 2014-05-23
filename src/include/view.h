#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>

class View : public QGraphicsView
{
public:
    View();

protected:
      void drawBackground(QPainter *painter, const QRectF &rect);
};

#endif // VIEW_H
