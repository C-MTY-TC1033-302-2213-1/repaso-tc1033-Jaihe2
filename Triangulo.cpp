#include "Triangulo.h"
#include <iostream>
#include <cmath>

Triangulo::Triangulo() : vertice1(), vertice2(), vertice3() {}

Triangulo::Triangulo(const Punto& v1, const Punto& v2, const Punto& v3)
    : vertice1(v1), vertice2(v2), vertice3(v3) {}

Punto Triangulo::getVertice1() const {
    return vertice1;
}

Punto Triangulo::getVertice2() const {
    return vertice2;
}

Punto Triangulo::getVertice3() const {
    return vertice3;
}

void Triangulo::setVertice1(const Punto& v1) {
    vertice1 = v1;
}

void Triangulo::setVertice2(const Punto& v2) {
    vertice2 = v2;
}

void Triangulo::setVertice3(const Punto& v3) {
    vertice3 = v3;
}

double Triangulo::perimetro() const {
    double lado1 = vertice1.distancia(vertice2);
    double lado2 = vertice2.distancia(vertice3);
    double lado3 = vertice3.distancia(vertice1);
    return lado1 + lado2 + lado3;
}

double Triangulo::area() const {
    double lado1 = vertice1.distancia(vertice2);
    double lado2 = vertice2.distancia(vertice3);
    double lado3 = vertice3.distancia(vertice1);
    double s = perimetro() / 2;
    return std::sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

void Triangulo::mostrar() const {
    std::cout << "Vertice 1: (" << vertice1.getX() << ", " << vertice1.getY() << ")\n"
              << "Vertice 2: (" << vertice2.getX() << ", " << vertice2.getY() << ")\n"
              << "Vertice 3: (" << vertice3.getX() << ", " << vertice3.getY() << ")\n";
}