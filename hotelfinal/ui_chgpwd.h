/********************************************************************************
** Form generated from reading UI file 'chgpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHGPWD_H
#define UI_CHGPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chgpwd
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leUid;
    QLabel *label_2;
    QLineEdit *lePwd;
    QLabel *label_3;
    QLineEdit *leNewPwd;
    QLabel *label_4;
    QLineEdit *leNewPwdcopy;
    QPushButton *pbQuit;
    QPushButton *pbSubmit;

    void setupUi(QMainWindow *chgpwd)
    {
        if (chgpwd->objectName().isEmpty())
            chgpwd->setObjectName(QString::fromUtf8("chgpwd"));
        chgpwd->resize(291, 256);
        centralwidget = new QWidget(chgpwd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leUid = new QLineEdit(centralwidget);
        leUid->setObjectName(QString::fromUtf8("leUid"));

        gridLayout->addWidget(leUid, 0, 2, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePwd = new QLineEdit(centralwidget);
        lePwd->setObjectName(QString::fromUtf8("lePwd"));
        lePwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePwd, 1, 2, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leNewPwd = new QLineEdit(centralwidget);
        leNewPwd->setObjectName(QString::fromUtf8("leNewPwd"));
        leNewPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leNewPwd, 2, 2, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        leNewPwdcopy = new QLineEdit(centralwidget);
        leNewPwdcopy->setObjectName(QString::fromUtf8("leNewPwdcopy"));
        leNewPwdcopy->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leNewPwdcopy, 3, 2, 1, 2);

        pbQuit = new QPushButton(centralwidget);
        pbQuit->setObjectName(QString::fromUtf8("pbQuit"));

        gridLayout->addWidget(pbQuit, 4, 3, 1, 1);

        pbSubmit = new QPushButton(centralwidget);
        pbSubmit->setObjectName(QString::fromUtf8("pbSubmit"));

        gridLayout->addWidget(pbSubmit, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        chgpwd->setCentralWidget(centralwidget);

        retranslateUi(chgpwd);

        QMetaObject::connectSlotsByName(chgpwd);
    } // setupUi

    void retranslateUi(QMainWindow *chgpwd)
    {
        chgpwd->setWindowTitle(QCoreApplication::translate("chgpwd", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("chgpwd", "\347\224\250\346\210\267\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("chgpwd", "\345\216\237\345\247\213\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("chgpwd", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("chgpwd", "\347\241\256\350\256\244\357\274\232", nullptr));
        pbQuit->setText(QCoreApplication::translate("chgpwd", "\345\217\226\346\266\210", nullptr));
        pbSubmit->setText(QCoreApplication::translate("chgpwd", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chgpwd: public Ui_chgpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHGPWD_H
