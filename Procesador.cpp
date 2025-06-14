#include <iostream>
#include <string>
#include "Paralelogramo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Colores.h"
using namespace std;

int ProcesarArgumentos(int argc, char* argv[]) {
    if (argc < 2) {
        MostrarAyuda();
        return 0;
    }
    string figura = argv[1];
    if (figura == "paralelogramo") {
        if (argc != 5) {
            cout << "\nUso: paralelogramo <a> <b> <h>\n";
            return 1;
        }
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double h = atof(argv[4]);
        Paralelogramo p(a, b, h);
        p.Dibujar();
    }
    else if (figura == "triangulo") {
        if (argc != 5) {
            cout << "\nUso: triangulo <base> <altura> <lado>\n";
            return 1;
        }
        double base = atof(argv[2]);
        double altura = atof(argv[3]);
        double lado = atof(argv[4]);
        Triangulo t(base, altura, lado);
        t.Dibujar();
    }
    else if (figura == "rectangulo") {
        if (argc != 4) {
            cout << "\nUso: rectangulo <largo> <ancho>\n";
            return 1;
        }
        double largo = atof(argv[2]);
        double ancho = atof(argv[3]);
        Rectangulo r(largo, ancho);
        r.Dibujar();
    }
    else {
        cout << "\nFigura no reconocida.\n";
        MostrarAyuda();
    }
    return 0;
}

void MostrarAyuda() {
    using namespace Color;
    cout << verde << "\nPerímetros y áreas de figuras planas\n" << reset;
    cout << "\nUso: <figura> <parametros>\n";
    cout << "Ejemplos:\n";
    cout << "  paralelogramo 5 10 4\n";
    cout << "  triangulo 6 8 5\n";
    cout << "  rectangulo 7 3\n";
}
