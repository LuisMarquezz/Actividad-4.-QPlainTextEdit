#include <iostream>
#include "AdminNeuronas.h"
#include <QString>

void AdminNeuronas::agregarInicio(const Neurona &neurona) {
    neuronas.push_front(neurona);
}

void AdminNeuronas::agregarFinal(const Neurona &neurona) {
    neuronas.push_back(neurona);
}

QString AdminNeuronas::mostrar() const {
    QString neuronasStr;
    for (const auto &neurona : neuronas) {
        neuronasStr += neurona.getInfo() + "\n";
    }
    return neuronasStr;
}
