#include "ListaAlumno.hpp"
#include <iostream>


using namespace std;


ListaAlumno::ListaAlumno(){
    start = nullptr;
}

NodoAlumno* ListaAlumno::getStart(){
    return this->start;
}

void ListaAlumno::agregarAlumno(Alumno* alumno){

    if(start == nullptr){
        NodoAlumno* nuevo = new NodoAlumno();
        nuevo->setAlumno(alumno);
        nuevo->setSiguiente(nullptr);
        start = nuevo;

    }else{
        NodoAlumno* cursor = start;

        while(cursor->getSiguiente() != nullptr){
            cursor = cursor->getSiguiente();
        }

        NodoAlumno* nuevo = new NodoAlumno();
        nuevo->setAlumno(alumno);
        nuevo->setSiguiente(nullptr);
        cursor->setSiguiente(nuevo);
    }

    cout<<"Alumno Agregado con exito"<<endl;
}

bool ListaAlumno::eliminarAlumno(NodoAlumno* start,int ID){

    NodoAlumno* cursor = start;
    NodoAlumno* anterior = nullptr;

    while(cursor != nullptr && cursor->getAlumno()->getId() != ID){
        anterior = cursor;
        cursor = cursor->getSiguiente();
    }

    if(cursor == nullptr){
        return false;
    }

    if(anterior == nullptr){
        start = cursor->getSiguiente();//el primero
    }else{
        anterior->setSiguiente(cursor->getSiguiente());
    }

    delete cursor;
    return true;
}

void ListaAlumno::buscarAlumnoNombre(NodoAlumno* start,string nombre){

    NodoAlumno* cursor = start;
    bool encontrado = false;

    while(cursor != nullptr){
        if(cursor->getAlumno()->getNombre() == nombre){
            cout << "Alumno encontrado: " << cursor->getAlumno()->getNombre() << endl;
            encontrado = true;
        }
        cursor = cursor->getSiguiente();
    }
    if(!encontrado){
        cout << "Alumno no encontrado" << endl;
    }
}

void ListaAlumno::buscarAlumnoId(int ID){
    NodoAlumno* cursor = start;
    bool encontrado = false;
    while(cursor != nullptr){
        if(cursor->getAlumno()->getId() == ID){
            cout << "Alumno encontrado: " << cursor->getAlumno()->getNombre() << endl;
            encontrado = true;
        }
        cursor = cursor->getSiguiente();
    }
    if(!encontrado){
        cout << "Alumno no encontrado" << endl;
    }
}

void ListaAlumno::mostrarAlumnos(){
    NodoAlumno* cursor = start;
    while(cursor != nullptr){
        cout << cursor->getAlumno()->getNombre() << endl;
        cursor = cursor->getSiguiente();
    }
}

bool ListaAlumno::isEmpty(){
    if(start == nullptr){
        return true;
    }else{
        return false;
    }
}

ListaAlumno::~ListaAlumno(){
    NodoAlumno* cursor = start;
    while(cursor != nullptr){
        NodoAlumno* aux = cursor;
        cursor = cursor->getSiguiente();
        delete aux;
    }
}

