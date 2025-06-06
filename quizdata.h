#ifndef QUIZDATA_H
#define QUIZDATA_H

#include <QString>
#include <QVector>
#include <QMap>

struct Question {
    QString text;
    QStringList options;
    int correctAnswer;
};

class QuizData {
public:
    static QuizData& getInstance();
    QVector<Question> getQuestionsForChapter(int chapter) const;
    int getTotalQuestionsForChapter(int chapter) const;

private:
    QuizData();
    void initializeQuestions();
    QMap<int, QVector<Question>> chapterQuestions;
};

#endif // QUIZDATA_H
