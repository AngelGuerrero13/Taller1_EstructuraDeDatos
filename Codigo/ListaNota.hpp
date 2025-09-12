#include "NodoNota.hpp"
#pragma once

class ListaNota{
    private:
        NodoNota* start;
    public:
        //constructor
        ListaNota();
        //funciones
        void agregarNota(Nota* nota);
        double calcularPromedio();
        void mostrarNotas();
        bool isEmpty();
        ~ListaNota();

};


