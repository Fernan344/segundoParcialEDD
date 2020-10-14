#pragma once
#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Arbol
{
public:
    Arbol();
    ~Arbol();


    int getAscii(string palabra);
    void add(string palabra);
    void imprimir();

    Nodo* getOrigen();
    void setOrigen(Nodo* origen);
private:
    Nodo* origen;
};

#endif // LISTADOBLE_H


