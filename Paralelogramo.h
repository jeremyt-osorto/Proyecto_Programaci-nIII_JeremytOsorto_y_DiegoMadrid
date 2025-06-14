#pragma once
#include "Figura.h"
#include <string>

class Paralelogramo : public Figura {
private:
    double a, b, h;
public:
    Paralelogramo(double a, double b, double h);
    double CalcularPerimetro() const override;
    double CalcularArea() const override;
    void Dibujar() const override;
};
