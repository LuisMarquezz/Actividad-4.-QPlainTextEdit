#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "AdminNeuronas.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , adminNeuronas(new AdminNeuronas)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
        int id = ui->lineEdit->text().toInt();
        double voltaje = ui->lineEdit_2->text().toDouble();
        int posX = ui->lineEdit_3->text().toInt();
        int posY = ui->lineEdit_4->text().toInt();
        int red = ui->spinBox->text().toInt();
        int green = ui->spinBox_2->text().toInt();
        int blue = ui->spinBox_3->text().toInt();

        Neurona neurona(id, voltaje, posX, posY, red, green, blue);

        adminNeuronas->agregarInicio(neurona);



       // Limpiar las casillas después de agregar la neurona
       ui->lineEdit->clear();
       ui->lineEdit_2->clear();
       ui->lineEdit_3->clear();
       ui->lineEdit_4->clear();
       ui->spinBox->setValue(1);
       ui->spinBox_2->setValue(1);
       ui->spinBox_3->setValue(1);




}




void MainWindow::on_pushButton_3_clicked()
{
    ui->plainTextEdit->clear();
    QString neuronasStr = adminNeuronas->mostrar();
    ui->plainTextEdit->setPlainText(neuronasStr);

}


void MainWindow::on_pushButton_2_clicked()
{
    int id = ui->lineEdit->text().toInt();
    double voltaje = ui->lineEdit_2->text().toDouble();
    int posX = ui->lineEdit_3->text().toInt();
    int posY = ui->lineEdit_4->text().toInt();
    int red = ui->spinBox->text().toInt();
    int green = ui->spinBox_2->text().toInt();
    int blue = ui->spinBox_3->text().toInt();

    Neurona neurona(id, voltaje, posX, posY, red, green, blue);

    adminNeuronas->agregarFinal(neurona);



   // Limpiar las casillas después de agregar la neurona
   ui->lineEdit->clear();
   ui->lineEdit_2->clear();
   ui->lineEdit_3->clear();
   ui->lineEdit_4->clear();
   ui->spinBox->setValue(1);
   ui->spinBox_2->setValue(1);
   ui->spinBox_3->setValue(1);
}

