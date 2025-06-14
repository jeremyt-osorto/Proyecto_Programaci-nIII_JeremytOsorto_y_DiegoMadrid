#pragma once
#include "Figura.h"
#include "Archivo.h"
#include "Colores.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace Color;

class Rectangulo : public Figura {
private:
    double largo, ancho;
public:
    Rectangulo(double largo, double ancho);
    double CalcularPerimetro() const override;
    double CalcularArea() const override;
    void Dibujar() const override;
};