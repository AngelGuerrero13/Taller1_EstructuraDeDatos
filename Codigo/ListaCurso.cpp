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

void ListaCurso::buscarCursoNombre(string nombre){

    NodoCurso* cursor = start;
    bool encontrado = false;

    while(cursor != nullptr){
        if(cursor->getCurso()->getNombreCurso() == nombre){
            cout << "Curso encontrado: " << cursor->getCurso()->getNombreCurso() << endl;
            encontrado = true;
        }
        cursor = cursor->getSiguiente();
    }
    if(!encontrado){
        cout << "Curso no encontrado" << endl;
    }
}

void ListaCurso::buscarCursoCodigo(string codigo){

    NodoCurso* cursor = start;
    bool encontrado = false;

    while(cursor != nullptr){
        if(cursor->getCurso()->getCodigo() == codigo){
            cout << "Curso encontrado: " << cursor->getCurso()->getCodigo() << endl;
            encontrado = true;
        }
        cursor = cursor->getSiguiente();
    }
    if(!encontrado){
        cout << "Curso no encontrado" << endl;
    }
}

void ListaCurso::mostrarLista(){
    NodoCurso* temp = start;
    while(temp!= nullptr){
        cout<< temp-> getCurso() << "->";
        temp  = temp->getSiguiente();

    }
    cout<<"nullptr";
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










