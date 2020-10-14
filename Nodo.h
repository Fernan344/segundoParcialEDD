#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Nodo
{
public:
    Nodo();
    ~Nodo();

    void setPalabra(string palabra);
    void setAscii(int ascii);
    void setCoincidencias(int coincidencias);
    void setMenor(Nodo* menor);
    void setMayor(Nodo* mayor);
    void setPadre(Nodo* padre);


    string getPalabra();
    int getAscii();
    int getCoincidencias();
    Nodo* getMayor();
    Nodo* getMenor();
    Nodo* getPadre();
    int obtainsAscii();

private:
    string palabra;
    int ascii;
    int coincidencias;
    Nodo* menor;
    Nodo* mayor;
    Nodo* padre;
};

#endif // LISTADOBLE_H
