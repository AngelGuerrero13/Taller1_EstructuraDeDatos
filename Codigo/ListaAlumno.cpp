#include "ListaAlumno.hpp"
#pragma once

class ListaAlumno
{
    private:
        NodoAlumno* start;
    public:
        ListaAlumno(){
            start = nullptr;
        }

        void ListaAlumno::agregarAlumno(Alumno* alumno){

            if(start == nullptr){
                NodoAlumno* nuevo = NodoAlumno();
                nuevo->setAlumno(alumno);
                nuevo->setSiguiente(nullptr);
                start = nuevo;

            }else{
                NodoAlumno* cursor = start;

                while(cursor->getSiguiente() != nullptr){
                    cursor = cursor->getSiguiente();
                }

                NodoAlumno* nuevo = NodoAlumno();
                nuevo->setAlumno(alumno);
                nuevo->setSiguiente(nullptr);
                cursor->setSiguiente(nuevo);
            }

            cout<<"Alumno Agregado con exito"<<endl;
        }

        void ListaAlumno::mostrarAlumnos(){
            NodoAlumno* cursor = start;
            while(cursor != nullptr){
                cout << cursor->getAlumno()->getNombre() << endl;
                cursor = cursor->getSiguiente();
            }
        }

        bool ListaAlumno::isEmpty(){
            if(start == nullptr){
                return true;
            }else{
                return false;
            }
        }

        ~ListaAlumno(){
            NodoAlumno* cursor = start;
            while(cursor != nullptr){
                NodoAlumno* aux = cursor;
                cursor = cursor->getSiguiente();
                delete aux;
            }
        }
};
