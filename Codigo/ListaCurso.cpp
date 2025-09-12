#include "ListaCurso.hpp"

using namespace std;

ListaCurso::ListaCurso(){
    start = nullptr;
}

void ListaCurso::agregarCurso(Curso* newCurso){
    NodoCurso* nuevo = new NodoCurso();
    nuevo->setCurso(newCurso);
    

    if(start == nullptr){
        start = nuevo;
    }else{
        NodoCurso* temp = start;
        while(temp->getSiguiente() != nullptr){
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(nuevo);
    }
    cout<<"Curso Agregado con exito"<<endl;
}

bool ListaCurso::eliminarCurso(string ID){

    NodoCurso* temp = start;
    NodoCurso* anterior = nullptr;
    
    while(temp != nullptr && temp->getCurso()->getCodigo() != ID){
        anterior = temp;
        temp = temp->getSiguiente();
    }
    if(temp == nullptr){
        return false;
    }else if(anterior == nullptr){
        start = temp->getSiguiente();
    }else{
        anterior->setSiguiente(temp->getSiguiente());
    }

    delete temp;
    return true;
}

Curso* ListaCurso::buscarCursoNombre(string nombre){

    NodoCurso* cursor = start;

    while(cursor != nullptr){
        if(cursor->getCurso()->getNombreCurso() == nombre){
            cout << "Curso encontrado: " << cursor->getCurso()->getNombreCurso() << endl;

            return cursor->getCurso();
        }
        cursor = cursor->getSiguiente();
    }

    cout << "Curso no encontrado" << endl;
    return nullptr;
}

Curso* ListaCurso::buscarCursoCodigo(string codigo){

    NodoCurso* cursor = start;

    while(cursor != nullptr){
        if(cursor->getCurso()->getCodigo() == codigo){
            return cursor->getCurso();
        }
        cursor = cursor->getSiguiente();
    }
    return nullptr;
}

void ListaCurso::mostrarLista(){
    NodoCurso* temp = start;
    while(temp!= nullptr){
        cout<<"[Codigo: "<<temp->getCurso()->getCodigo() <<", "
            <<"Nombre Curso: "<<temp->getCurso()->getNombreCurso()<<", "
            <<"Profesor: "<<temp->getCurso()->getProfesor()<<", "
            <<"Carrera: "<<temp->getCurso()->getNombreCarrera()<<", "
            <<"Cantidad maxima de alumnos: "<<temp->getCurso()->getCantMaxEstudiantes()
            <<"]"<<endl;
        temp  = temp->getSiguiente();

    }
    cout<<"nullptr"<<endl;
}

bool ListaCurso::isEmpty(){
    if(start == nullptr){
        return true;
    }else{
        return false;
    }
}

ListaCurso::~ListaCurso(){
    NodoCurso* temp = start;
    while(temp != nullptr){
        NodoCurso* borrar = temp;
        temp = temp-> getSiguiente();
        delete borrar; 
    }
}