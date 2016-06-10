#include "dialog.h"
#include "dialoghelp.h"
#include "ui_dialog.h"
#include <qdebug.h>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);

    dh=new DialogHelp(this);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    bool ok;
    mdl=new QStandardItemModel(ui->lineEdit->text().toInt(&ok,10)+1,ui->lineEdit_2->text().toInt(&ok,10)+1,this);
    mdl->setHeaderData(ui->lineEdit_2->text().toInt(&ok,10), Qt::Horizontal, "Ресурсы");
    mdl->setHeaderData(ui->lineEdit->text().toInt(&ok,10), Qt::Vertical, "Потребности");

    ui->tableView->setModel(mdl);

}

void Dialog::on_pushButton_2_clicked()
{

    for (int i = 0; i < mdl->rowCount()-1; ++i) {
        list1.push_back(ui->tableView->model()->data(ui->tableView->model()->index(i,ui->tableView->model()->columnCount()-1)).toInt());
    }

    for (int j = 0; j < list1.size(); ++j) {
        sum1+=list1[j];

    }
    for (int i = 0; i < mdl->columnCount()-1; ++i) {
        list2.push_back(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->model()->rowCount()-1,i)).toInt());
    }
    for (int j = 0; j < list2.size(); ++j) {

       sum2+=list2[j];
    }

    if(sum2!=sum1){
        list1.clear();
        list2.clear();
        sum1=0;
        sum2=0;
        QMessageBox::information(0,"Warning!","Balance conditions are not met.",QMessageBox::Ok);
    }else{
        for (int i = 0; i < mdl->rowCount()-1; ++i) {
            for (int j = 0; j < mdl->columnCount()-1; ++j) {
                mass[i][j]=ui->tableView->model()->data(ui->tableView->model()->index(i,j)).toInt();
            }

        }
        //----------------------------
        for (int j = 0; j < list1.size(); ++j) {
            sum3+=list1[j];

        }
        for (int j = 0; j < list2.size(); ++j) {

           sum4+=list2[j];
        }
        //----------------------------
        int end=0;
        while(1){

            if(end==20){
                break;
            }
            end++;
            sum3=0;
            sum4=0;

            for (int j = 0; j < list1.size(); ++j) {
                sum3+=list1[j];

            }
            for (int j = 0; j < list2.size(); ++j) {

               sum4+=list2[j];
            }

            if((sum3==0)&&(sum4==0)) break;
            min = mass[min_index_row][min_index_column];

            for (int i = 0; i < mdl->rowCount()-1; i++)
            {
                for (int j = 0; j < mdl->columnCount()-1; j++){

                    if((min > mass[i][j]))
                    {
                        min = mass[i][j];

                        min_index_row = i;
                        min_index_column = j;



                    }
                }
            }
            mass[min_index_row][min_index_column]=10001;
            ui->tableView->model()->setData(ui->tableView->model()->index(min_index_row,min_index_column),10001,0);

            if(list2[min_index_column]<=list1[min_index_row]){

                ui->tableView->model()->setData(ui->tableView->model()->index(min_index_row,min_index_column),list2[min_index_column],0);

                list1[min_index_row]-=list2[min_index_column];
                list2[min_index_column]-=list2[min_index_column];

            }else{

                mass2[min_index_row][min_index_column]=list1[min_index_row];
                ui->tableView->model()->setData(ui->tableView->model()->index(min_index_row,min_index_column),list1[min_index_row],0);
                list2[min_index_column]-=list1[min_index_row];
                list1[min_index_row]-=list1[min_index_row];
            }
            if(list2[min_index_column]==0){
                for (int i = 0; i < mdl->rowCount()-1; i++){

                    if(mass[i][min_index_column]!=10001){
                    mass[i][min_index_column]=10000;
                    ui->tableView->model()->setData(ui->tableView->model()->index(i,min_index_column),10000,0);
                    }

                }
            }
            if(list1[min_index_row]==0){
                for (int i = 0; i < mdl->columnCount()-1; i++){

                     if(mass[min_index_row][i]!=10001){
                    mass[min_index_row][i]=10000;

                    ui->tableView->model()->setData(ui->tableView->model()->index(min_index_row,i),10000,0);
                     }

                }

            }
        }
        QString msgEnd;
        for (int i = 0; i < ui->tableView->model()->rowCount()-1; i++){
        for (int j = 0; j < ui->tableView->model()->columnCount()-1; j++){
                int tmp=ui->tableView->model()->data(ui->tableView->model()->index(i,j)).toInt();
                if(tmp!=10000){
                   msgEnd+=(QString)QString::number(tmp)+" единиц товара из склада №"+QString::number(i+1)+" в магазин №"+QString::number(j+1)+". ";
                }
            }
        }
        ui->textBrowser->setText(msgEnd+"\nПримечание: числом 10000 заполнены ячейки, которые не подошли для нашего решения (то есть эти маршруты не задействованы).");
        list1.clear();
        list2.clear();
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
    }

}

void Dialog::on_pushButton_3_clicked()
{

    ui->pushButton->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_2->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->textBrowser->clear();
    bool ok;
    mdl=new QStandardItemModel(0,0,this);
    ui->tableView->setModel(mdl);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    list1.clear();
    list2.clear();
    ui->pushButton_3->setEnabled(false);
}

void Dialog::on_pushButton_4_clicked()
{
    dh->show();
}
