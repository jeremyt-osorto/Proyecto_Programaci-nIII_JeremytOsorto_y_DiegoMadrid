#include "Archivo.h"
#include <fstream>
#include <sstream>
#include <regex>
#include <string>
using namespace std;

string LeerArchivo(const std::string& ruta) {
    std::ifstream archivo(ruta);
    if (!archivo.is_open()) {
        return "[Error: no se pudo abrir el archivo]";
    }

    stringstream buffer;
    buffer << archivo.rdbuf();
    return buffer.str();
}

string Reemplazar(const std::string& texto, const string& patron, double valor) {
    ostringstream ss;
    ss.precision(2);
    ss << fixed << valor;

    std::regex marcador("\\{\\s*" + patron + "\\s*\\}");
    return regex_replace(texto, marcador, ss.str());
}