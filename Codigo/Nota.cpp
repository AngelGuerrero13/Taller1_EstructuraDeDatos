#include "Nota.hpp"

Nota::Nota(double nota){
    this->nota = nota;
}

double Nota::getNota(){
    return this->nota;
}

void Nota::setNota(double nota){
    this->nota = nota;
}

Nota::~Nota(){   
}