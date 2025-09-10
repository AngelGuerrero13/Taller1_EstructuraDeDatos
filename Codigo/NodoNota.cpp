#include "NodoNota.hpp"

NodoNota::NodoNota(){
    this->nota = nullptr;
    this->siguiente = nullptr;
}

Nota* NodoNota::getNota(){
    return this->nota;
}
NodoNota* NodoNota::getSiguiente(){
    return this->siguiente;
}
void NodoNota::setNota(Nota* nota){
    this->nota = nota;
}
void NodoNota::setSiguiente(NodoNota* siguiente){
    this->siguiente = siguiente;
}
NodoNota::~NodoNota(){
    nota = nullptr;
    delete nota;
    siguiente = nullptr;
    delete siguiente;
}