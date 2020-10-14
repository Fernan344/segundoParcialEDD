#include "arbol.h"
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
#include <direct.h>
#include <fstream>
#include <string>

using namespace std;

Arbol::Arbol() {
    this->origen = NULL;
}

void Arbol::setOrigen(Nodo* nodo) {
    this->origen = nodo;
}

Nodo* Arbol::getOrigen() {
    return this->origen;
}

void Arbol::add(string palabra) {
    bool insert = false;
    Nodo* nodo = new Nodo();
    nodo->setPalabra(palabra);
    nodo->setAscii(nodo->obtainsAscii());

    if (this->origen == NULL) {
        this->origen = nodo;
    }
    else {
        Nodo* ed = this->origen;
        while (insert == false) {
            if (nodo->getAscii() > ed->getAscii()) {
                if (ed->getMayor() == NULL) {
                    ed->setMayor(nodo);
                    nodo->setPadre(ed);
                    insert = true;
                }
                else {
                    ed = ed->getMayor();
                }
            }
            else if (nodo->getAscii() < ed->getAscii()) {
                if (ed->getMenor() == NULL) {
                    ed->setMenor(nodo);
                    nodo->setPadre(ed);
                    insert = true;
                }
                else {
                    ed = ed->getMenor();
                }
            }
            else {
                if (nodo->getPalabra() == ed->getPalabra()) {
                    nodo->setCoincidencias(nodo->getCoincidencias()+1);
                    insert = true;
                }
                else {
                    if (ed->getMayor() == NULL) {
                        ed->setMayor(nodo);
                        nodo->setPadre(ed);
                        insert = true;
                    }
                    else {
                        ed = ed->getMayor();
                    }
                }
            }
        }
    }
}

void Arbol::imprimir() {
    Nodo* ed = this->origen;

    if (ed != NULL) {
        while (ed->getMenor() != NULL) {
            ed = ed->getMenor();
        }
        do {
            cout << ed->getAscii() << "-" << ed->getPalabra() << "-" << ed->getCoincidencias() << endl;
            if (ed->getMayor() != NULL) {
                ed = ed->getMayor();

                while (ed->getMenor() != NULL) {
                    ed = ed->getMenor();
                }
            }
            else {
                while (ed->getPadre() != NULL && ed == ed->getPadre()->getMayor()) {
                    ed = ed->getPadre();
                }
                ed = ed->getPadre();
            }
        } while (ed != NULL);
    }
}
