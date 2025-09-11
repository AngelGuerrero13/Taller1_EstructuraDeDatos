#include "NodoCurso.hpp"
#pragma once

class ListaCurso{

    private:
        NodoCurso* start;
    public:    
        //constructor
        ListaCurso();
        //funciones
        void agregarCurso(Curso newclase);//Añadir alumno a la lista
        bool eliminarCurso(int id);
        void buscarCursoNombre(string nombre);
        void buscarCursoCodigo(int codigo);
        void mostrarLista();//Se obtiene la lista para mostrar
        bool isEmpty();//Se verifica si la lista esta vacia
        ~ListaCurso(); //Destructor  
};