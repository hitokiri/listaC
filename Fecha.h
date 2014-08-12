#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <cstring>


class Fecha
{
private:
    int dia;
    int mes;
    int anyo;
    int mos;
public:
    Fecha(int d=0,int m=0,int a=0)
    {
        dia = d;
        mes = m;
        anyo = a;
    }
   bool EsValida()
    {
        bool bisiesto = true;
        if(anyo%4==0 && anyo%100!=100 || anyo%400==0)
        {
            bisiesto = true;
        }

        if(dia>0 && dia<32 && mes>0 && mes<13 && anyo>0){
            if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
            {
               bisiesto = false;
            }
            else
            {
                if(mes==2 && dia<30 && bisiesto)
                    bisiesto = true;
                else if(mes==2 && dia<29 && !bisiesto)
                    bisiesto = true;
                else if(mes!=2 && dia<31)
                    bisiesto = true;
                else
                    bisiesto = false;
            }
        }
        else
        {
            bisiesto = false;
        }
        return bisiesto;

    }

void mostrar_calendario(int dias=0, int n=0)
    {
           int i, fila=5, columna, k;
           int dias_ceros = diaFecha(1,mes,anyo);


           cout << "\tDom \tLun \tMar \tMier \tJue \tVier \tSab\n";
           for(int x=0;x<dias_ceros;x++)
           {
               cout << "\t";
           }
           for(i=1; i <= n; i++, dias++)
          {
                k=dias % 7; /* Divide dias entre 7, el residuo da el dia actual */
                if(i==this->dia)
                {
                    cout << "\t["<< i<<"] "; /* Muestra el dia */
                    mos = dias % 7;
                }
                else
                {
                    cout << "\t "<< i << " "; /* Muestra el dia */
                }

                 if(k==6) /* Si el dia es Sabado salta una linea */
                    cout << "\n";
           }
    }

int agnoBisiesto(int agno=0)
    {
            return !(agno%4) && (agno%100 || !(agno%400));
    }

    int diaFecha(int dia=0, int mes=0, int agno=0)
    {       //Algoritmo de Doomsday
            int modA[2][12]= {{0,3,3,6,1,4,6,2,5,0,3,5},{0,3,4,0,2,5,0,3,6,1,4,6}};
            agno--;
            return ( (agno%7) + ((agno/4)-(3*(agno/100+1))/4) +  modA[agnoBisiesto(agno+1)][mes-1]  + dia%7  )%7;
    }

    void calendario()
    {
        int anio=anyo;
        /* Numero de dias desde 1/1/1900 al anio y mes actual */
        int dias=0;

         int i;

         for(i=1900;i<anio;i++)
         {
              if(i%4==0) /* Si es bisiesto agrega 366 dias */
                 dias+=366;
               else /* caso contrario 365 dias */
                 dias+=365;
         }

         for(i=1;i<mes;i++)
         {
               /* Para Enero,Marzo,...,Diciembre cuenta 31 dias */
               if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                  dias+=31;
               /* Para Abril,Junio,Septiembre,Noviembre cuenta 30 dias */
               else if(i==4||i==6||i==9||i==11)
                  dias+=30;
               /* Si es Febrero y bisiesto cuenta 29 dias */
               else if(i==2 && anio%4==0)
                  dias+=29;
               /* Si es Febrero y no es bisiesto cuenta 28 dias */
               else
                  dias+=28;
          }

          if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
             mostrar_calendario(dias, 31); /* Calendario con 31 dias */
          else if(i==4||i==6||i==9||i==11)
             mostrar_calendario(dias, 30); /* Calendario con 30 dias */
          else if(i==2 && anio%4==0)
             mostrar_calendario(dias, 29); /* Calendario con 29 dias */
          else
             mostrar_calendario(dias, 28 ) ; /* Calendario con 28 dias */
}

void MostrarFecha()
    {
        cout << dia << "/" << mes << "/" << anyo;
    }
};



#endif // FECHA_H_INCLUDED
