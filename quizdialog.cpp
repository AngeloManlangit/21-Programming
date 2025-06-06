#include "quizdialog.h"
#include <QMessageBox>
#include <QDebug>
#include <QTextEdit>
#include <QTextOption>

QuizDialog::QuizDialog(int chapter, QWidget *parent) : QDialog(parent) {
    currentQuestionIndex = 0;
    score = 0;
    questions = QuizData::getInstance().getQuestionsForChapter(chapter);

    // Safety check for empty questions
    if (questions.isEmpty()) {
        QMessageBox::critical(this, "Error", "No questions available for this chapter.");
        reject();
        return;
    }

    // Initialize user answers array
    userAnswers.resize(questions.size());
    for (int i = 0; i < questions.size(); i++) {
        userAnswers[i] = -1;  // -1 means no answer selected
    }

    setupUI();
    loadQuestion();
}

void QuizDialog::setupUI() {
    setWindowTitle("Quiz");
    setMinimumSize(900, 700);

    // Main layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // Progress section
    QHBoxLayout *progressLayout = new QHBoxLayout();
    progressLabel = new QLabel(QString("Question %1 of %2").arg(currentQuestionIndex + 1).arg(questions.size()));
    progressBar = new QProgressBar();
    progressBar->setRange(0, questions.size());
    progressBar->setValue(currentQuestionIndex + 1);
    progressLayout->addWidget(progressLabel);
    progressLayout->addWidget(progressBar);
    mainLayout->addLayout(progressLayout);

    // Question section
    questionLabel = new QTextEdit(this);
    questionLabel->setReadOnly(true);
    questionLabel->setWordWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
    questionLabel->setMinimumHeight(120);
    questionLabel->setMaximumHeight(250);
    mainLayout->addWidget(questionLabel);

    // Options section
    answerGroup = new QButtonGroup(this);
    for (int i = 0; i < 4; i++) {
        optionButtons[i] = new QRadioButton();
        optionButtons[i]->setMinimumHeight(30);  // Give more vertical space for text
        answerGroup->addButton(optionButtons[i], i);
        mainLayout->addWidget(optionButtons[i]);
    }

    // Navigation buttons
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    nextButton = new QPushButton("Next");
    finishButton = new QPushButton("Finish");
    buttonLayout->addWidget(nextButton);
    buttonLayout->addWidget(finishButton);
    mainLayout->addLayout(buttonLayout);

    // Connect signals
    connect(nextButton, &QPushButton::clicked, this, &QuizDialog::on_nextButton_clicked);
    connect(finishButton, &QPushButton::clicked, this, &QuizDialog::on_finishButton_clicked);
}

void QuizDialog::on_nextButton_clicked() {
    // Register current answer
    int selectedId = answerGroup->checkedId();
    if (selectedId != -1) {
        userAnswers[currentQuestionIndex] = selectedId;
    }

    // Move to next question
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.size()) {
        loadQuestion();
    }
}

void QuizDialog::loadQuestion() {
    if (currentQuestionIndex < 0 || currentQuestionIndex >= questions.size()) {
        qDebug() << "Invalid question index:" << currentQuestionIndex << "Total questions:" << questions.size();
        return;
    }

    const Question& question = questions[currentQuestionIndex];

    // Update progress
    progressLabel->setText(QString("Question %1 of %2").arg(currentQuestionIndex + 1).arg(questions.size()));
    progressBar->setValue(currentQuestionIndex + 1);

    // Set question text
    questionLabel->setText(question.text);

    // Set options
    for (int i = 0; i < 4 && i < question.options.size(); i++) {
        optionButtons[i]->setText(question.options[i]);
        optionButtons[i]->setChecked(false);
    }

    // Enable/disable navigation buttons
    bool isLastQuestion = (currentQuestionIndex == questions.size() - 1);
    nextButton->setEnabled(!isLastQuestion);
    finishButton->setEnabled(isLastQuestion);

    // If this is the last question, make sure the finish button is visible and enabled
    if (isLastQuestion) {
        finishButton->show();
        finishButton->setEnabled(true);
    }
}

void QuizDialog::on_finishButton_clicked() {
    // Register final answer
    int selectedId = answerGroup->checkedId();
    if (selectedId != -1) {
        userAnswers[currentQuestionIndex] = selectedId;
    }

    // Calculate score
    int correctAnswers = 0;
    for (int i = 0; i < questions.size(); i++) {
        if (userAnswers[i] == questions[i].correctAnswer) {
            correctAnswers++;
        }
    }

    // Show results
    QString resultMsg = QString("Quiz Complete!\nScore: %1/%2\nPercentage: %3%")
                            .arg(correctAnswers)
                            .arg(questions.size())
                            .arg((int)(100.0 * correctAnswers / questions.size()));

    // Add a list of incorrect question numbers
    QStringList wrongList;
    for (int i = 0; i < questions.size(); ++i) {
        if (userAnswers[i] != questions[i].correctAnswer) {
            wrongList << QString::number(i + 1);
        }
    }
    if (!wrongList.isEmpty()) {
        resultMsg += "\n\nQuestions answered incorrectly: " + wrongList.join(", ");
    }

    QMessageBox::information(this, "Quiz Results", resultMsg);
    done(QDialog::Accepted);  // Use done() instead of accept() to properly close the dialog
}

QuizDialog::~QuizDialog() {
    // No need to delete ui, since we are not using it
}
