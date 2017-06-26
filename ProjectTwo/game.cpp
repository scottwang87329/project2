#include "game.h"
#include <QApplication>
#include <QGraphicsScene>
#include "control.h"
#include <QGraphicsView>
#include <iostream>
#include <QTimer>
#include <QImage>
#include <QBrush>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QWidget>
#include <QFont>
#include <QGraphicsPixmapItem>
#include "teacher.h"
#include "health.h"
#include <QFont>
#include <QObject>"

game::game(QWidget * parent){

    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,621,850);

    QGraphicsPixmapItem *background = new QGraphicsPixmapItem();
    background->setPixmap(QPixmap(":/image/background.jpg"));
    scene->addItem(background);
    background->setPos(0,0);

    QGraphicsPixmapItem *Teacher = new QGraphicsPixmapItem();
    Teacher->setPixmap(QPixmap(":/image/teacher21.jpg"));
    scene->addItem(Teacher);
    Teacher->setPos(20,100);

    QGraphicsPixmapItem *Teacher2 = new QGraphicsPixmapItem();
    Teacher2->setPixmap(QPixmap(":/image/teacher30.jpg"));
    scene->addItem(Teacher2);
    Teacher2->setPos(20,250);


    QGraphicsPixmapItem *castle = new QGraphicsPixmapItem();
    castle->setPixmap(QPixmap(":/image/14955-illustration-of-a-cartoon-castle-tower-with-flag-pv.png"));
    scene->addItem(castle);
    castle->setPos(210,650);



    //create  an item to put into the scene


    player = new control();
    player->setPos(290,690);
    //player->setPixmap(QPixmap(":/image/14955-illustration-of-a-cartoon-castle-tower-with-flag-pv.png"));
    //make focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

    //add the item to the scene
    //scene->addItem(player);

    //create a score/health/enemy_health
    score = new Score();
    scene->addItem(score);

    health = new Health();
    health->setPos(health->x(),health->y()+30);
    scene->addItem(health);

    enemy_health = new enemy_Health();
    enemy_health->setPos(enemy_health->x(),enemy_health->y()+60);
    scene->addItem(enemy_health);

    mana = new Mana();
    mana->setPos(mana->x(),mana->y()+700);
    scene->addItem(mana);

    Tip = new tip();
    Tip->setPos(Tip->x()+450,Tip->y());
    scene->addItem(Tip);




    //create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //show the view
    view->show();
    view->setFixedSize(621,850);




    //spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    QObject::connect(timer,SIGNAL(timeout()),mana,SLOT(mana_increase()));

    timer->start(1000);




}
