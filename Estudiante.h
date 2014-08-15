#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <cstring>
using namespace std;

class Estudiante
{
private:
    char Nombre[10];
    char Apellido[10];
    float Nota1;
    float Nota2;
    float Nota3;
    float Promedio;
public:
    Estudiante(char N[]="", char A[]="", float n1=0, float n2=0, float n3=0)
    {
        strcpy(this->Nombre,N);
        strcpy(this->Apellido,A);
        this->Nota1 = n1;
        this->Nota2 = n2;
        this->Nota3 = n2;
    }

void getnombre()
{
    cout << "\n" << this->Nombre << "\n";
}

void getapellido()
{
    cout << this->Apellido << "\n";
}

double getPromedio()
    {

        this->Promedio=(this->Nota1+this->Nota2+this->Nota3)/3.0;
        return this->Promedio ;
    }

};


#endif // ESTUDIANTE_H_INCLUDED
