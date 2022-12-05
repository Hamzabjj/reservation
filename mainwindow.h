#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleValidator>
#include "reservation.h"
#include "mydb.h"
#include "book.h"
#include "cancel.h"
#include "arduino.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateUI();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_Supprimer_clicked();

    void on_pb_Modifier_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pb_Quitter_clicked();

    void on_pB_TrierParCIN_clicked();

    void on_pb_TrierParNom_clicked();

    void on_pushButton_clicked();

    void on_pB_Recherche_clicked();

    void on_confirm_clicked();

    void on_btnBook_clicked();

    void on_btnCancel_clicked();

    void on_btnReset_clicked();

    void on_pB_ExPDF_clicked();

    void on_pB_ExPDF_2_clicked();

    void on_pB_Map_clicked();
    void update_RFID();

private:
    Ui::MainWindow *ui;
    reservation R;
    book *ptrBook;
    cancel *ptrCancel;
    QByteArray data; // variable contenant les données reçues
    QString RFID="";

    Arduino A; // objet temporaire

};
#endif // MAINWINDOW_H
