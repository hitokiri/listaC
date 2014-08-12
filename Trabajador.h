#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "Persona.h"


class Trabajador:public Personas
{
private:
    float sueldo;
    float dIsss;
    float dAfp;
    float dIsr;
    float Total_pagar;

public:
    Trabajador(char n[]=" ",char a[]=" ",Fecha f=0,float su=0):Personas(n,a,f)
    {
        sueldo = su;

        dIsss=(sueldo*0.03);
        dAfp=(sueldo*0.0625);

        if(sueldo> 0 && sueldo<=487.60)// I tramo
        {
           dIsr=0;
        }
        else
        {
                if(sueldo >487.60 && sueldo<=642.85)// II tramo
                {

                    dIsr=(((sueldo-487.60)*0.1)+17.48);

                }
                else
                {
                    if(sueldo >642.85 && sueldo<=915.81)// III tramo
                    {
                        dIsr=(((sueldo-642.85)*0.1)+32.70);
                    }
                    else
                    {
                        if(sueldo >915.81 && sueldo<=2058.67)// IV tramo
                        {
                            dIsr=(((sueldo-915.81)*0.2)+60);
                        }
                        else
                        {
                            dIsr=(((sueldo-2058.67)*0.3)+288.57);// V tramo
                        }
                    }
                }
            }//fin de los if

        Total_pagar = sueldo-(dIsr+dIsss+dAfp);
    }

    void MostrarNombresApellidos()
    {
        Personas::MotrarNombresMinusculas();
    }

    float getsueldo(){return sueldo;}
    float getIsss(){
        return dIsss;
    }

    float getAfp(){
        return dAfp;
    }

    float getIsr()
    {
        return this->dIsr;
    }

    float getTotalPagar()
    {
        return this->Total_pagar;
    }
};


#endif // TRABAJADOR_H_INCLUDED
