#include <string>
#include "Alumno.hpp"

using namespace std;
//constructor
Alumno::Alumno(int id,string nombre,string apellido,string carrera,string fechaIngreso){

    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->carrera = carrera;
    this->fechaIngreso = fechaIngreso;
    this->cursos = ListaCurso();
    //falta agregar las notas
}
//Getters
int Alumno::getId(){return id;}
string Alumno::getNombre(){return nombre;}
string Alumno::getApellido(){return apellido;}
string Alumno::getCarrera(){return carrera;}
string Alumno::getfechaIngreso(){return fechaIngreso;}
ListaCurso Alumno::getCursos(){return cursos;}

//Setters
void Alumno::setID(int newId){
    this->id = newId;
}
void Alumno::setNombre(string newNombre){
    this->nombre = newNombre;
}
void Alumno::setApellido(string newApellido){
    this->apellido = newApellido;
}
void Alumno::setCarrera(string newCarrera){
    this-> carrera = newCarrera;
}
void Alumno::setIngreso(string newIngreso){
    this->fechaIngreso = newIngreso;
}

//destructor 
Alumno::~Alumno(){

}






