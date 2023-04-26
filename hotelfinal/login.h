/********************************************************************************
* File Name:	login.h
* Description:	第6章实例训练
* Reference book:《Linux环境下Qt4图形界面与MySQL编程》，机械工业出版社.2012.1
* E_mail: openlinux2011@gmail.com
*
********************************************************************************/
#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
    class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pbLogin_clicked();

    void on_pbChgpwd_clicked();

    void on_pbQuit_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
