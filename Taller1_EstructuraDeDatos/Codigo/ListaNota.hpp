#include "NodoNota.hpp"
#pragma once

class ListaNota{
    private:
        NodoNota* start;
    public:
        //constructor
        ListaNota();
        //funciones
        void agregarNota(Nota nota);
        void mostrarNotas();
        bool isEmpty();
        ~ListaNota();

};


