#include <windows.h>
#include <iostream>
#include "Procesador.h"
using namespace std;

int main(int argc, char* argv[]) {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
	Procesador procesador;
    return procesador.ProcesarArgumentos(argc, argv);
}