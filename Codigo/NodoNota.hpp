#include "Nota.hpp"
#pragma once

class NodoNota{

    private:
        Nota* nota;//Variable ptr que apuntara a una nota.
        NodoNota* siguiente;//Variable ptr que apuntara al nodo siguiente de nota
    public:
        NodoNota();

        Nota* getNota();
        NodoNota* getSiguiente();

        void setNota(Nota* alumno);
        void setSiguiente(NodoNota* siguiente);

        ~NodoNota();
};