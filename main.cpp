#include <iostream>
#include "Punto.h"
#include "Triangulo.h"

int main() {
    // Triángulo con valores por defecto
    Triangulo t1;

    // Triángulo con valores ingresados por el usuario
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Ingrese las coordenadas del primer vertice (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Ingrese las coordenadas del segundo vertice (x y): ";
    std::cin >> x2 >> y2;
    std::cout << "Ingrese las coordenadas del tercer vertice (x y): ";
    std::cin >> x3 >> y3;

    Punto v1(x1, y1), v2(x2, y2), v3(x3, y3);
    Triangulo t2(v1, v2, v3);

    // Mostrar datos y cálculos de los triángulos
    std::cout << "Triángulo 1:\n";
    t1.mostrar();
    std::cout << "Perímetro: " << t1.perimetro() << "\n";
    std::cout << "Área: " << t1.area() << "\n";

    std::cout << "Triángulo 2:\n";
    t2.mostrar();
    std::cout << "Perímetro: " << t2.perimetro() << "\n";
    std::cout << "Área: " << t2.area() << "\n";

    return 0;
}