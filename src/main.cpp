#include "../include/clip.hpp"
#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

//permite que defina funciones en linux
#ifdef _WIN32
    #define CLEAR_CMD "cls"
#else
    #define CLEAR_CMD "clear"
#endif


int main() {
    Clip assistant;             //create an object and run a command 
    assistant.Hello();

    string comando;
/*we create a map with a string type key, and a function type of value. This funtion Run a command 
*/
    map<string, function<void()>> commands = {
        {"hello", [&]() {assistant.Hello(); }},
        {"help", [&]() {assistant.Help(); }},
        {"giveadvice", [&]() {assistant.GiveAdvice(); }},
        {"showhour", [&]() {assistant.ShowHour(); }},
        {"run", [&]() {assistant.Run(); }},
        {"convertfile", [&]() {assistant.ConvertFile(); }},
        
        //____________________COMANDOS FUERA DE LA CLASE CLIP_______________________________

        {"clear", [&]() {system(CLEAR_CMD); }},     //limpia la terminal
        {"exit", [&]() {cout << "See ya  :)... \n" ;      //comando para terminal el programa
            system("pause");            //manda el pause para que no se cierre automaticamente
            exit(0);}},             //ciera la terminal
    };

    while(true){
         cout<<"Clip> ";
         getline(cin, comando);

         //convierte el comando ingresado a minusculas
         transform(comando.begin(), comando.end(), comando.begin(), [](unsigned char c){
            return tolower(c); 
        }
    );


         auto it = commands.find(comando);      //busca el comando en el mapa
         if(it != commands.end()) {
            it->second();    //ejecuta la funcion
         }
         else{
            cout<<"No hay comando asociado :( \n";
         }
    }

    return 0;
}
