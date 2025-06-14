#include "Rectangulo.h"

Rectangulo::Rectangulo(double largo, double ancho) : largo(largo), ancho(ancho) {}

double Rectangulo::CalcularPerimetro() const {
    return 2 * (largo + ancho);
}

double Rectangulo::CalcularArea() const {
    return largo * ancho;
}

void Rectangulo::Dibujar() const {
    string plantilla = LeerArchivo("Recursos/rectangulo.txt");
    plantilla = Reemplazar(plantilla, "{largo}", largo);
    plantilla = Reemplazar(plantilla, "{ancho}", ancho);
    plantilla = Reemplazar(plantilla, "{area}", CalcularArea());
    plantilla = Reemplazar(plantilla, "{perimetro}", CalcularPerimetro());
    cout << azul << plantilla << reset;
    cout << fixed << setprecision(2);
    cout << amarillo << "\nPer�metro: " << CalcularPerimetro() << "\n";
    cout << "�rea: " << CalcularArea() << "\n" << reset;
}
