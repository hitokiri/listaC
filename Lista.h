#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Nodo.h"
#include "Persona.h"


class Lista{
private:
    pNodo primero;
    pNodo actual;
    bool ListaVacia(){
    return (this->primero==NULL);
}
    void Primero(){
    this->actual = this->primero;
}
    void Siguiente(){
        if(actual->Siguiente){
    this->actual = actual->Siguiente;
    }
}
    void Ultimo(){
    Primero();
        if(!ListaVacia()){
        while(this->actual->Siguiente){ //mientras actual->Suguiente sea diferente de NULL
    Siguiente(); //entonces pasamos al siguiente, si actual es == NULL entonces llegamos al final
    }
  }
}

public:
    Lista(){
    this->primero=NULL;
    this->actual=NULL;
    }
    ~Lista(){
        pNodo aux;
        while(this->primero){
            aux = this->primero;
            this->primero = this->primero->Siguiente;
            delete aux;
        }
        this->actual = NULL;
    }


void Insertar(Estudiante t=0)
{
    if(ListaVacia())
    {
            this->primero = new Nodo(t);
    }else{
        Ultimo();
        actual->Siguiente= new Nodo(t);
    }
}



pNodo buscarEstudianteCodigo(char *puntero)
{
    pNodo aux=primero;
    while(aux!=NULL)
    {
        if(comparar(aux->Valor.Codigo(),puntero)==true)
        {
            return aux;
        }
        aux = aux->Siguiente;
    }

}

void mostrarBusqueda(char *punt)
{
    pNodo aux = buscarEstudianteCodigo(punt);
    aux->Valor.MostrarNombres();
}

pNodo buscarEstudiante(Estudiante t=0)
{
    pNodo aux=primero;
    while(aux!=NULL)
    {
        if(comparar(aux->Valor.Codigo(),t.Codigo())==true)
        {
            return aux;
        }
        aux = aux->Siguiente;
    }

}
bool comparar(char *ptr_cad1,char *ptr_cad2)
{
    bool es=false;
    int cont=0,i=0;
    do
    {
      i++;
    }while(*ptr_cad1++);

    do
    {
      cont++;
    }while(*ptr_cad2++);

     if(i==cont)
     {
         es = true;
      }
     else
     {
         es = false;
     }
     return es;
}

/*
void insertar(Trabajador t=0,int cod=0){
    pNodo nuevo;
    if(buscar(cod)!=NULL)
    {
        this->actual = buscar(cod);
        nuevo = new Nodo(t,actual->Siguiente);
        actual->Siguiente = nuevo;
    }
}

*/


void InsertarDespues(Estudiante t=0,pNodo posi=NULL){
    pNodo nuevo;
    Primero();
    nuevo = new Nodo(t,actual);
    primero = nuevo;
}

void insertarFinal(Estudiante t=0){
    pNodo nuevo;
    Ultimo();
    nuevo = new Nodo(t);
    this->actual->Siguiente = nuevo;
}

void EliminarInicio(){
    pNodo aux;
    aux = primero;
    primero = aux->Siguiente;
    delete aux;
}
void EliminarFinal(){
    pNodo aux;
    actual= buscarAntes();
    aux = actual->Siguiente;
    actual->Siguiente = NULL;
    delete aux;
}

void Eliminar(Estudiante tr){
    pNodo temp,aux; // creo los nodos de desplazamiento
    this->actual = this->primero; //mando mi direccion del nodo primero a la de actual
    temp = buscarEstudiante(tr); //me retorna una direccion donde econtro el valor
    if(temp==NULL)
    {
        cout << "No se encontro Dato a eliminar";
    }
    else
    {
        if(temp == this->primero)
        {
        primero = primero->Siguiente;
        }
        else
        {
            while(actual->Siguiente!=NULL)// mientras actual en la posicion siguiente sea diferente de nulo
            {
                if(this->actual->Siguiente == temp) // si actual en la posicion siguiente es el valor que ando buscando hace ..
                {
                    aux = actual->Siguiente->Siguiente; // aux guarda la direccion del nodo actual que se tiene dos nodos adelante de el ( nodo→siguiente→siguiente )
                    actual->Siguiente = aux;    // actual en la posicion siguiente es igual a aux
                    break; // como ya hice todo me cierro el ciclo
                }
                else
                {
                    actual = actual->Siguiente; // actual avanza una posicion adelante
                }
            }
        }
        delete temp;
    }
}
pNodo buscarAntes(){
    pNodo aux;
    aux = primero;
        while(aux){
            if(aux->Siguiente->Siguiente == NULL){
            return aux;
            }else{
            aux = aux->Siguiente;
            }
        }
}
void Mostrar(){
    pNodo aux;
    aux = primero;
        while(aux){
                cout << "Nombre \tApellido\n";
        aux->Valor.MostrarNombres();
        aux->Valor.getCodigo();
        cout << "\nLa primera nota es : " << aux->Valor.getn1();
        cout << "\nLa segunda nota es  : " << aux->Valor.getn2();//<< aux->Valor.getIsr() + aux->Valor.getAfp() + aux->Valor.getIsss();
		cout << "\nLa tercera nota es : " << aux->Valor.getn3(); //<< aux->Valor.getsueldo();
		cout << "\nEl nota Promedio es " << aux->Valor.getPromedio();//<<aux->Valor.getTotalPagar();

        cout << "\nFecha de Nacimiento \n";
        aux->Valor.MostrarFechaNac();

        aux = aux->Siguiente;
        }
    cout<<"\nNULL\n";
}

};


#endif // LISTA_H_INCLUDED
