#include "Alumno.hpp"
#pragma once

class NodoAlumno{

    private:
        Alumno* alumno;//Variable ptr que apuntara a un alumno.
        NodoAlumno* siguiente;//Variable ptr que apuntara al nodo siguiente de alumno
    public:
        NodoAlumno();

        Alumno* getAlumno();
        NodoAlumno* getSiguiente();

        void setAlumno(Alumno* alumno);
        void setSiguiente(NodoAlumno* siguiente);

        ~NodoAlumno();

    

};
