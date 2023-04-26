/********************************************************************************
* File Name:	chgpwd.h
* Description:	第6章实例训练
* Reference book:《Linux环境下Qt4图形界面与MySQL编程》，机械工业出版社.2012.1
* E_mail: openlinux2011@gmail.com
*
********************************************************************************/
#ifndef CHGPWD_H
#define CHGPWD_H
#include <QMainWindow>

namespace Ui {
    class chgpwd;
}

class chgpwd : public QMainWindow
{
    Q_OBJECT

public:
    explicit chgpwd(QWidget *parent = 0);
    ~chgpwd();

private slots:
    void on_pbSubmit_clicked();

    void on_pbQuit_clicked();

private:
    Ui::chgpwd *ui;
};

#endif // CHGPWD_H
