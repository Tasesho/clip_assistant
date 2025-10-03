#include "../include/clip.hpp"
#include <iostream>
#include <string>

using namespace std;

#ifdef _WIN32
    #define CLEAR_CMD "cls"
#else
    #define CLEAR_CMD "clear"
#endif

int main() {
    Clip asistente;
    asistente.saludar();

    string comando;
    while (true) {
        cout << "\nclip> ";
        getline(cin, comando);

        if (comando == "ayuda") {
            asistente.mostrarAyuda();
        } else if (comando == "saludo") {
            asistente.saludar();
        } else if (comando == "consejo") {
            asistente.darConsejo();
        } else if (comando == "hora") {
            asistente.mostrarHora();
        } else if (comando == "limpiar") {
            system(CLEAR_CMD);
        } else if (comando == "salir") {
            cout << "Hasta pronto!\n";
            break;
        } else if (!comando.empty()) {
            cout << "Comando no reconocido. Escribe 'ayuda'.\n";
        }
    }

    return 0;
}
