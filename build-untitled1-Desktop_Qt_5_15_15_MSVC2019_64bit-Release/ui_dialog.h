/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEditSrcDir;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_http_download;
    QPushButton *pushButton_src_dir;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_update;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_check;
    QProgressBar *progressBar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(508, 402);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/img/\344\270\213\350\275\275.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        verticalLayout_6 = new QVBoxLayout(Dialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label);

        lineEditSrcDir = new QLineEdit(Dialog);
        lineEditSrcDir->setObjectName(QString::fromUtf8("lineEdit_src_dir"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditSrcDir->sizePolicy().hasHeightForWidth());
        lineEditSrcDir->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(lineEditSrcDir);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_http_download = new QPushButton(Dialog);
        pushButton_http_download->setObjectName(QString::fromUtf8("pushButton_http_download"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_http_download->sizePolicy().hasHeightForWidth());
        pushButton_http_download->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(pushButton_http_download);

        pushButton_src_dir = new QPushButton(Dialog);
        pushButton_src_dir->setObjectName(QString::fromUtf8("pushButton_src_dir"));
        sizePolicy3.setHeightForWidth(pushButton_src_dir->sizePolicy().hasHeightForWidth());
        pushButton_src_dir->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(pushButton_src_dir);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_5);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 15);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_update = new QPushButton(Dialog);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        sizePolicy3.setHeightForWidth(pushButton_update->sizePolicy().hasHeightForWidth());
        pushButton_update->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton_update);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_check = new QPushButton(Dialog);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        sizePolicy3.setHeightForWidth(pushButton_check->sizePolicy().hasHeightForWidth());
        pushButton_check->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton_check);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy4);
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 1);

        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Update", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\346\234\254\345\234\260\345\233\272\344\273\266\345\234\260\345\235\200", nullptr));
        pushButton_http_download->setText(QCoreApplication::translate("Dialog", "HTTP\344\270\213\350\275\275", nullptr));
        pushButton_src_dir->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\346\272\220\346\226\207\344\273\266", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;\346\216\247\345\210\266\345\217\260\350\276\223\345\207\272&gt;</p></body></html>", nullptr));
        pushButton_update->setText(QCoreApplication::translate("Dialog", "\345\233\272\344\273\266\346\233\264\346\226\260", nullptr));
        pushButton_check->setText(QCoreApplication::translate("Dialog", "\347\211\210\346\234\254\346\243\200\346\237\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
