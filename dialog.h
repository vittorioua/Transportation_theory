#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dialoghelp.h>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QGraphicsScene>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    QStandardItemModel *mdl;
    QMessageBox mg;
    int mass[30][30],mass2[30][30];
    QList<int> list1,list2;
    int min,min_index_row=0,min_index_column=0;
    int sum3=0, sum4=0;
    int sum1=0, sum2=0;
    DialogHelp *dh;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
