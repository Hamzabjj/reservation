#include "confirmpage.h"

confirmpage::confirmpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmpage)
{
    ui->setupUi(this);
}




void confirmpage:: setlabels(int,QString,QString,int,QString) {

    ui->user->setText(CIN);
   ui->pass->setText(NOM);
   ui->con->setText(PRENOM);
   ui->ff->setText(NUM_TEL);
   ui->loc->setText(PLACES);


}
