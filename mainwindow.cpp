#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QPixmap>

// for the chapter menu window
#include "chaptermenu.h"

#include <QFile>

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

    QFile styleFile(":/miscellaneous/styles.qss");

    if (styleFile.open(QFile::ReadOnly | QFile::Text)) {
        QString styleSheet = styleFile.readAll();
        this->setStyleSheet(styleSheet); // Apply the stylesheet to the ChapterMenu dialog
        styleFile.close();
    } else {
        qDebug() << "ERROR: Could not open stylesheet file: :/styles/chaptermenu_styles.qss";
    }
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

