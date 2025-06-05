#include "markdownviewerdialog.h"
#include "ui_markdownviewerdialog.h"

MarkdownViewerDialog::MarkdownViewerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MarkdownViewerDialog)
{
    ui->setupUi(this);

    setWindowTitle("Markdown Viewer");
}

MarkdownViewerDialog::~MarkdownViewerDialog()
{
    delete ui;
}

void MarkdownViewerDialog::setMarkdownContent(const QString &markdown)
{
    // Make sure the QTextBrowser object exists and is accessible
    if (ui->textBrowser) {
        ui->textBrowser->setMarkdown(markdown);
    }
}
