#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsPixmapItem>

class enemy:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    enemy(QGraphicsItem * parent=0);
public slots:
    void move();
};


#endif // ENEMY_H
