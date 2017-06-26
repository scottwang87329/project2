#ifndef TEACHER1_H
#define TEACHER1_H


#include <QObject>
#include <QGraphicsPixmapItem>

class teacher1:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    teacher1(QGraphicsItem * parent=0);
public slots:
    void move();
};

class teacher2:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    teacher2(QGraphicsItem * parent=0);
public slots:
    void move();
};

class teacher3:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    teacher3(QGraphicsItem * parent=0);
public slots:
    void move();
};

class teacher4:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    teacher4(QGraphicsItem * parent=0);
public slots:
    void move();
};

class superman:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    superman(QGraphicsItem * parent=0);
public slots:
    void move();
};

class attack1:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    attack1(QGraphicsItem * parent=0);
public slots:
    void move();
};


#endif // TEACHER1_H
