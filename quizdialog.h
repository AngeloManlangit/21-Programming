#ifndef QUIZDIALOG_H
#define QUIZDIALOG_H

#include <QDialog>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QProgressBar>
#include <QMessageBox>
#include <QTextEdit>
#include "quizdata.h"

class QuizDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuizDialog(int chapter, QWidget *parent = nullptr);
    ~QuizDialog();

private slots:
    void on_nextButton_clicked();

    void on_finishButton_clicked();

private:
    int currentQuestionIndex;
    int score;

    QVector<Question> questions;
    QVector<int> userAnswers;  // Store user's answers, -1 means no answer
    QButtonGroup *answerGroup;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QRadioButton *optionButtons[4];
    QPushButton *nextButton;
    QPushButton *finishButton;
    QTextEdit *questionLabel;

    void setupUI();
    void loadQuestion();
    void showResults();
};

#endif // QUIZDIALOG_H
