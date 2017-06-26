#include <QApplication>
#include "game.h"
#include "mainwindow.h"

game * Game;


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Game = new game();

    MainWindow w;
    w.show();



    return a.exec();
}
