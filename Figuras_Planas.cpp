#include <windows.h>
#include "Procesador.h"

int main(int argc, char* argv[]) {
    SetConsoleCP(CP_UTF8); 
    SetConsoleOutputCP(CP_UTF8);
    return ProcesarArgumentos(argc, argv);
}