
#include <iostream>
#include <string>
#include "Arbol.h"
#include <sstream>
using namespace std;


int main()
{
    Arbol* arbol = new Arbol();
    string entrada = "a a a a b b b b b ca ca ca ca de de de de de de de de de";
    //separar por palabras
    //hacer un ciclo de 0 hasta la cantidad de palabras
    //llamar el metodo add del objeto arbol en cada vuelta del ciclo
    //pasarle como parametro la palabra en la posicion de vuelta del ciclo
    //al terminar el ciclo se invoca el metodo imprimir del objeto arbol
    std::cout << "Hello World!\n";
}

