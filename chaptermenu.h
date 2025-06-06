#ifndef CHAPTERMENU_H
#define CHAPTERMENU_H

#include <QDialog>

namespace Ui {
class ChapterMenu;
}

class ChapterMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ChapterMenu(QWidget *parent = nullptr, bool isQuizMode = false);
    ~ChapterMenu();
    int getSelectedChapter() const { return selectedChapter; }

private slots:

    void on_ChapterBtn_1_clicked();

    void on_ChapterBtn_2_clicked();

    void on_ChapterBtn_3_clicked();

    void on_ChapterBtn_4_clicked();

    void on_ChapterBtn_5_clicked();

    void on_ChapterBtn_6_clicked();

    void on_ChapterBtn_7_clicked();

    void on_ChapterBtn_8_clicked();

    void on_ChapterBtn_9_clicked();

    void on_ChapterBtn_10_clicked();

    void on_ChapterBtn_11_clicked();

    void on_ChapterBtn_12_clicked();

    void on_ChapterBtn_13_clicked();

    void on_ChapterBtn_14_clicked();

    void on_ChapterBtn_15_clicked();

    void on_ChapterBtn_16_clicked();

    void on_ChapterBtn_17_clicked();

    void on_ChapterBtn_18_clicked();

    void on_ChapterBtn_19_clicked();

    void on_ChapterBtn_20_clicked();

    void on_ChapterBtn_21_clicked();

private:
    Ui::ChapterMenu *ui;

    int selectedChapter;

    bool quizMode;

    void openMarkdown(int chapter_num);

    void handleChapterSelection(int chapter);
};

#endif // CHAPTERMENU_H
