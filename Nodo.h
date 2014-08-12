#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <stdlib.h>
#include "Trabajador.h"
#include "Fecha.h"


class Nodo{
private:
    Trabajador Valor;
    Nodo *Siguiente;
public:
    Nodo(Trabajador t = 0, Nodo* sig=NULL){
    this->Valor = t;
    this->Siguiente = sig;
    }
    friend class Lista;
};typedef Nodo *pNodo;

#endif // NODO_H_INCLUDED
