#include "Triangulo.h"

Triangulo::Triangulo(double base, double altura, double lado) 
    : base(base), altura(altura), lado(lado) {}

double Triangulo::CalcularPerimetro() const {
    return base + 2 * lado;
}

double Triangulo::CalcularArea() const {
    return (base * altura) / 2;
}

void Triangulo::Dibujar() const {
    string plantilla = LeerArchivo("Recursos/triangulo.txt");
    plantilla = Reemplazar(plantilla, "{base}", base);
    plantilla = Reemplazar(plantilla, "{altura}", altura);
    plantilla = Reemplazar(plantilla, "{lado}", lado);
    plantilla = Reemplazar(plantilla, "{area}", CalcularArea());
    plantilla = Reemplazar(plantilla, "{perimetro}", CalcularPerimetro());
    cout << azul << plantilla << reset;
    cout << fixed << setprecision(2);
    cout << amarillo << "\nPerímetro: " << CalcularPerimetro() << "\n";
    cout << "Área: " << CalcularArea() << "\n" << reset;
}