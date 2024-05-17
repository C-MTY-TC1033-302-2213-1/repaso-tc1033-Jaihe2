#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Punto.h"

class Triangulo {
private:
    Punto vertice1;
    Punto vertice2;
    Punto vertice3;

public:
    Triangulo();
    Triangulo(const Punto& v1, const Punto& v2, const Punto& v3);

    Punto getVertice1() const;
    Punto getVertice2() const;
    Punto getVertice3() const;

    void setVertice1(const Punto& v1);
    void setVertice2(const Punto& v2);
    void setVertice3(const Punto& v3);

    double perimetro() const;
    double area() const;
    void mostrar() const;
};

#endif