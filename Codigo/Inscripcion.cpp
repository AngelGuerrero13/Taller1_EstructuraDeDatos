#include "Inscripcion.hpp"
#include "Nota.hpp"

Inscripcion::Inscripcion(Curso* curso){
    this->curso = curso;
    this->siguiente = nullptr;
}

//Getters
Curso* Inscripcion::getCurso(){
    return this->curso;
}
ListaNota* Inscripcion::getNotas(){
    return &notas;
}
Inscripcion* Inscripcion::getSiguiente(){
    return this->siguiente;
}

//Setters
void Inscripcion::setSiguiente(Inscripcion* siguiente){
    this->siguiente = siguiente;
}

void Inscripcion::agregarNotas(double nota){
    Nota* notaNueva = new Nota(nota);
    notas.agregarNota(notaNueva);
}

double Inscripcion::calcularPromedio(){
    return notas.calcularPromedio();
}

Inscripcion::~Inscripcion(){
    siguiente = nullptr;
}