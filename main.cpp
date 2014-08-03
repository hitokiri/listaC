#include <iostream>
using namespace std;
#include "Lista.h"
int main(){
	Lista lst;
	lst.Agregar(new estudiantes);
	lst.Buscar(new estudiantes);
	lst.Modificar(new estudiantes);
	lst.Eliminar(new estudiantes);
	lst.Mostrar(new estudiantes);
	pnodo elemento = lst.Buscar(new estudiantes);
	if (elemento){
		cout << elemento->getValor();
	}
	else{
		cout << "No estaba en la lista\n";
	}
	
	return 0;
}
int op;
fecha fe;
estudiantes est;
Lista lst;
persona p;

do{
	system("cls");
	
	cout << "*************************************\n";
	cout << "*           MENU DE OPCIONES        *\n";
	cout << "*************************************\n";
	cout << "* 1. Agregar Estudiantes            *\n";
	cout << "* 2. Buscar                         *\n";
	cout << "* 3. Modificar Lista de Estudiantes *\n";
	cout << "* 4. Eliminar Estudiantes           *\n";
	cout << "* 5. Mostrar                        *\n";
	cout << "* 6. Salir                          *\n";
	cout << "*************************************\n";
	cout << "\nDigite su opcion: ";
	cin >> op;
	
	switch(op){
	case 1:
		cout << "\nAGREGAR ESTUDIANTE: \n\n" ;
		fe = pedir();
		traa = pedirdato();
		lst.Insertar(est);
		cod++;
		break;
		
	case 2:
		cout << "\nBUSCAR ESTUDIANTE \n\n";
		cout << "Digite el apellido del Estudiante: ";
		cin >> Apellido;
		system("cls");
		int op;
		
		if(op==1){
			lst.buscar1(Apellido);
			cout << "Apellido:\t\t";
			traa.mostrarnombresmayusculas();
			cout << endl;
			traa.getPromedio();
			void MostrarFecha();
			cout << "Fecha de Nacimiento: ";
			fe.MostrarFecha();
			
		}
		else{
			lst.buscar1(Nombre);
			cout << "Nombres:\t\t";
			traa.mostrarnombresminusculas();
			cout << endl;
			traa.getPromedio();
			void MostrarFecha();
			cout << "Fecha de Nacimiento: ";
			fe.MostrarFecha();
			cout << "\n" << "\n";
			fe.MostrarCalendario();
			cout << "\n";
		}
		break;
		
	case 3:
		cout << "\Modificar \n\n";
		lst.Mostrar();
		break;
		
	case 4:
		cout << "ELIMINAR" ;
		int e;
		cout << "A quien quiere eliminar: ";
		cin >> e;
		lst.EliminarEnmedio(e);	
		
	case 5:
		cout << "\nMOSTRAR LISTA" << endl;
		this->lst.Mostrar();
		break;	
	}
	
	system("pause");
	
}while(op!=6);

return 0;
}


fecha pedir(){
	fecha fe;
	int d, m, a;
	cout << "\nIngrese feha de nacimiento dd/mm/aa \n\n";
	cout << "Dia: ";
	cin >> d;
	cout << "Mes: ";
	cin >> m;
	cout << "Anyo: ";
	cin >> a;
	fe = fecha(d,m,a);
	
	return fe;
}

estudiantes pedirdato(){
	estudiantes est;
	char Nombre[TAM],Apellido[TAM];
	cout << "\nIngrese su nombre: ";
	cin >> Nombre;
	cout << "\nIngrese su apellido: ";
	cin >> Apellido;
	cout << "\nIngrese Nota1: ";
	cin >> Nota1;
	cout << "\nIngrese Nota2: ";
	cin >>Nota2;
	cout << "\nIngrese Nota3: ";
	cin >> Nota3;
	est = estudiantes(Nombre,Apellido,s);
	
	return est;
}
	
