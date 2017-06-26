#include "health.h"
#include <QFont>
#include <QGraphicsScene>
#include <pictures.h>
#include <QTimer>



Health::Health(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //initialize the score to 0
    health = 3;

    //drew the text
    setPlainText(QString("Health: ") + QString::number(health));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",25));

}

void Health::decrease(){
    health--;
    if(health<0){

        endpic * endPic = new endpic();
        endPic->setPos(0,0);
        scene()->addItem(endPic);
        /*if(health<-2){

            exit(1);
        }*/
    }
    else {
        setPlainText(QString("Health: ") + QString::number(health));//score:0
    }

}

int Health::getHealth(){
    return health;
}

Score::Score(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //initialize the score to 0
    score = 0;

    //drew the text
    setPlainText(QString("Score: ") + QString::number(score));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",25));

}

void Score::increase(){
    score++;
    setPlainText(QString("Score: ") + QString::number(score));//score:0

}

int Score::getScore(){
    return score;
}

enemy_Health::enemy_Health(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //initialize the score to 0
    enemy_health = 10;

    //drew the text
    setPlainText(QString("EnemyHealth: ") + QString::number(enemy_health));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",25));

}

void enemy_Health::decrease(){
    enemy_health--;
    if(enemy_health<0){

        endpic2 * endPic2 = new endpic2();
        endPic2->setPos(0,0);
        scene()->addItem(endPic2);
        /*if(enemy_health<-5){
            exit(1);
        }*/

    }
    else {
        setPlainText(QString("EnemyHealth: ") + QString::number(enemy_health));//score:0
    }

}

int enemy_Health::getenemy_Health(){
    return enemy_health;
}



Mana::Mana(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //initialize the score to 0


    //drew the text
    setPlainText(QString("Mana: ") + QString::number(mana));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",25));

    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(1000);

}



void Mana::decrease(){
    mana--;


    if(mana<0){
        setPlainText(QString("Mana: 0"));//score:0
    }
    else{
        setPlainText(QString("Mana: ") + QString::number(mana));//score:0
    }

}

void Mana::mana_increase(){
    mana++;
}

int Mana::getMana(){
    return mana;
}

tip::tip(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //drew the text
    setPlainText(QString("  Press T \nto get help"));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",25));

}


help::help(QGraphicsItem * parent): QGraphicsTextItem(parent){
    //drew the text
    setPlainText(QString("Press S to use magic\nPress H to use Hero\nCombo:H->Q "));//score:0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",19));

}



