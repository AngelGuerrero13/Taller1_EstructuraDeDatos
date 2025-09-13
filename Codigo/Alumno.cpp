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
Inscripcion* Alumno::getInscripciones(){return inscripciones;}

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
    ListaNota* notas;
    
    while(cursor != nullptr){
        cout<<"Cursos: "<<cursor->getCurso()->getNombreCurso()
        <<"("<<cursor->getCurso()->getCodigo()<<")"<<endl;

        notas = cursor->getNotas();
        cout<<"Notas: ";
        notas->mostrarNotas();
        cout<<"Promedio: "<<notas->calcularPromedio()<<endl;
        cout<<"------------------"<<endl;
        cursor = cursor->getSiguiente();
    }

}
void Alumno::mostrarReporte(){
    cout<<"Reporte del Alumno: "<<nombre<<" "<<apellido<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Fecha de Ingreso: "<<fechaIngreso<<endl;
    cout<<"Cursos Inscritos: "<<endl;
    mostrarCursos();
    
    cout<<"------------------"<<endl;
}

bool Alumno::estaInscrito(Inscripcion* inscripcion){
    
    Inscripcion* actual = inscripciones;

    while(actual != nullptr){
        if(inscripcion->getCurso()->getNombreCurso() == actual->getCurso()->getNombreCurso()){
            return true;
        }
        actual = actual ->getSiguiente();
    }

    return false;
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