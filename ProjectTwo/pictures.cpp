#include "pictures.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <stdlib.h>
#include "enemy.h"


choose_teacher::choose_teacher(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/teacher21.jpg"));
}

choose_teacher2::choose_teacher2(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/teacher30.jpg"));
}

choose_teacher3::choose_teacher3(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/content-3_clip_image006.jpg"));
}

choose_teacher4::choose_teacher4(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/307p47.jpg"));
}


backone::backone(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/1號背景.jpg"));
}

backtwo::backtwo(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/2號背景.jpg"));
}

backthree::backthree(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/3號背景.jpg"));
}

backfour::backfour(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/4號背景.jpg"));
}


endpic::endpic(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/endpic.jpg"));
}

endpic2::endpic2(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/endpic2.jpg"));
}


