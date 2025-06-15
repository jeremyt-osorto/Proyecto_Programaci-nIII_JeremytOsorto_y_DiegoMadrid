#include <windows.h>
#include <iostream>
#include "Procesador.h"
#include <filesystem>
using namespace std;



int main(int argc, char* argv[]) {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
	Procesador procesador;

    char buffer[MAX_PATH];
    GetCurrentDirectoryA(MAX_PATH, buffer);
    std::cout << "Directorio actual: " << buffer << "\n";

    std::string ruta_prueba = "Recursos/paralelogramo.txt";
    std::ifstream test(ruta_prueba);
    std::cout << "Archivo existe: " << (test.good() ? "Sí" : "No") << "\n";
    return procesador.ProcesarArgumentos(argc, argv);
}