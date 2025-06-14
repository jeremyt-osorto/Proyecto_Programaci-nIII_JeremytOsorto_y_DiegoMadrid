#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <regex>
using namespace std;

string LeerArchivo(const std::string& ruta);
string Reemplazar(const std::string& texto, const std::string& patron, double valor);
