#ifndef NEURONA_H
#define NEURONA_H

#include <QString>
#include <QTextStream>

class Neurona
{
private:
    int id;
    double voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue);
    void print() const;
    QString getInfo() const;
};

#endif // NEURONA_H
