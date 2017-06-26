#include "teacher.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <stdlib.h>
#include "enemy.h"
#include "game.h"
#include <health.h>
#include "pictures.h"

extern game * Game;

teacher1::teacher1(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/teacher21.jpg"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(500);


  }

int f=0;
void teacher1::move(){
    //if teacher1 collides with enemy,destroy both
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(enemy)){
            //increase the score
            Game->score->increase();

            //remove them both
            scene()->removeItem(colliding_items[i]);
             delete colliding_items[i];
            f++;
            if(f%2==0){
                scene()->removeItem(this);
                //delete them both
                delete this;
            }
            return;
      }

    }
    //move teacher up
    setPos(x(),y() -10);
    if(pos().y()<-133){
        scene()->removeItem(this);
        Game->enemy_health->decrease();
        Game->enemy_health->decrease();
        delete this;
    }
}
teacher2::teacher2(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/teacher30.jpg"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(500);
}

void teacher2::move(){
    //if teacher2 collides with enemy,destroy both
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(enemy)){

            //increase the score
            Game->score->increase();

            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete them both
            delete colliding_items[i];
            delete this;
            return;
      }
    }
    //move teacher up
    setPos(x(),y() -10);
    if(pos().y()<-133){
        scene()->removeItem(this);
        Game->enemy_health->decrease();
        delete this;
    }
}
teacher3::teacher3(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/content-3_clip_image006.jpg"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(500);


  }

int e=0;
void teacher3::move(){

    //if teacher3 collides with enemy,destroy both
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){

        if(typeid(*(colliding_items[i])) == typeid(enemy)){

            //increase the score
            Game->score->increase();
            scene()->removeItem(colliding_items[i]);
            delete colliding_items[i];
            e++;
            if(e%3==0){
                //remove them both
                scene()->removeItem(this);
                //delete them both
                delete this;
            }
            return;
      }
    }
    //move teacher up
    setPos(x(),y() -10);
    if(pos().y()<-133){
        scene()->removeItem(this);
        Game->enemy_health->decrease();
        Game->enemy_health->decrease();
        Game->enemy_health->decrease();
        delete this;
    }
}
teacher4::teacher4(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/307p47.jpg"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(500);


  }

void teacher4::move(){
    //if teacher3 collides with enemy,destroy both
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(enemy)){

            //increase the score
            Game->score->increase();

            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete them both
            delete colliding_items[i];
            delete this;
            return;
      }
    }
    //move teacher up
    setPos(x(),y() -10);
    if(pos().y()<-133){
        scene()->removeItem(this);
        Game->enemy_health->decrease();
        Game->enemy_health->decrease();
        delete this;
    }
}

superman::superman(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/fireball.png"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


  }
void superman::move(){
    //if superman collides with enemy,destroy enemies
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(enemy)){
            //remove enemies
            scene()->removeItem(colliding_items[i]);
            //delete superman
            delete colliding_items[i];
            return;
      }

    }
    //move superman up
    setPos(x(),y() -80);
    if(pos().y()<0){
        scene()->removeItem(this);
        delete this;
    }
}

attack1::attack1(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/image/attack1.png"));
    setPos(20,133);
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


  }
void attack1::move(){
    //if attack1 collides with enemy,destroy enemies
    QList<QGraphicsItem *>colliding_items = collidingItems();
    for (int i=0,n=colliding_items.size();i<n;i++){
        if(typeid(*(colliding_items[i])) == typeid(enemy)){
            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //delete them both
            delete colliding_items[i];
            delete this;
            return;
      }
    }
    //move attack1 up
    setPos(x(),y() -80);
    if(pos().y()<0){
        scene()->removeItem(this);
        delete this;
    }
}

