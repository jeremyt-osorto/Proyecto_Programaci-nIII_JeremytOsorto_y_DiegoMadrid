#include "Rectangulo.h"
#include "Archivo.h"
#include "Colores.h"
#include <iostream>
#include <iomanip>

Rectangulo::Rectangulo(double largo, double ancho) : largo(largo), ancho(ancho) {}

double Rectangulo::CalcularPerimetro() const {
    return 2 * (largo + ancho);
}

double Rectangulo::CalcularArea() const {
    return largo * ancho;
}

void Rectangulo::Dibujar() const {
    using namespace std;
    using namespace Color;
    string plantilla = LeerArchivo("Recursos/rectangulo.txt");
    plantilla = Reemplazar(plantilla, "{largo}", largo);
    plantilla = Reemplazar(plantilla, "{ancho}", ancho);
    plantilla = Reemplazar(plantilla, "{area}", CalcularArea());
    plantilla = Reemplazar(plantilla, "{perimetro}", CalcularPerimetro());
    cout << azul << plantilla << reset;
    cout << fixed << setprecision(2);
    cout << amarillo << "\nPerímetro: " << CalcularPerimetro() << "\n";
    cout << "Área: " << CalcularArea() << "\n" << reset;
}
