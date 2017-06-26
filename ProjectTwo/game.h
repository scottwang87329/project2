#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "control.h"
#include "health.h"


class game: public QGraphicsView{
public:
    game(QWidget * parent = 0);

    QGraphicsScene * scene;
    control * player;
    Score * score;
    Health * health;
    enemy_Health * enemy_health;
    Mana * mana;
    tip * Tip;
    help * Help;
};

#endif // GAME_H
