#include "ppal.h"
#include "./ui_ppal.h"
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


void PPal::on_btn_Hola_clicked()
{
   MatrixXd mA(2,2), mB(2,2), mC(2,2);
   mA(0,0) =  ui->txt_A11->text().toDouble();
}


void PPal::on_pushButton_clicked()
{

}

