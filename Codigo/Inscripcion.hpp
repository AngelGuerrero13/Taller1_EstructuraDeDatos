#pragma once
#include "Curso.hpp"
#include "ListaNota.hpp"

class Inscripcion{
    private:
        Curso* curso;
        ListaNota notas;
        Inscripcion* siguiente;
    public:
        //Constructor
        Inscripcion(Curso* curso);

        //Getters
        Curso* getCurso();
        ListaNota* getNotas();
        Inscripcion* getSiguiente();

        //Setters
        void setSiguiente(Inscripcion* siguiente);

        void agregarNotas(double nota);
        double calcularPromedio();

        //Destructor
        ~Inscripcion();
};