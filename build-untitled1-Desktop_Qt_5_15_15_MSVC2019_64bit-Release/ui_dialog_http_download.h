/********************************************************************************
** Form generated from reading UI file 'dialog_http_download.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HTTP_DOWNLOAD_H
#define UI_DIALOG_HTTP_DOWNLOAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_http_download
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdi_url;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_loadpath;
    QPushButton *pushButton_loadpath;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_state;
    QCheckBox *checkBox;
    QPushButton *pushButton_start;

    void setupUi(QDialog *Dialog_http_download)
    {
        if (Dialog_http_download->objectName().isEmpty())
            Dialog_http_download->setObjectName(QString::fromUtf8("Dialog_http_download"));
        Dialog_http_download->resize(378, 220);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/img/http.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_http_download->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Dialog_http_download);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdi_url = new QTextEdit(Dialog_http_download);
        textEdi_url->setObjectName(QString::fromUtf8("textEdi_url"));

        horizontalLayout->addWidget(textEdi_url);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_loadpath = new QLineEdit(Dialog_http_download);
        lineEdit_loadpath->setObjectName(QString::fromUtf8("lineEdit_loadpath"));

        horizontalLayout_2->addWidget(lineEdit_loadpath);

        pushButton_loadpath = new QPushButton(Dialog_http_download);
        pushButton_loadpath->setObjectName(QString::fromUtf8("pushButton_loadpath"));

        horizontalLayout_2->addWidget(pushButton_loadpath);

        horizontalLayout_2->setStretch(0, 15);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(Dialog_http_download);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_state = new QLabel(Dialog_http_download);
        label_state->setObjectName(QString::fromUtf8("label_state"));

        horizontalLayout_3->addWidget(label_state);

        checkBox = new QCheckBox(Dialog_http_download);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_3->addWidget(checkBox);

        pushButton_start = new QPushButton(Dialog_http_download);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_start);

        horizontalLayout_3->setStretch(0, 15);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        retranslateUi(Dialog_http_download);

        QMetaObject::connectSlotsByName(Dialog_http_download);
    } // setupUi

    void retranslateUi(QDialog *Dialog_http_download)
    {
        Dialog_http_download->setWindowTitle(QCoreApplication::translate("Dialog_http_download", "Http\344\270\213\350\275\275", nullptr));
        textEdi_url->setHtml(QCoreApplication::translate("Dialog_http_download", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#787878;\">\350\257\267\350\276\223\345\205\245\346\234\211\346\225\210\347\232\204URL\345\234\260\345\235\200\357\274\232</span></p></body></html>", nullptr));
        pushButton_loadpath->setText(QCoreApplication::translate("Dialog_http_download", "\344\270\213\350\275\275\350\207\263", nullptr));
        label_state->setText(QCoreApplication::translate("Dialog_http_download", "\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232\346\234\252\345\274\200\345\247\213", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog_http_download", "\345\256\214\346\210\220\345\220\216\345\205\263\351\227\255", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Dialog_http_download", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_http_download: public Ui_Dialog_http_download {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HTTP_DOWNLOAD_H
