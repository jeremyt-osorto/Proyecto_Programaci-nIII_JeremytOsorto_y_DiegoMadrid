#include <windows.h>
#include <iostream>
#include "Procesador.h"
using namespace std;

int main(int argc, char* argv[]) {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
	Procesador procesador;
    return procesador.ProcesarArgumentos(argc, argv);
}