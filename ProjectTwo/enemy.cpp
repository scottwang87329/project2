#include "enemy.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "game.h"


extern game * Game;

enemy::enemy(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent){
    //set position
    /*int n=rand();// using random successfully
    if(n%2==0){
        setPos(160,-322);
    }
    else{
        setPos(400,-322);
    }*/

    setPos(280,-100);

    //drew the rect
    setPixmap(QPixmap(":/image/Hulk_(comics_character).png"));

    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);

}

void enemy ::move(){
    //move enemy down
    setPos(x(),y() +5);
    // destroy enemy when it goes out of the screen
    if(pos().y()>850){

        //decrease the health
        Game->health->decrease();

        scene()->removeItem(this);
        delete this;
    }
}


