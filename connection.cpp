#include "connection.h"

connection::connection(){}
bool connection::CreateConnexion()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjetS");
    db.setUserName("Saw");
    db.setPassword("hamza");
    if (db.open())
        test=true;
    return  test;
}

void connection::FermerConnexion(){db.close();}

bool connection::OuvrirConnexion(){
    if (db.open())
        return true ;
    else
        return false;

}

