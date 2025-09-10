#include "Curso.hpp"

using namespace std;

//Constructor
Curso::Curso(string codigo, string nombreCurso, int cantMaxEstudiantes, string nombreCarrera, string profesor){
    this->codigo = codigo;
    this->nombreCurso = nombreCurso;
    this->cantMaxEstudiantes = cantMaxEstudiantes;
    this->nombreCarrera = nombreCarrera;
    this->profesor = profesor;
    this->Alumnos = ListaAlumnos();
}

//Getters
string Curso::getCodigo(){
    return codigo;
}
string Curso::getNombreCurso(){
    return nombreCurso;
}
int Curso::getCantMaxEstudiantes(){
    return cantMaxEstudiantes;
}
string Curso::getNombreCarrera(){
    return nombreCarrera;
}
string Curso::getProfesor(){
    return profesor;
}
ListaAlumnos Curso::getLista(){
    return Alumnos;
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
