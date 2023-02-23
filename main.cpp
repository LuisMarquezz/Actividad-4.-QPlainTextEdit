#include "mainwindow.h"
#include <iostream>
#include "AdminNeuronas.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    AdminNeuronas adminNeuronas;

        //Neurona neurona1(1, 2.0, 10, 20, 255, 0, 0);
        //Neurona neurona2(2, 1.0, 5, 15, 0, 255, 0);
        //Neurona neurona3(3, 3.5, 8, 12, 0, 0, 255);

        //adminNeuronas.agregarInicio(neurona1);
        //adminNeuronas.agregarFinal(neurona2);
        //adminNeuronas.agregarInicio(neurona3);

        //adminNeuronas.mostrar();


    return a.exec();
}
