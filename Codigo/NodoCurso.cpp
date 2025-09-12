#include "NodoCurso.hpp"

NodoCurso::NodoCurso(){
    this->curso = nullptr;
    this->siguiente = nullptr;
}

Curso* NodoCurso::getCurso(){
    return this->curso;
}
NodoCurso* NodoCurso::getSiguiente(){
    return this->siguiente;
}

void NodoCurso::setSiguiente(NodoCurso* siguiente){
    this->siguiente = siguiente;
}
void NodoCurso::setCurso(Curso* curso){
    this->curso = curso;
}

NodoCurso::~NodoCurso(){
    delete curso;
    curso = nullptr;
    siguiente = nullptr;
}