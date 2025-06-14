#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
using namespace std;

string LeerArchivo(const string& ruta);
string Reemplazar(const string& texto, const string& patron, double valor);