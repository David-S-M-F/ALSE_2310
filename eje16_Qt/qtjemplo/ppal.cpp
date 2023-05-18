#include "ppal.h"
#include "./ui_ppal.h"
#include "dividiag.h"
#include <Eigen/Dense>


using namespace Eigen;

PPal::PPal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PPal)
{
    ui->setupUi(this);
}

PPal::~PPal()
{
    delete ui;
}

void PPal::on_btn_Operar_clicked()
{
    MatrixXd mA(2,2), mB(2,2), mC(2,2);
    mA(0,0) =  ui->txt_A11->text().toDouble();
    mA(0,1) =  ui->txt_A12->text().toDouble();
    mA(1,0) =  ui->txt_A21->text().toDouble();
    mA(1,1) =  ui->txt_A22->text().toDouble();
    
    mB(0,0) =  ui->txt_B11->text().toDouble();
    mB(0,1) =  ui->txt_B12->text().toDouble();
    mB(1,0) =  ui->txt_B21->text().toDouble();
    mB(1,1) =  ui->txt_B22->text().toDouble();
    
    switch( ui->cbo_Operacion->currentIndex()){
    case 0:
        mC = mA + mB;
        break;
    case 1:
        mC = mA - mB;
        break;
    case 2:
        mC = mA * mB;
        break;
    case 3:
        Dividiag  ventana;
        ventana.setModal( true );
        connect( &ventana, &Divi_diag::senalDivi, this, &Ppal::tipoDivi );
        ventana.show();
        ventana.exec();
        mC = mA * mB.inverse();
    }


    
    ui->txt_C11->setText(QString::number(mC(0,0)) );
    ui->txt_C12->setText(QString::number(mC(0,1)) );
    ui->txt_C21->setText(QString::number(mC(1,0)) );
    ui->txt_C22->setText(QString::number(mC(1,1)) );

}

