#include "ListaCurso.hpp"
#pragma once

class ListaCurso{
    private:
        NodoCurso* start;
    public:
        ListaCurso::ListaCurso(){
            start = nullptr;
        }

        void ListaCursi::agregarCurso(NodoCurso newCurso){
            NodoCurso* nuevo = new NodoCurso(newCurso);
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
        ListaCurso::~ListaCurso(){
            NodoCurso* temp = start;
            while(temp != nullptr){
                NodoCurso* borrar = temp;
                temp = temp-> getSiguiente();
                delete borrar; 
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
          
};







