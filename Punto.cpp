#include "Punto.h"
#include <cmath>

Punto::Punto() : x(0), y(0) {}

Punto::Punto(double x, double y) : x(x), y(y) {}

double Punto::getX() const {
    return x;
}

double Punto::getY() const {
    return y;
}

void Punto::setX(double x) {
    this->x = x;
}

void Punto::setY(double y) {
    this->y = y;
}

double Punto::distancia(const Punto& otro) const {
    return std::sqrt((x - otro.x) * (x - otro.x) + (y - otro.y) * (y - otro.y));
}