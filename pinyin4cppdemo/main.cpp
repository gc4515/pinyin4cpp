#include <QApplication>
#include "PinyinParseWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PinyinParseWidget *pinyinParseWidget=new PinyinParseWidget;
    pinyinParseWidget->show();
    //start:init view
    /*
    QWidget *pMainWidget=new QWidget;

    QVBoxLayout *pMainlayout=new QVBoxLayout;

    QHBoxLayout *pInputLayout=new QHBoxLayout;
    QLabel *pInputPrompt=new QLabel("Input Chinese:");
    QTextEdit *pInputString=new QTextEdit;
    pInputLayout->addWidget(pInputPrompt);
    pInputLayout->addWidget(pInputString);

    QPushButton *pConvertBtn=new QPushButton("Convert to Pinyin");

    pMainlayout->addLayout(pInputLayout);
    pMainlayout->addWidget(pConvertBtn);

    pMainWidget->setLayout(pMainlayout);
    pMainWidget->show();
    */
    //end:init view

    return a.exec();
}
