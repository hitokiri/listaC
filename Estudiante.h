#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <cstring>
#include "Persona.h"


class Estudiante:public Personas
{
private:
	char Nombre[10];
	char Apellido[10];
	float Nota1;
	float Nota2;
	float Nota3;
	float Promedio;

public:
	Estudiante(char n[]="", char a[]="",Fecha f=0, float n1=0, float n2=0, float n3=0):Personas(n,a,f)
	{
		strcpy(this->Nombre,n);
		strcpy(this->Apellido,a);
		this->Nota1 = n1;
		this->Nota2 = n2;
		this->Nota3 = n3;
	}

    void MostrarNombresApellidos()
    {
        Personas::MotrarNombresMinusculas();
    }

	double getPromedio()
	{		
		this->Promedio=(this->Nota1+this->Nota2+this->Nota3)/3.0;
		return this->Promedio ;
	}
	float getn1(){
		return this->Nota1;
	}
	float getn2(){
		return this->Nota2;
	}
	float getn3(){
		return this->Nota3;
	}
	
};


#endif // TRABAJADOR_H_INCLUDED
