#include "nodo.h"
#include <iostream>
#include <stdlib.h>
#include <direct.h>
#include <string>

using namespace std;

Nodo::Nodo() {
    this->ascii=0;
    this->palabra="";
    this->coincidencias=0;
    this->mayor = NULL;
    this->menor = NULL;
    this->padre = NULL;
}


void Nodo::setAscii(int ascii) {
    this->ascii = ascii;
}
void Nodo::setPalabra(string palabra) {
    this->palabra = palabra;
}
void Nodo::setCoincidencias(int coincidencias) {
    this->coincidencias = coincidencias;
}

void Nodo::setMayor(Nodo* mayor) {
    this->mayor = mayor;
}

void Nodo::setMenor(Nodo* menor) {
    this->menor = menor;
}

void Nodo::setPadre(Nodo* padre) {
    this->padre = padre;
}

string Nodo::getPalabra() {
    return this->palabra;
}

int Nodo::getAscii() {
    return this->ascii;
}

int Nodo::getCoincidencias() {
    return this->coincidencias;
}

Nodo* Nodo::getMayor() {
    return this->mayor;
}

Nodo* Nodo::getMenor() {
    return this->menor;
}

Nodo* Nodo::getPadre() {
    return this->padre;
}

int  Nodo::obtainsAscii() {
    int acumulado = 0;
    for (int i = 0; i < this->getPalabra().size(); i++)
    {
        int a = this->getPalabra()[i];
        acumulado = acumulado + a;
    }
    return acumulado;
}