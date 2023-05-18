#include "dividiag.h"
#include "ui_dividiag.h"

Dividiag::Dividiag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dividiag)
{
    ui->setupUi(this);
}

Dividiag::~Dividiag()
{
    delete ui;
}

void Dividiag::on_rdb_AE_clicked(bool checked)
{
    ui->txt_Escalar->setEnabled( checked );
}


void Dividiag::on_rdb_BE_clicked(bool checked)
{
    ui->txt_Escalar->setEnabled( checked );
}


void Dividiag::on_rdb_AB_clicked(bool checked)
{
    ui->txt_Escalar->setEnabled( false );
}


void Dividiag::on_rdb_BA_clicked(bool checked)
{
    ui->txt_Escalar->setEnabled( false );
}

