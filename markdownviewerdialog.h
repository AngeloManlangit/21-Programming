#ifndef MARKDOWNVIEWERDIALOG_H
#define MARKDOWNVIEWERDIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class MarkdownViewerDialog;
}

class MarkdownViewerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MarkdownViewerDialog(QWidget *parent = nullptr);
    ~MarkdownViewerDialog();

    // public function to set Markdown content
    void setMarkdownContent(const QString &markdown);

private:
    Ui::MarkdownViewerDialog *ui;
};

#endif // MARKDOWNVIEWERDIALOG_H
