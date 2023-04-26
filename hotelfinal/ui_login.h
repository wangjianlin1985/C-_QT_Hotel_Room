/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leUid;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lePwd;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pbLogin;
    QPushButton *pbQuit;
    QPushButton *pbChgpwd;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(307, 257);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 161, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 260, 88));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        leUid = new QLineEdit(layoutWidget);
        leUid->setObjectName(QString::fromUtf8("leUid"));

        gridLayout->addWidget(leUid, 0, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        lePwd = new QLineEdit(layoutWidget);
        lePwd->setObjectName(QString::fromUtf8("lePwd"));
        lePwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePwd, 1, 2, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 170, 269, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pbLogin = new QPushButton(layoutWidget1);
        pbLogin->setObjectName(QString::fromUtf8("pbLogin"));

        gridLayout_2->addWidget(pbLogin, 0, 0, 1, 1);

        pbQuit = new QPushButton(layoutWidget1);
        pbQuit->setObjectName(QString::fromUtf8("pbQuit"));

        gridLayout_2->addWidget(pbQuit, 0, 2, 1, 1);

        pbChgpwd = new QPushButton(layoutWidget1);
        pbChgpwd->setObjectName(QString::fromUtf8("pbChgpwd"));

        gridLayout_2->addWidget(pbChgpwd, 0, 1, 1, 1);

        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("login", "\346\254\242\350\277\216\347\231\273\345\275\225\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pbLogin->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pbQuit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        pbChgpwd->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
