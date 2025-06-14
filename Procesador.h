#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <windows.h>
#include "Paralelogramo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Colores.h"
using namespace std;

class Procesador {
	void centering(const string& text);
public:
	int ProcesarArgumentos(int argc, char* argv[]);
	void MostrarAyuda();
};

