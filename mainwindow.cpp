#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QPixmap>

// for the chapter menu window
#include "chaptermenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("21 Programming");
    setWindowIcon(QIcon(":/img/images/logo.png"));

    /*int bannerw = ui->Banner->width();
    int bannerh = ui->Banner->height();

    QPixmap banner(":/img/images/banner.png");
    ui->Banner->setPixmap(banner.scaled(bannerw, bannerh,Qt::KeepAspectRatio));*/

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LearnBtn_clicked()
{
    ChapterMenu chaptermenu;
    chaptermenu.setModal(true);
    chaptermenu.exec();
}

