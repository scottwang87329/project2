#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setPixmap( QPixmap(":/image/teacher21.jpg"));
    ui->label_2->setPixmap(QPixmap(":/image/teacher30.jpg"));
    ui->label_3->setPixmap(QPixmap(":/image/content-3_clip_image006.jpg"));
    ui->label_4->setPixmap(QPixmap(":/image/307p47.jpg"));
    ui->label_10->setPixmap(QPixmap(":/image/圖片1.png"));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked(){




    this->hide();
}
