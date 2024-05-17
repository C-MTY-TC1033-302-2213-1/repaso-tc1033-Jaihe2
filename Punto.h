#ifndef PUNTO_H
#define PUNTO_H

class Punto {
private:
    double x;
    double y;

public:
    Punto();
    Punto(double x, double y);

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    double distancia(const Punto& otro) const;
};

#endif