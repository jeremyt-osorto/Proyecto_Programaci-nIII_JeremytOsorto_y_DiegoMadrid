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
    cout << "\nUso:" << amarillo << "Figuras_Planas.exe " << reset << "<figura>" << fondoMagenta << "<parametros>" << reset << endl;
	cout << "     Calculos de perimetro y area de figuras planas." << endl;
    cout << "     Donde:" << endl;
    cout << setw(13) << "           ACCION:\n";
    centering(string(amarillo) + "Ayuda" + string(blanco) + " | " + "Información sobre el uso del programa.\n\n");
    centering(string(amarillo) + "Triángulo" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b c h" + string(reset));
    centering(string(amarillo) + "Paralelogramo" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b h" + string(reset));
    centering(string(amarillo) + "Rectángulo" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b" + string(reset));
    centering(string(amarillo) + "Cuadrado" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a" + string(reset));
    centering(string(amarillo) + "Rombo" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b D" + string(reset));
    centering(string(amarillo) + "Cometa" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b d D" + string(reset));
    centering(string(amarillo) + "Trapecio" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "a b c h B" + string(reset));
    centering(string(amarillo) + "Círculo" + string(blanco) + " | " + "VARIABLES: " + string(fondoMagenta) + "r" + string(reset));
    cout << endl;
}
