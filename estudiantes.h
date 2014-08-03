#ifndef ESTUDIANTES_H
#define __ESTUDIANTES_H
#include "personas.h"
#include "Lista.h"
#include "fecha.h"


class estudiantes: public personas{
private:
	float Nota1;
	float Nota2;
	float Nota3;
	float Promedio;
	
public:
	estudiantes (char N[], char A[], fecha *fn, float n1, float n2, float n3, float Promedio){
		this->Nota1=n1;
		this->Nota2=n2;
		this->Nota3=n3;
		this->Promedio=(Nota1+Nota2+Nota3)/3;	
		
		float getPromedio(){
			cout << "Promedio: \t" << this->Promedio<< endl;
			return 0;
			
			
			
		};
	}	
}
#endif
