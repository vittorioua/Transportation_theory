#include "dialoghelp.h"
#include "ui_dialoghelp.h"

DialogHelp::DialogHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogHelp)
{
    ui->setupUi(this);
    QGraphicsScene * scen = new QGraphicsScene();
    QPixmap * pix = new QPixmap();
    pix->load("1.png");
    scen->addPixmap(*pix);

    ui->graphicsView->setScene(scen);
}

DialogHelp::~DialogHelp()
{
    delete ui;
}

void DialogHelp::on_pushButton_clicked()
{
    this->hide();
}
