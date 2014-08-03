#ifndef NODO_H
#define __NODO_H
#include <stdlib.h>
#include "estudiantes.h"


class Nodo{
private:
	estudiantes Valor;
	Nodo *Siguiente;
public:
	Nodo(estudiantes est=0, Nodo* sig=NULL){
		this->Valor=est;
		this->Siguiente = sig;
	}
	friend class Lista;
	//int getValor(){
		//return this->Valor;

};typedef Nodo *pnodo;

#endif


