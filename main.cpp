#include <iostream>
#include <cstdlib>

using namespace std;
#include "Fecha.h"
#include "Persona.h"
#include "Estudiante.h"
#include "Lista.h"


Estudiante pedirdatos();
int main()
{

    /*Fecha f(2,6,1996);
    Trabajador tr("jonathan","hernandez",f,100.6);
    char *cod = tr.Codigo();
    cout << "El codigo es "<< cod;
    //f.calendario();
    //f.MostrarFecha();

    */system("pause");
    Estudiante tr;
    char *codigo;
    int opc=0;
    Lista lis;
    do{
            system("cls");
        cout<<"\n***************************************"<<endl;
        cout<<"\n\t* Menu de Opciones. *"<<endl;
        cout<<"\n***************************************"<<endl;
        cout<<"\n\t1. Agregar Estudiante"<<endl;
        cout<<"\t2. Buscar Estudiante"<<endl;
        cout<<"\t3. Mostrar Lista de Estudiante"<<endl;
        cout<<"\t4. Salir "<<endl;
        cout<<"\n***************************************"<<endl;
        cout<<"\tDigite una Opcion: ";
        cin>>opc;

        switch (opc)
        {
            case 1:
                tr = pedirdatos();
                lis.Insertar(tr);
                 break;
            case 2:
                cout << "Digita el codigo ";
                cin >> codigo;
                lis.mostrarBusqueda(codigo);

                 break;
            case 3:
                lis.Mostrar();
                 break;

            case 4:

                   break;

            default:
                    cout<<"ERROR"<<endl;
                    break;

       }
       system("pause");
    }while(opc!=4);
    return 0;
}



Estudiante pedirdatos(){
        char nombre[15], apellido[15];
        float sueldo;
        int dia,mes,anyo;
		float n1,n2,n3;
         cout<<"Digite el nombre: ";
         cin>>nombre;
         cout<<"\n";
         cout<<"Digite el apellido: ";
         cin>>apellido;

         cout<<"\nSu Fecha de Nacimiento: \n";

         cout << "Digite el dia de Nacimento : ";
         cin>>dia;
         cout << "Digite el mes de Nacimento : ";
         cin>>mes;
         cout << "Digite el an?o de Nacimento : ";
         cin>>anyo;
		 cout << "Digite la primera nota : ";
		 cin>>n1;
		 cout << "Digite la segunda nota : ";
		 cin>>n2;
		 cout << "Digite la tercera nota : ";
		 cin>>n3;
         cout<<"\n";
         Fecha fec(dia,mes,anyo);
         Estudiante tr = Estudiante(nombre, apellido, fec, n1, n2, n3);
         return tr;
}
