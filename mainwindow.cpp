#include "mainwindow.h"
#include "ui_mainwindow.h"

// for the chapter menu window
#include "chaptermenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("21 Programming");
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

