/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTableView *tvPriceInfo;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *rb4;
    QRadioButton *rb5;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QRadioButton *rb6;
    QRadioButton *rb1;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QTableView *tvRoomInfo;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLineEdit *leID;
    QLabel *label_4;
    QLineEdit *leUserName;
    QLabel *label_5;
    QLineEdit *leRoomID;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QLineEdit *leNumOfNig;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbSubmit;
    QPushButton *pbCancle;
    QWidget *tab3;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QLabel *label_7;
    QLineEdit *leOut_ID;
    QPushButton *pbOut_Search;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_7;
    QTableView *tvQuery;
    QLabel *label_9;
    QLineEdit *leRealdate;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_10;
    QLineEdit *lePay;
    QPushButton *pbCheckout;
    QSpacerItem *horizontalSpacer_12;
    QWidget *tab4;
    QGridLayout *gridLayout_10;
    QTableView *tvCheckin;
    QTableView *tvCheckout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(552, 455);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout_8 = new QGridLayout(tab1);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        tvPriceInfo = new QTableView(tab1);
        tvPriceInfo->setObjectName(QString::fromUtf8("tvPriceInfo"));
        tvPriceInfo->setEnabled(true);

        horizontalLayout->addWidget(tvPriceInfo);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(17, 188, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 0, 3, 1);

        groupBox = new QGroupBox(tab1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("border :2px solid gray;"));
        groupBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rb4 = new QRadioButton(groupBox);
        rb4->setObjectName(QString::fromUtf8("rb4"));
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        rb4->setFont(font);
        rb4->setFocusPolicy(Qt::NoFocus);
        rb4->setAutoFillBackground(false);
        rb4->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb4, 3, 0, 1, 1);

        rb5 = new QRadioButton(groupBox);
        rb5->setObjectName(QString::fromUtf8("rb5"));
        rb5->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb5, 6, 0, 1, 1);

        rb2 = new QRadioButton(groupBox);
        rb2->setObjectName(QString::fromUtf8("rb2"));
        rb2->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb2, 1, 0, 1, 1);

        rb3 = new QRadioButton(groupBox);
        rb3->setObjectName(QString::fromUtf8("rb3"));
        rb3->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb3, 2, 0, 1, 1);

        rb6 = new QRadioButton(groupBox);
        rb6->setObjectName(QString::fromUtf8("rb6"));
        rb6->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb6, 7, 0, 1, 1);

        rb1 = new QRadioButton(groupBox);
        rb1->setObjectName(QString::fromUtf8("rb1"));
        rb1->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout->addWidget(rb1, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 1, 3, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 2, 1);

        label_2 = new QLabel(tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        tvRoomInfo = new QTableView(tab1);
        tvRoomInfo->setObjectName(QString::fromUtf8("tvRoomInfo"));

        gridLayout_3->addWidget(tvRoomInfo, 0, 4, 3, 1);

        verticalSpacer = new QSpacerItem(17, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 3, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        gridLayout_8->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        groupBox_2 = new QGroupBox(tab2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 30, 361, 271));
        groupBox_2->setStyleSheet(QString::fromUtf8("border: 2px solid gray;"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        leID = new QLineEdit(groupBox_2);
        leID->setObjectName(QString::fromUtf8("leID"));
        leID->setStyleSheet(QString::fromUtf8("border :0px ;"));
        leID->setEchoMode(QLineEdit::Normal);

        gridLayout_4->addWidget(leID, 0, 1, 1, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        leUserName = new QLineEdit(groupBox_2);
        leUserName->setObjectName(QString::fromUtf8("leUserName"));
        leUserName->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(leUserName, 1, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        leRoomID = new QLineEdit(groupBox_2);
        leRoomID->setObjectName(QString::fromUtf8("leRoomID"));
        leRoomID->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(leRoomID, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        leNumOfNig = new QLineEdit(groupBox_2);
        leNumOfNig->setObjectName(QString::fromUtf8("leNumOfNig"));
        leNumOfNig->setEnabled(true);
        leNumOfNig->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_4->addWidget(leNumOfNig, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 3, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 2);

        pbSubmit = new QPushButton(groupBox_2);
        pbSubmit->setObjectName(QString::fromUtf8("pbSubmit"));
        pbSubmit->setStyleSheet(QString::fromUtf8(""));
        pbSubmit->setFlat(false);

        gridLayout_5->addWidget(pbSubmit, 1, 0, 1, 1);

        pbCancle = new QPushButton(groupBox_2);
        pbCancle->setObjectName(QString::fromUtf8("pbCancle"));
        pbCancle->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(pbCancle, 1, 1, 1, 1);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        gridLayout_6 = new QGridLayout(tab3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(tab3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"border-color: rgb(173, 168, 166);"));
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        gridLayout_13 = new QGridLayout(groupBox_3);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);

        leOut_ID = new QLineEdit(groupBox_3);
        leOut_ID->setObjectName(QString::fromUtf8("leOut_ID"));

        gridLayout_11->addWidget(leOut_ID, 0, 1, 1, 1);

        pbOut_Search = new QPushButton(groupBox_3);
        pbOut_Search->setObjectName(QString::fromUtf8("pbOut_Search"));

        gridLayout_11->addWidget(pbOut_Search, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_11->addWidget(label_8, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_8, 1, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tvQuery = new QTableView(groupBox_3);
        tvQuery->setObjectName(QString::fromUtf8("tvQuery"));

        gridLayout_7->addWidget(tvQuery, 0, 0, 1, 4);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_7->addWidget(label_9, 1, 0, 1, 1);

        leRealdate = new QLineEdit(groupBox_3);
        leRealdate->setObjectName(QString::fromUtf8("leRealdate"));

        gridLayout_7->addWidget(leRealdate, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 1, 3, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("border :0px ;"));

        gridLayout_7->addWidget(label_10, 2, 0, 1, 1);

        lePay = new QLineEdit(groupBox_3);
        lePay->setObjectName(QString::fromUtf8("lePay"));

        gridLayout_7->addWidget(lePay, 2, 1, 1, 1);

        pbCheckout = new QPushButton(groupBox_3);
        pbCheckout->setObjectName(QString::fromUtf8("pbCheckout"));

        gridLayout_7->addWidget(pbCheckout, 2, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_12, 2, 3, 1, 1);


        gridLayout_12->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        gridLayout_10 = new QGridLayout(tab4);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tvCheckin = new QTableView(tab4);
        tvCheckin->setObjectName(QString::fromUtf8("tvCheckin"));

        gridLayout_10->addWidget(tvCheckin, 0, 0, 1, 1);

        tvCheckout = new QTableView(tab4);
        tvCheckout->setObjectName(QString::fromUtf8("tvCheckout"));

        gridLayout_10->addWidget(tvCheckout, 1, 0, 1, 1);

        tabWidget->addTab(tab4, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\273\212\n"
"\346\227\245\n"
"\346\210\277\n"
"\344\273\267", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\210\277\351\227\264\347\261\273\345\236\213", nullptr));
        rb4->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206\345\217\214\344\272\272\351\227\264", nullptr));
        rb5->setText(QCoreApplication::translate("MainWindow", "\350\261\252\345\215\216\345\217\214\344\272\272\351\227\264", nullptr));
        rb2->setText(QCoreApplication::translate("MainWindow", "\350\261\252\345\215\216\345\215\225\344\272\272\351\227\264", nullptr));
        rb3->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206\345\215\225\344\272\272\351\227\264", nullptr));
        rb6->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\273\237\345\245\227\346\210\277 ", nullptr));
        rb1->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\212\241\345\245\227\346\210\277 ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\210\277\n"
"\351\227\264\n"
"\344\277\241\n"
"\346\201\257\n"
"\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "\345\256\242\346\210\277\346\237\245\350\257\242", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\241\253\345\206\231", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\247\223          \345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\210\277  \351\227\264   \345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\205\245\344\275\217\345\244\251\346\225\260\357\274\232", nullptr));
        pbSubmit->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        pbCancle->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "\347\231\273\350\256\260\345\205\245\344\275\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\270\213\346\254\241\345\205\211\344\270\264", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232 ", nullptr));
        pbOut_Search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\205\245\344\275\217\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\205\245\344\275\217\345\244\251\346\225\260:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\274\264\350\264\271\347\224\250\357\274\232", nullptr));
        pbCheckout->setText(QCoreApplication::translate("MainWindow", "\351\200\200\346\210\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("MainWindow", "\351\200\200\346\210\277\347\273\223\347\256\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QCoreApplication::translate("MainWindow", "\350\256\260\345\275\225\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
