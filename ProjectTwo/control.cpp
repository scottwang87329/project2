#include "control.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "teacher.h"
#include <QDebug>
#include <enemy.h>
#include <stdlib.h>
#include <iostream>
#include <pictures.h>
#include "game.h"
#include "QGraphicsPixmapItem"

extern game * Game;

int teacher1use=1,teacher2use=1,teacher3use=0,teacher4use=0;
int useteacher1(),useteacher2(),useteacher3(),useteacher4();

int h = 0;
int t = 0;

int control::initial(){
    choose_teacher * Teacher = new choose_teacher();
    Teacher->setPos(20,100);
    scene()->addItem(Teacher);
    choose_teacher2 * Teacher2 = new choose_teacher2();
    Teacher2->setPos(20,250);
    scene()->addItem(Teacher2);
    backthree * three = new backthree();
    three->setPos(20,400);
    scene()->addItem(three);
    backfour * four = new backfour();
    four->setPos(20,550);
    scene()->addItem(four);
}


control::control(QGraphicsItem * parent): QGraphicsPixmapItem(parent){
    //set graphic
    setPixmap(QPixmap(":/image/圖片1.png"));

}


void control::keyPressEvent(QKeyEvent * event){

     if (event->key() == Qt::Key_1){
           if(h%2==0){
            if(Game->mana >= 0){
                if(teacher1use==1){
                    //create a teacher
                    teacher1 * Teacher = new teacher1();
                    Teacher->setPos(x(),y());
                    scene()->addItem(Teacher);
                    useteacher1();
                    Game->mana->decrease();
                    Game->mana->decrease();
                }
            }
           }
    }
    else if (event->key() == Qt::Key_2){
           if(h%2==0){
            if(Game->mana >0){
                if(teacher2use==1){
                    //create a teacher2
                    teacher2 * Teacher2 = new teacher2();
                    Teacher2->setPos(x(),y());
                    scene()->addItem(Teacher2);
                    useteacher2();
                    Game->mana->decrease();
                }
            }
           }
    }
    else if (event->key() == Qt::Key_3){
           if(h%2==0){
            if(Game->mana >0){
                if(teacher3use==1){
                    //create a teacher3
                    teacher3 * Teacher3 = new teacher3();
                    Teacher3->setPos(x(),y());
                    scene()->addItem(Teacher3);
                    useteacher3();
                    Game->mana->decrease();
                    Game->mana->decrease();
                    Game->mana->decrease();
                    Game->mana->decrease();
                }
            }
           }
    }
    else if (event->key() == Qt::Key_4){
           if(h%2==0){
            if(Game->mana >0){
                if(teacher4use==1){
                    //create a teacher4
                    teacher4 * Teacher4 = new teacher4();
                    Teacher4->setPos(x(),y());
                    scene()->addItem(Teacher4);
                    useteacher4();
                    Game->mana->decrease();
                    Game->mana->decrease();
                }
            }
           }
    }
    else if(event->key() == Qt::Key_S){
         if(h%2==0){
            //create a superman
            superman * Superman = new superman();
            Superman->setPos(x(),y());
            scene()->addItem(Superman);
         }
    }
    else if(event->key() == Qt::Key_H){

        h++;
    }
     else if (event->key() == Qt::Key_Left){
         if(h%2==1){
             if(pos().x() > 160){
                 setPos(x()-10,y());
             }
        }
     }

     else if (event->key() == Qt::Key_Right){
         if(h%2==1){
             if(pos().x()<405){
                setPos(x()+10,y());
             }
        }
    }
     else if (event->key() == Qt::Key_Up){
         if(h%2==1){
             if(pos().y()>0){
                setPos(x(),y()-10);
             }
        }
    }
     else if (event->key() == Qt::Key_Down){
         if(h%2==1){
             if(pos().y()<690){
                setPos(x(),y()+10);
             }
        }
    }
     else if (event->key() == Qt::Key_Q){
         if(h%2==1){
             attack1 * Attack1 = new attack1();
             Attack1->setPos(x(),y());
             scene()->addItem(Attack1);
        }
    }
     else if (event->key() == Qt::Key_W){
         if(h%2==1){
             attack1 * Attack1 = new attack1();
             Attack1->setPos(x(),y());
             scene()->addItem(Attack1);
        }
    }
     else if (event->key() == Qt::Key_T){
         t++;
         if(t%2==1){
         help * Help = new help();
         Help->setPos(x()+110,y());
         scene()->addItem(Help);
     }
   }
}


void control::spawn(){
    //create an enemy
    enemy * Enemy = new enemy();
    scene()->addItem(Enemy);

}





int control::useteacher1(){
    if(teacher1use==1 && teacher2use==1 && teacher3use==0 && teacher4use==0){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        choose_teacher2 * Teacher2 = new choose_teacher2();
        Teacher2->setPos(20,250);
        scene()->addItem(Teacher2);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher1use=0;
        teacher3use=1;
    }
    if(teacher1use==1 && teacher2use==0 && teacher3use==1 && teacher4use==0){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        choose_teacher4 * Teacher4 = new choose_teacher4();
        Teacher4->setPos(20,550);
        scene()->addItem(Teacher4);
        teacher1use=0;
        teacher4use=1;
    }
    if(teacher1use==1 && teacher2use==0 && teacher3use==0 && teacher4use==1){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        choose_teacher2 * Teacher2 = new choose_teacher2();
        Teacher2->setPos(20,250);
        scene()->addItem(Teacher2);
        backthree * three = new backthree();
        three->setPos(20,400);
        scene()->addItem(three);
        choose_teacher4 * Teacher4 = new choose_teacher4();
        Teacher4->setPos(20,550);
        scene()->addItem(Teacher4);
        teacher1use=0;
        teacher2use=1;
    }
}


int control::useteacher2(){
    if(teacher1use==1 && teacher2use==1 && teacher3use==0 && teacher4use==0){
        choose_teacher * Teacher = new choose_teacher();
        Teacher->setPos(20,100);
        scene()->addItem(Teacher);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher2use=0;
        teacher3use=1;
    }
    if(teacher1use==0 && teacher2use==1 && teacher3use==1 && teacher4use==0){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        choose_teacher4 * Teacher4 = new choose_teacher4();
        Teacher4->setPos(20,550);
        scene()->addItem(Teacher4);
        teacher2use=0;
        teacher4use=1;
    }
    if(teacher1use==0 && teacher2use==1 && teacher3use==0 && teacher4use==1){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        choose_teacher4 * Teacher4 = new choose_teacher4();
        Teacher4->setPos(20,550);
        scene()->addItem(Teacher4);
        teacher2use=0;
        teacher3use=1;
    }
}


int control::useteacher3(){
    if(teacher1use==0 && teacher2use==0 && teacher3use==1 && teacher4use==1){
        choose_teacher * Teacher = new choose_teacher();
        Teacher->setPos(20,100);
        scene()->addItem(Teacher);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        backthree * three = new backthree();
        three->setPos(20,400);
        scene()->addItem(three);
        choose_teacher4 * Teacher4 = new choose_teacher4();
        Teacher4->setPos(20,550);
        scene()->addItem(Teacher4);
        teacher1use=1;
        teacher3use=0;
    }
    if(teacher1use==0 && teacher2use==1 && teacher3use==1 && teacher4use==0){
            backone * one = new backone();
            one->setPos(20,100);
            scene()->addItem(one);
            choose_teacher2 * Teacher2 = new choose_teacher2();
            Teacher2->setPos(20,250);
            scene()->addItem(Teacher2);
            backthree * three = new backthree();
            three->setPos(20,400);
            scene()->addItem(three);
            choose_teacher4 * Teacher4 = new choose_teacher4();
            Teacher4->setPos(20,550);
            scene()->addItem(Teacher4);
            teacher3use=0;
            teacher4use=1;

    }
    if(teacher1use==1 && teacher2use==0 && teacher3use==1 && teacher4use==0){
        choose_teacher * Teacher = new choose_teacher();
        Teacher->setPos(20,100);
        scene()->addItem(Teacher);
        choose_teacher2 * Teacher2 = new choose_teacher2();
        Teacher2->setPos(20,250);
        scene()->addItem(Teacher2);
        backthree * three = new backthree();
        three->setPos(20,400);
        scene()->addItem(three);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher2use=1;
        teacher3use=0;
    }
}


int control::useteacher4(){
    if(teacher1use==0 && teacher2use==0 && teacher3use==1 && teacher4use==1){
        choose_teacher * Teacher = new choose_teacher();
        Teacher->setPos(20,100);
        scene()->addItem(Teacher);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher1use=1;
        teacher4use=0;
    }
    if(teacher1use==0 && teacher2use==1 && teacher3use==0 && teacher4use==1){
        backone * one = new backone();
        one->setPos(20,100);
        scene()->addItem(one);
        choose_teacher2 * Teacher2 = new choose_teacher2();
        Teacher2->setPos(20,250);
        scene()->addItem(Teacher2);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher3use=1;
        teacher4use=0;
    }
    if(teacher1use==1 && teacher2use==0 && teacher3use==0 && teacher4use==1){
        choose_teacher * Teacher = new choose_teacher();
        Teacher->setPos(20,100);
        scene()->addItem(Teacher);
        backtwo * two = new backtwo();
        two->setPos(20,250);
        scene()->addItem(two);
        choose_teacher3 * Teacher3 = new choose_teacher3();
        Teacher3->setPos(20,400);
        scene()->addItem(Teacher3);
        backfour * four = new backfour();
        four->setPos(20,550);
        scene()->addItem(four);
        teacher3use=1;
        teacher4use=0;
    }
}

