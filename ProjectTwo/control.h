#ifndef CONTROL_H
#define CONTROL_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>



class control:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    control(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);
    int useteacher1();
    int useteacher2();
    int useteacher3();
    int useteacher4();
    int initial();
    int player;
    void picture(QGraphicsItem * parent = 0);


public slots:
    void spawn();
};

#endif // CONTROL_H
