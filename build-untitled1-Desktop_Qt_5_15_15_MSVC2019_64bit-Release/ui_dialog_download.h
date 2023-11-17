/********************************************************************************
** Form generated from reading UI file 'dialog_download.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DOWNLOAD_H
#define UI_DIALOG_DOWNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_http_download)
    {
        if (Dialog_http_download->objectName().isEmpty())
            Dialog_http_download->setObjectName(QString::fromUtf8("Dialog_http_download"));
        Dialog_http_download->resize(378, 220);
        verticalLayout = new QVBoxLayout(Dialog_http_download);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(Dialog_http_download);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(Dialog_http_download);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(Dialog_http_download);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(Dialog_http_download);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Dialog_http_download);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        pushButton = new QPushButton(Dialog_http_download);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton);

        horizontalLayout_3->setStretch(0, 15);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog_http_download);

        QMetaObject::connectSlotsByName(Dialog_http_download);
    } // setupUi

    void retranslateUi(QDialog *Dialog_http_download)
    {
        Dialog_http_download->setWindowTitle(QCoreApplication::translate("Dialog_http_download", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_http_download", "\344\270\213\350\275\275\350\207\263...", nullptr));
        label->setText(QCoreApplication::translate("Dialog_http_download", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_http_download", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
class DialogHttpDownload: public Ui_Dialog_http_download {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DOWNLOAD_H
