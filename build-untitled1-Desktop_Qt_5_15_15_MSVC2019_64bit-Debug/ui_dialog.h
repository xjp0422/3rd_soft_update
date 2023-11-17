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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_src_dir;
    QPushButton *pushButton_src_dir;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_dst_dir;
    QPushButton *pushButton_dst_dir;
    QLineEdit *lineEdit_3rd_dir;
    QPushButton *pushButton_open_3rd;
    QTextBrowser *textBrowser;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_update;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_check;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(347, 436);
        verticalLayout_6 = new QVBoxLayout(Dialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        verticalLayout_6->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_src_dir = new QLineEdit(Dialog);
        lineEdit_src_dir->setObjectName(QString::fromUtf8("lineEdit_src_dir"));

        verticalLayout->addWidget(lineEdit_src_dir);

        pushButton_src_dir = new QPushButton(Dialog);
        pushButton_src_dir->setObjectName(QString::fromUtf8("pushButton_src_dir"));

        verticalLayout->addWidget(pushButton_src_dir);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_dst_dir = new QLineEdit(Dialog);
        lineEdit_dst_dir->setObjectName(QString::fromUtf8("lineEdit_dst_dir"));

        verticalLayout_2->addWidget(lineEdit_dst_dir);

        pushButton_dst_dir = new QPushButton(Dialog);
        pushButton_dst_dir->setObjectName(QString::fromUtf8("pushButton_dst_dir"));

        verticalLayout_2->addWidget(pushButton_dst_dir);

        lineEdit_3rd_dir = new QLineEdit(Dialog);
        lineEdit_3rd_dir->setObjectName(QString::fromUtf8("lineEdit_3rd_dir"));

        verticalLayout_2->addWidget(lineEdit_3rd_dir);

        pushButton_open_3rd = new QPushButton(Dialog);
        pushButton_open_3rd->setObjectName(QString::fromUtf8("pushButton_open_3rd"));

        verticalLayout_2->addWidget(pushButton_open_3rd);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);

        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_6->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_update = new QPushButton(Dialog);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));

        horizontalLayout->addWidget(pushButton_update);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_check = new QPushButton(Dialog);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));

        horizontalLayout->addWidget(pushButton_check);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Update", nullptr));
        pushButton_src_dir->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\346\272\220\346\226\207\344\273\266", nullptr));
        pushButton_dst_dir->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\347\233\256\346\240\207\346\226\207\344\273\266", nullptr));
        pushButton_open_3rd->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\347\254\254\344\270\211\346\226\271\346\217\222\344\273\266", nullptr));
        pushButton_update->setText(QCoreApplication::translate("Dialog", "\346\233\264\346\226\260", nullptr));
        pushButton_check->setText(QCoreApplication::translate("Dialog", "\347\211\210\346\234\254\346\243\200\346\237\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
