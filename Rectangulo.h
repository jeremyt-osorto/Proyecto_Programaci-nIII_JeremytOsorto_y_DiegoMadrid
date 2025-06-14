#pragma once
#include "Figura.h"

class Rectangulo : public Figura {
private:
    double largo, ancho;
public:
    Rectangulo(double largo, double ancho);
    double CalcularPerimetro() const override;
    double CalcularArea() const override;
    void Dibujar() const override;
};