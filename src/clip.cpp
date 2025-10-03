/*este archivo solo tiene las definiciones de los metodos de la clase Clip, 
aplica herencia de metodos y luego los define*/

#include "../include/clip.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Clip::Hello() {
    cout << "Hola! Soy Clip, tu asistente en C++.\n";
    cout << "Escribe 'help' para ver los comandos disponibles.\n";
}

void Clip::Help() {
    cout << "\n--- Comandos ---\n";
    cout << "Hello         -> Clip te saluda\n";
    cout << "GiveAdvice    -> Clip te da un consejo\n";
    cout << "ShowHour      -> Muestra la hora del sistema\n";
    cout << "Clear         -> Limpia la pantalla\n";
    cout << "Exit          -> Cierra Clip\n";
    cout << "Run           -> Ejecuta una direccion dada\n";
    cout << "ConvertFile   -> Convierte un archivo docx a pdf (PROXIMAMENTE)";
    cout << "-----------------\n";
}

void Clip::GiveAdvice() {
    cout << "Consejo: Haz commits pequenios y frecuentes.\n";
}

void Clip::ShowHour() {
    time_t ahora = time(nullptr);
    cout << "Hora actual: " << ctime(&ahora);
}

void Clip::Run() {
    string path;
    cout<< "Ingresa direccion que deseas ingresar: ";
    getline(cin, path);

    if(path.empty()){
        cout<<"No se ingreso ninguna direccion.\n";
        return;
    }

    string command= "start \"\" \"" + path+ "\"";
    system(command.c_str());
}

void Clip::ConvertFile() {
    cout<< "PROXIMAMENTE\n";
}
