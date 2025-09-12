#include "Curso.hpp"

using namespace std;

//Constructor
Curso::Curso(string codigo, string nombreCurso, int cantMaxEstudiantes, string nombreCarrera, string profesor){
    this->codigo = codigo;
    this->nombreCurso = nombreCurso;
    this->cantMaxEstudiantes = cantMaxEstudiantes;
    this->nombreCarrera = nombreCarrera;
    this->profesor = profesor;
}

//Getters
string Curso::getCodigo(){
    return this->codigo;
}
string Curso::getNombreCurso(){
    return this->nombreCurso;
}
int Curso::getCantMaxEstudiantes(){
    return this->cantMaxEstudiantes;
}
string Curso::getNombreCarrera(){
    return this->nombreCarrera;
}
string Curso::getProfesor(){
    return this->profesor;
}

//Setters
void Curso::setCodigo(string codigo){
    this->codigo = codigo;
}
void Curso::setNombreCurso(string nombreCurso){
    this->nombreCurso = nombreCurso;
}
void Curso::setCantMaxEstudiantes(int cantMaxEstudiantes){
    this->cantMaxEstudiantes = cantMaxEstudiantes;
}
void Curso::setNombreCarrera(string nombreCarrera){
    this->nombreCarrera = nombreCarrera;
}
void Curso::setProfesor(string profesor){
    this->profesor = profesor;
}

//Destructor
Curso::~Curso(){
}
