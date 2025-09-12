#include "Curso.hpp"
#pragma once

class NodoCurso{
    private:
        Curso* curso;
        NodoCurso* siguiente;
    public:
        NodoCurso();
        Curso* getCurso();
        NodoCurso* getSiguiente();
        void setCurso(Curso* curso);
        void setSiguiente(NodoCurso* siguiente);
        ~NodoCurso();
        
};