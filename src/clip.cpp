#include "../include/clip.hpp"
#include <iostream>
#include <ctime>

using namespace std;

void Clip::saludar() {
    cout << "Hola! Soy Clip, tu asistente en C++.\n";
    cout << "Escribe 'ayuda' para ver los comandos disponibles.\n";
}

void Clip::mostrarAyuda() {
    cout << "\n--- Comandos ---\n";
    cout << "saludo   -> Clip te saluda\n";
    cout << "consejo  -> Clip te da un consejo\n";
    cout << "hora     -> Muestra la hora del sistema\n";
    cout << "limpiar  -> Limpia la pantalla\n";
    cout << "salir    -> Cierra Clip\n";
    cout << "-----------------\n";
}

void Clip::darConsejo() {
    cout << "Consejo: Haz commits pequeños y frecuentes.\n";
}

void Clip::mostrarHora() {
    time_t ahora = time(nullptr);
    cout << "Hora actual: " << ctime(&ahora);
}
