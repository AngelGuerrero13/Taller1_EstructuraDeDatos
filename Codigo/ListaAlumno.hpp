#include "NodoAlumno.hpp"
#pragma once

class ListaAlumno{

    private:
        NodoAlumno* start;
    public:    
        //constructor
        ListaAlumno();
        //funciones
        void agregarAlumno(Alumno alumno);//Añadir alumno a la lista
        void mostrarLista();//Se obtiene la lista para mostrar
        bool isEmpty();//Se verifica si la lista esta vacia
    
        ~ListaAlumno();   
};