#include "NodoAlumno.hpp"

NodoAlumno::NodoAlumno(){
    this->alumno = nullptr;
    this->siguiente = nullptr;
}

Alumno* NodoAlumno::getAlumno(){
    return this->alumno;
}
NodoAlumno* NodoAlumno::getSiguiente(){
    return this->siguiente;
}

void NodoAlumno::setAlumno(Alumno* alumno){
    this->alumno = alumno;
}
void NodoAlumno::setSiguiente(NodoAlumno* siguiente){
    this->siguiente = siguiente;
}

NodoAlumno::~NodoAlumno(){
    alumno = nullptr;
    siguiente = nullptr;
}