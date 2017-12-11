#include<iostream>
#include<stdlib.h>



using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;

};

void menu();
void insertar(Nodo *&, int);
void eliminar(Nodo *&, int);
void mostar(Nodo *);

Nodo *lista = NULL;
int numero;
int main(){

menu();
return 0;


}
void menu(){
int opcion,dato;

do{
cout<<"Menu de lista\n";
cout<<"1. insertar a lista\n";
cout<<"2. mostrar lista\n";
cout<<"3. eliminar\n";
cout<<"4. salir\n";
cout<<"Que desea realizar?\n";
cin>>opcion;

switch(opcion){
case 1:
cout<<"ingrese el numero desiado"<<endl;
cin>>dato;
insertar(lista,dato);
cout<<"\n";

break;
case 2:
mostar(lista);
cout<<"\n";

break;
case 3:
cout<<"\nQue elemento desea eliminar:  ";
cin>>dato;
eliminar(lista,dato);
cout<<"\n";


}


}while(opcion!=4);
}

void insertar(Nodo *&lista, int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato =n;

    Nodo *aux1= lista;
    Nodo *aux2;

    while((aux1 != NULL)){
    aux2=aux1;
    aux1=aux1->siguiente;

    }

    if(lista == aux1){
    lista = nuevo_nodo;

    }else{
   aux2->siguiente=nuevo_nodo;
    }
     nuevo_nodo->siguiente=aux1;
cout<<n<<"  se inserto\n";
}

void mostar(Nodo *lista){

Nodo *actual = new Nodo();
actual = lista;

while(actual!=NULL){
cout<<actual->dato<<" ==>> ";
actual= actual->siguiente;
}
}
void eliminar(Nodo *&lista, int n){
if(lista !=NULL){
Nodo *aux_b;
Nodo *anterior = NULL;

aux_b = lista;

while((aux_b != NULL)&&(aux_b->dato != n)){
anterior=aux_b;
aux_b= aux_b->siguiente;
}

if(aux_b==NULL){
cout<<"no se encontro elemento";


}else if(anterior==NULL){
lista=lista->siguiente;
delete aux_b;
}

else{
anterior->siguiente=aux_b->siguiente;
delete aux_b;
}
}
}


