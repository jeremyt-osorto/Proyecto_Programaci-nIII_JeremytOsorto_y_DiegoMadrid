#pragma once
#include <string>
using namespace std;

namespace Color {
    const string reset = "\033[0m";
    const string rojo = "\033[31m";
    const string verde = "\033[32m";
    const string amarillo = "\033[33m";
    const string azul = "\033[34m";
    const string magenta = "\033[35m";
    const string cyan = "\033[36m";
    const string blanco = "\033[37m";

    const string fondoRojo = "\033[41m";
    const string fondoVerde = "\033[42m";
    const string fondoAmarillo = "\033[43m";
    const string fondoAzul = "\033[44m";
	const string fondoMagenta = "\033[45m";

    // Hola ingeniero, saludos de Madrid y Jeremyt
	// Usamos codigos ANSI, 31-37 son colores de texto, 41-44 son colores de fondo
    // \033 es un caracter de escape que regresa al valor default
    // Por eso tenemos reset como \033[0m para resetear al color default
}