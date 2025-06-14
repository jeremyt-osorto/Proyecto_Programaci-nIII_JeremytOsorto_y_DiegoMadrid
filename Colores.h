#pragma once
#include <string>
using namespace std;

namespace Color {
    string reset = "\033[0m";
    string rojo = "\033[31m";
    string verde = "\033[32m";
    string amarillo = "\033[33m";
    string azul = "\033[34m";
    string magenta = "\033[35m";
    string cyan = "\033[36m";
    string blanco = "\033[37m";

    string fondoRojo = "\033[41m";
    string fondoVerde = "\033[42m";
    string fondoAmarillo = "\033[43m";
    string fondoAzul = "\033[44m";
    string fondoMagenta = "\033[45m";

    // Hola ingeniero, saludos de Madrid y Jeremyt
	// Usamos codigos ANSI, 31-37 son colores de texto, 41-44 son colores de fondo
    // \033 es un caracter de escape que regresa al valor default
    // Por eso tenemos reset como \033[0m para resetear al color default
}