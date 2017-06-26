#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem{
public:
    Health(QGraphicsItem * parent=0);
    void decrease();
    int getHealth();
private:
    int health;
};

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    int getScore();
public:
    int score;
};

class enemy_Health: public QGraphicsTextItem{
public:
    enemy_Health(QGraphicsItem * parent=0);
    void decrease();
    int getenemy_Health();
private:
    int enemy_health;
};

class Mana: public QGraphicsTextItem{
public:
    Mana(QGraphicsItem * parent=0);
    void decrease();
    int getMana();
public:
    int mana=10;
public slots:
    void move();
    void mana_increase();
};

class tip: public QGraphicsTextItem{
public:
    tip(QGraphicsItem * parent=0);

};

class help: public QGraphicsTextItem{
public:
    help(QGraphicsItem * parent=0);

};
#endif // HEALTH_H
