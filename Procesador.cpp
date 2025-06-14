#include "Procesador.h"

void Procesador::centering(const string& text) {
    HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(consola, &info);

    int wide = info.srWindow.Right - info.srWindow.Left + 1;
    int space = (wide - text.length()) / 2;

    cout << string(space, ' ') << text << endl;
}

int Procesador::ProcesarArgumentos(int argc, char* argv[]){
    if (argc < 2) {
        MostrarAyuda();
        return 0;
    }
    string figura = argv[1];
    if (figura == "paralelogramo") {
        if (argc != 5) {
            cout << "\nUso: paralelogramo <a> <b> <h>\n";
            return 1;
        }
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double h = atof(argv[4]);
        Paralelogramo p(a, b, h);
        p.Dibujar();
    }
    else if (figura == "triangulo") {
        if (argc != 5) {
            cout << "\nUso: triangulo <base> <altura> <lado>\n";
            return 1;
        }
        double base = atof(argv[2]);
        double altura = atof(argv[3]);
        double lado = atof(argv[4]);
        Triangulo t(base, altura, lado);
        t.Dibujar();
    }
    else if (figura == "rectangulo") {
        if (argc != 4) {
            cout << "\nUso: rectangulo <largo> <ancho>\n";
            return 1;
        }
        double largo = atof(argv[2]);
        double ancho = atof(argv[3]);
        Rectangulo r(largo, ancho);
        r.Dibujar();
    }
    else {
        cout << "\nFigura no reconocida.\n";
        MostrarAyuda();
    }
    return 0;
}

void Procesador::MostrarAyuda() {

    cout << left << reset + "Uso:" + amarillo + "Figuras_Planas.exe" + reset + "ACCION " + fondoMagenta + "[VARIABLES]" + reset << endl;
    cout << setw(10) << "Calculos de perímetro y área de Figuras Planas." << endl;
    cout << setw(10) << "Donde:" << endl;
    cout << setw(20) << "ACCION" << endl;
    vector<string> tabla = {
        string(amarillo) + "ayuda" + string(reset) + "    | Información sobre el uso del programa." + "\n",
        string(amarillo) + "triángulo" + string(reset) + "        | VARIABLES: " + string(fondoMagenta) + "a b c h" + string(reset) + "                    ",
        string(amarillo) + "paralelogramo" + string(reset) + "    | VARIABLES: " + string(fondoMagenta) + "a b h" + string(reset) + "                      ",
        string(amarillo) + "rectángulo" + string(reset) + "       | VARIABLES: " + string(fondoMagenta) + "a b" + string(reset) + "                        ",
        string(amarillo) + "cuadrado" + string(reset) + "         | VARIABLES: " + string(fondoMagenta) + "a" + string(reset) + "                          ",
        string(amarillo) + "rombo" + string(reset) + "            | VARIABLES: " + string(fondoMagenta) + "a d D" + string(reset) + "                      ",
        string(amarillo) + "cometa" + string(reset) + "           | VARIABLES: " + string(fondoMagenta) + "a b d D" + string(reset) + "                    ",
        string(amarillo) + "trapecio" + string(reset) + "         | VARIABLES: " + string(fondoMagenta) + "a b c h B" + string(reset) + "                  ",
        string(amarillo) + "círculo" + string(reset) + "          | VARIABLES: " + string(fondoMagenta) + "r" + string(reset) + "                          "
    };
    
    for(string& linea : tabla) {
        centering(linea);
    }
}