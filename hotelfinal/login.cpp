/********************************************************************************
* File Name:	login.cpp
* Description:	第6章实例训练
* Reference book:《Linux环境下Qt4图形界面与MySQL编程》，机械工业出版社.2012.1
* E_mail: openlinux2011@gmail.com
*
********************************************************************************/
#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "chgpwd.h"

#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtGui>
#include "databaseconnection.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pbLogin_clicked()
{
    if(ui->leUid->text().isEmpty()||
       ui->lePwd->text().isEmpty())
    {
        QMessageBox::information(this,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("请输入完整信息"),QMessageBox::Ok);
        return;
    }
     QString uid=ui->leUid->text();
     QString pwd=ui->lePwd->text();
     QSqlQuery query;
     query.prepare("select * from staff where sid=:sid and pwd=:pwd");
     query.bindValue(":sid", uid);
     query.bindValue(":pwd", pwd);
     query.exec();
     if(query.next())
     {
         MainWindow *w=new MainWindow();
         QFile file(":/qss/abc.qss");
         file.open(QFile::ReadOnly);
         QString stylesheet= file.readAll();
         w->setStyleSheet(stylesheet);
         w->show();
         this->hide();
     }
     else
     {

         QMessageBox::warning(this, QStringLiteral("提示"),QString::fromLocal8Bit("请核对用户名与密码！"),QMessageBox::Ok);
         ui->leUid->clear();
         ui->lePwd->clear();
         ui->leUid->setFocus();
     }
}

void login::on_pbChgpwd_clicked()
{
    chgpwd *c=new chgpwd();
    c->show();
    this->hide();
}

void login::on_pbQuit_clicked()
{
    this->close();
}
