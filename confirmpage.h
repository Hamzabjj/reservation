#ifndef CONFIRMPAGE_H
#define CONFIRMPAGE_H

#include <QDialog>

namespace Ui {
class confirmpage;
}

class confirmpage : public QDialog
{
    Q_OBJECT

public:
    explicit confirmpage(QWidget *parent = 0);
    ~confirmpage();
    void setlabels(int,QString,QString,int,QString) ;

private slots:
    void on_yes_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::confirmpage *ui;
};

#endif // CONFIRMPAGE_H
