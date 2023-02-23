#ifndef ADMINNEURONAS_H
#define ADMINNEURONAS_H

#include <list>
#include "Neurona.h"
#include <QString>

class AdminNeuronas
{

private:
    std::list<Neurona> neuronas;

public:
    void agregarInicio(const Neurona &neurona);
    void agregarFinal(const Neurona &neurona);
    QString mostrar() const;
};

#endif // ADMINNEURONAS_H
