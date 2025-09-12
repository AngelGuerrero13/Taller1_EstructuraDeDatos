#include <iostream>
#include "ListaNota.hpp"


using namespace std;

class ListaNota
{
private:
    NodoNota* start;
public:
    ListaNota(){
        start = nullptr;
    }
    void ListaNota::agregarNota(Nota* nota){
        if(start == nullptr){
            NodoNota* nuevo = new NodoNota();
            nuevo->setNota(nota);
            nuevo->setSiguiente(nullptr);
            start = nuevo;
        }else{
            NodoNota* temp = start;
            while(temp->getSiguiente() != nullptr){
                temp = temp->getSiguiente();
            }
            NodoNota* nuevo = new NodoNota();
            nuevo->setNota(nota);
            nuevo->setSiguiente(nullptr);
            temp->setSiguiente(nuevo);
        }
        cout<<"Nota Agregado correctamente"<<endl;
    }


    void ListaNota::mostrarNotas(){
        NodoNota* temp = start;
        while (temp != nullptr){
            cout<< temp->getNota()<<endl;
            temp = temp->getSiguiente();
        }

    }
    bool ListaNota::isEmpty(){
        if(start == nullptr){
                return true;
            }else{
                return false;
            }
    }
    ~ListaNota(){
        NodoNota* temp = start;
        while(temp != nullptr){
            NodoNota* aux = temp;
            temp = temp->getSiguiente();
            delete aux;
        }
    }
};

