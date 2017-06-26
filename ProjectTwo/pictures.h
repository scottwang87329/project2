#ifndef CHOOSE_TEACHER_H
#define CHOOSE_TEACHER_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>

class choose_teacher:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    choose_teacher(QGraphicsItem * parent=0);
};

class choose_teacher2:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    choose_teacher2(QGraphicsItem * parent=0);
};

class choose_teacher3:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    choose_teacher3(QGraphicsItem * parent=0);
};

class choose_teacher4:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    choose_teacher4(QGraphicsItem * parent=0);
};

class backone:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    backone(QGraphicsItem * parent=0);
};

class backtwo:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    backtwo(QGraphicsItem * parent=0);
};

class backthree:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    backthree(QGraphicsItem * parent=0);
};

class backfour:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    backfour(QGraphicsItem * parent=0);
};

class endpic:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    endpic(QGraphicsItem * parent=0);
};

class endpic2:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    endpic2(QGraphicsItem * parent=0);
};


#endif
