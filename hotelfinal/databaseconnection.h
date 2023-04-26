/********************************************************************************
* File Name:	databaseconnection.h
* Description:	第6章实例训练
* Reference book:《Linux环境下Qt4图形界面与MySQL编程》，机械工业出版社.2012.1
* E_mail: openlinux2011@gmail.com
*
********************************************************************************/
#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <QSqlDatabase>
#include <QDebug>

//static bool connectiondatabase()
//{

//     qDebug()<< QSqlDatabase::drivers() ;
//     QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("hotel");
//    db.setUserName("root");
//    db.setPassword("1234");
//    if(!db.open())
//    {
//        return false;
//    }
//    return true;
//}

static QSqlDatabase  db;
static bool connectiondatabase()
{
    QSqlDatabase  db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=%1").arg("C:/hotel.mdb"));
    if (!db.open()) {

        //qDebug() << "Open datatabase error:" << db.lastError().text();
        return false;
    }
    return true;
}
#endif // DATABASECONNECTION_H
