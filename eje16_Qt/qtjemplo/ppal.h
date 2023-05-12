#ifndef PPAL_H
#define PPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PPal; }
QT_END_NAMESPACE

class PPal : public QMainWindow
{
    Q_OBJECT

public:
    PPal(QWidget *parent = nullptr);
    ~PPal();

private slots:
    void on_btn_Hola_clicked();

    void on_pushButton_clicked();

private:
    Ui::PPal *ui;
};
#endif // PPAL_H
