#include "Archivo.h"
#include <fstream>
#include <sstream>
#include <regex>

string LeerArchivo(const string& ruta) {
    ifstream archivo(ruta);
    if (!archivo.is_open()) return "[Error: no se pudo abrir el archivo]";

    stringstream buffer;
    buffer << archivo.rdbuf();
    return buffer.str();
}

string Reemplazar(const string& texto, const string& patron, double valor) {
    ostringstream ss;
    ss.precision(2);
    ss << fixed << valor;

    regex marcador("\\{\\s*" + patron + "\\s*\\}");
    return regex_replace(texto, marcador, ss.str());
}