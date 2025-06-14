#pragma once
#include "Figura.h"
#include "Archivo.h"
#include "Colores.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace Color;

class Triangulo : public Figura {
private:
    double base, altura, lado;
public:
    Triangulo(double base, double altura, double lado);
    double CalcularPerimetro() const override;
    double CalcularArea() const override;
    void Dibujar() const override;
};