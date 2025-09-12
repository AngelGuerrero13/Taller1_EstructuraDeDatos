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
    this->inscripciones = nullptr;
}
//Getters
int Alumno::getId(){return id;}
string Alumno::getNombre(){return nombre;}
string Alumno::getApellido(){return apellido;}
string Alumno::getCarrera(){return carrera;}
string Alumno::getfechaIngreso(){return fechaIngreso;}

void Alumno::agregarInscripcion(Curso* curso){
    Inscripcion* nuevaInscripcion = new Inscripcion(curso);
    nuevaInscripcion->setSiguiente(inscripciones);
    inscripciones = nuevaInscripcion;
}

void Alumno::eliminarInscripcion(string codigoCurso){
    Inscripcion* cursor = inscripciones;
    Inscripcion* anterior = nullptr;

    while(cursor != nullptr && cursor->getCurso()->getCodigo() != codigoCurso){
        anterior = cursor;
        cursor = cursor->getSiguiente();
    }

    if(cursor == nullptr){
        return;
    }
    if(anterior == nullptr){
        inscripciones = cursor->getSiguiente();
    }else{
        anterior->setSiguiente(cursor->getSiguiente());
    }

    delete cursor;
}

void Alumno::mostrarCursos(){

    Inscripcion* cursor = inscripciones;
    
    while(cursor != nullptr){
        cout<<"Cursos: "<<cursor->getCurso()->getNombreCurso()
        <<"("<<cursor->getCurso()->getCodigo()<<")"<<endl;

        cursor = cursor->getSiguiente();
    }
}

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