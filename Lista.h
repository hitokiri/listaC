#ifndef LISTA_H
#define __LISTA_H
#include "Nodo.h"
#include "estudiantes.h"


class Lista{
private:
	pnodo primero;
	pnodo actual;
	bool ListaVacia(){
		return (this->primero==NULL);
	}
public:
		Lista(){
			this->primero = NULL;
			this->actual = NULL;
		}
	~Lista(){
		while (this->primero){
			pnodo tmp = this->primero;
			this->primero = tmp->Siguiente;
			delete tmp;
		}
	}
	void Agregar(estudiantes v){
		pnodo nuevo = new Nodo(v);
		if (this->ListaVacia())
			this->primero = nuevo;
		else
			this->actual->Siguiente =nuevo;
		this->actual = nuevo;
	}
	void Mostrar(){
		if (!this->ListaVacia()){
			pnodo tmp = this->primero;
			while (tmp){
				cout << tmp->Valor;
				tmp = tmp->Siguiente;
			}
			cout << "NULL\n";
		}
		
	}
	pnodo Buscar(estudiantes v){
		pnodo tmp;
		bool encontrado = false;
		if (ListaVacia())
			tmp = NULL;
		else{
			tmp = this->primero;
			while (tmp && !encontrado){
				if (tmp->Valor == v){
					encontrado = true;
				}
				else{
					tmp = tmp->Siguiente;
				}
			}
		}
		return tmp;
		
	}
	bool Eliminar(estudiantes v){}
	pnodo aux;
	aux = primero;
	primero = aux->Siguiente;
	delete aux;
	
	bool Modificar(estudiantes v, estudiantes n){}
	
	
	void Ordenar(){}
};
#endif
