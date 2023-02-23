#include <iostream>
#include "Neurona.h"
#include <QTextStream>

Neurona::Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue) :
        id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue) {}

void Neurona::print() const {
    std::cout << "Neurona: " << id << ", Voltaje: " << voltaje << ", Posicion X: " << posX << ", Posicion Y: "
              << posY << ", Color RGB: (" << red << "," << green << "," << blue << ")" << std::endl;
}

QString Neurona::getInfo() const {
    QString str;
    QTextStream stream(&str);
    stream << "ID: " << id << ", Voltaje: " << voltaje << ", Posición: (" << posX << ", " << posY << "), Color: (" << red << ", " << green << ", " << blue << ")";
    return str;
}
