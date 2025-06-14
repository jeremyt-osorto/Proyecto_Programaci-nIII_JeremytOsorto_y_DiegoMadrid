#include "Paralelogramo.h"

Paralelogramo::Paralelogramo(double a, double b, double h) : a(a), b(b), h(h) {}

double Paralelogramo::CalcularPerimetro() const {
    return 2 * (a + b);
}

double Paralelogramo::CalcularArea() const {
    return b * h;
}

void Paralelogramo::Dibujar() const {
    string plantilla = LeerArchivo("../../Recursos/paralelogramo.txt");
    plantilla = Reemplazar(plantilla, "{a}", a);
    plantilla = Reemplazar(plantilla, "{b}", b);
    plantilla = Reemplazar(plantilla, "{h}", h);
    plantilla = Reemplazar(plantilla, "{a+b}", a + b);
    plantilla = Reemplazar(plantilla, "{b*h}", b * h);
    cout << azul << plantilla << reset;
    cout << fixed << setprecision(2);
    cout << amarillo << "\nPerímetro: " << CalcularPerimetro() << "\n";
    cout << "Área: " << CalcularArea() << "\n" << reset;
}