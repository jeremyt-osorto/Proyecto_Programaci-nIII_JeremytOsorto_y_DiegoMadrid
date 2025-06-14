#pragma once
#include "Figura.h"

class Triangulo : public Figura {
private:
    double base, altura, lado;
public:
    Triangulo(double base, double altura, double lado);
    double CalcularPerimetro() const override;
    double CalcularArea() const override;
    void Dibujar() const override;
};