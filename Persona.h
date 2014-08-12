#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED

#include <cstring>
#include <ctype.h>
#include "Fecha.h"
#define Entero_A_Caracter(int) int+0x30


class Personas
{
private:
    char nombre[15];
    char apellido[15];
    Fecha fechaNac;
    char codigo[3];
public:
    Personas(char n[15]="",char ap[15]="",Fecha f=0)
    {
        strcpy(nombre,n);
        strcpy(apellido,ap);
        fechaNac = f;

        codigo[0] = nombre[0];
        codigo[1] = apellido[0];
        int nom = strlen(nombre);
        int contador=0;
        for(int i=0;i<nom;i++)
        {
            if(nombre[i]=='a' || nombre[i]== 'e' || nombre[i] == 'i' || nombre[i] == 'o' || nombre[i]=='u')
            {
                contador++;
            }
        }
        nom = strlen(apellido);
        for(int i=0;i<nom;i++)
        {
            if(apellido[i]=='a' || apellido[i]== 'e' || apellido[i] == 'i' || apellido[i] == 'o' || apellido[i]=='u')
            {
                contador++;
            }
        }
        codigo[2] = Entero_A_Caracter(contador);

    }
    void MostrarNombres()
    {
        cout << this->nombre <<"  "<< this->apellido;
    }


    void MotrarNombresMinusculas()
    {
        int i,j;
        int longNombre = strlen(nombre);
        int longApe = strlen(apellido);
        for(i = 0; i<longNombre;i++)
        {
            nombre[i] = tolower(nombre[i]);
        }

        for(j=0;j<longApe;j++)
        {
            apellido[j] = tolower(apellido[j]);
        }


        cout << this->nombre <<"\t"<< this->apellido;
    }

    void MostrarFechaNac()
    {
        this->fechaNac.MostrarFecha();
    }

    void ImprimirCalendarioNac()
    {
        fechaNac.calendario();
    }

    void getCodigo()
    {
        cout << "\ncodigo : " << this->codigo;
    }

    char *Codigo()
    {
        return codigo;
    }
};


#endif // PERSONAS_H_INCLUDED
