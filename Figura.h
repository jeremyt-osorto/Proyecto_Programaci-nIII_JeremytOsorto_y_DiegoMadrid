#pragma once
class Figura {
public:
    virtual double CalcularPerimetro() const = 0;
    virtual double CalcularArea() const = 0;
    virtual void Dibujar() const = 0;
    virtual ~Figura() {}
};

