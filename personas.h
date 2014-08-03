#ifndef PERSONAS_H
#define __PERSONAS_H
#include "fecha.h"
#define __TAM 10
#include <cstdio>
#include <string.h>
#include <iostream>
#include "fecha.h"


class personas{
private:
	char Nombre [TAM];
	char Apellido [TAM];
    fecha *FechaNac;
	
public:
	personas (char N[], char A[], fecha *fn){
		strcpy(this->Nombre,N);
		strcpy(this->Apellido,A);
		this->FechaNac = fn;
		
	}
	Void MostrarNomAp(){
		cout<<this->Nombre<<" "<<this->Apellido;
		
	}
	Void MostrarFecha(){
		this->FechaNac->MostrarFecha();
	}
	friend class estudiantes;
};




#endif
