#include "chaptermenu.h"
#include "ui_chaptermenu.h"

#include "markdownviewerdialog.h"   // to show the chapter markdwons
#include <QFile>                    // for file operations
#include <QTextStream>              // for reading text from a file
#include <QMessageBox>              // for showing error messages

ChapterMenu::ChapterMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChapterMenu)
{
    ui->setupUi(this);

    setWindowTitle("21 Programming - Select Chapter");
}

ChapterMenu::~ChapterMenu()
{
    delete ui;
}


void ChapterMenu::on_ChapterBtn_1_clicked()
{
    openMarkdown(1);
}

void ChapterMenu::on_ChapterBtn_2_clicked()
{
    openMarkdown(2);
}


void ChapterMenu::on_ChapterBtn_3_clicked()
{
    openMarkdown(3);
}


void ChapterMenu::on_ChapterBtn_4_clicked()
{
    openMarkdown(4);
}


void ChapterMenu::on_ChapterBtn_5_clicked()
{
    openMarkdown(5);
}


void ChapterMenu::on_ChapterBtn_6_clicked()
{
    openMarkdown(6);
}


void ChapterMenu::on_ChapterBtn_7_clicked()
{
    openMarkdown(7);
}


void ChapterMenu::on_ChapterBtn_8_clicked()
{
    openMarkdown(8);
}


void ChapterMenu::on_ChapterBtn_9_clicked()
{
    openMarkdown(9);
}


void ChapterMenu::on_ChapterBtn_10_clicked()
{
    openMarkdown(10);
}


void ChapterMenu::on_ChapterBtn_11_clicked()
{
    openMarkdown(11);
}


void ChapterMenu::on_ChapterBtn_12_clicked()
{
    openMarkdown(12);
}


void ChapterMenu::on_ChapterBtn_13_clicked()
{
    openMarkdown(13);
}


void ChapterMenu::on_ChapterBtn_14_clicked()
{
    openMarkdown(14);
}


void ChapterMenu::on_ChapterBtn_15_clicked()
{
    openMarkdown(15);
}


void ChapterMenu::on_ChapterBtn_16_clicked()
{
    openMarkdown(16);
}


void ChapterMenu::on_ChapterBtn_17_clicked()
{
    openMarkdown(17);
}


void ChapterMenu::on_ChapterBtn_18_clicked()
{
    openMarkdown(18);
}


void ChapterMenu::on_ChapterBtn_19_clicked()
{
    openMarkdown(19);
}


void ChapterMenu::on_ChapterBtn_20_clicked()
{
    openMarkdown(20);
}


void ChapterMenu::on_ChapterBtn_21_clicked()
{
    openMarkdown(21);
}

void ChapterMenu::openMarkdown(int chapter_num) {
    QString filePath = QString(":/Chapters/Chapter") + QString::number(chapter_num) + ".md";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open " + filePath);
        return;
    }

    QTextStream in(&file);
    QString markdownContent = in.readAll();
    file.close();

    MarkdownViewerDialog *viewerDialog = new MarkdownViewerDialog(this); // 'this' sets ChapterMenu as the parent

    // for the title of the window
    QString windowTitle;

    switch(chapter_num) {
        case 1:
            windowTitle = "Chapter 1 - Welcome to Computer Science";
            break;
        case 2:
            windowTitle = "Chapter 2 - Introduction to C";
            break;
        case 3:
            windowTitle = "Chapter 3 - C";
            break;
        case 4:
            windowTitle = "Chapter 4 - Inputs and Outputs";
            break;
        case 5:
            windowTitle = "Chapter 5 - Mathematical Operations in C";
            break;
        case 6:
            windowTitle = "Chapter 6 - Conditions";
            break;
        case 7:
            windowTitle = "Chapter 7 - Loops";
            break;
        case 8:
            windowTitle = "Chapter 8 - Arrays";
            break;
        case 9:
            windowTitle = "Chapter 9 - Multidimensional Arrays";
            break;
        case 10:
            windowTitle = "Chapter 10 - Functions Introduction";
            break;
        case 11:
            windowTitle = "Chapter 11 - Functions";
            break;
        case 12:
            windowTitle = "Chapter 12 - Structures";
            break;
        case 13:
            windowTitle = "Chapter 13 - Unions and Enumerations";
            break;
        case 14:
            windowTitle = "Chapter 14 - Memory";
            break;
        case 15:
            windowTitle = "Chapter 15 - Pointers";
            break;
        case 16:
            windowTitle = "Chapter 16 - Pointers and Functions";
            break;
        case 17:
            windowTitle = "Chapter 17 - Dynamic Memory Allocation";
            break;
        case 18:
            windowTitle = "Chapter 18 - Writing Linked Lists";
            break;
        case 19:
            windowTitle = "Chapter 19 - Handling Sequential Files";
            break;
        case 20:
            windowTitle = "Chapter 20 - Handling Random-Access Files";
            break;
        case 21:
            windowTitle = "Chapter 21 - C++";
            break;
    }

    viewerDialog->setWindowTitle(windowTitle);

    viewerDialog->setMarkdownContent(markdownContent);
    viewerDialog->exec();
}
