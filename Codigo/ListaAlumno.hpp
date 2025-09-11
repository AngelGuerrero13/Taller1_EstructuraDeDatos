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
        bool eliminarAlumno(int id);//Eliminar alumno de la lista
        void buscarAlumnoNombre(string nombre);
        void buscarAlumnoId(int id);
        void mostrarAlumnos();//Se obtiene la lista para mostrar
        bool isEmpty();//Se verifica si la lista esta vacia
    
        ~ListaAlumno();   
};