#include <iostream>
#include "ListaNota.hpp"

using namespace std;

ListaNota::ListaNota(){
    start = nullptr;
}
void ListaNota::agregarNota(Nota *nota)
{

    NodoNota *nuevo = new NodoNota();
    nuevo->setNota(nota);
    nuevo->setSiguiente(nullptr);

    if (start == nullptr)
    {

        start = nuevo;
    }
    else
    {

        NodoNota *temp = start;

        while (temp->getSiguiente() != nullptr)
        {
            temp = temp->getSiguiente();
        }

        temp->setSiguiente(nuevo);
    }
    cout << "Nota Agregado correctamente" << endl;
}

double ListaNota::calcularPromedio()
{
    if (start == nullptr)
    {
        return 0.0;
    }
    NodoNota *temp = start;
    double suma = 0;
    int contador = 0;

    while (temp != nullptr)
    {
        suma += temp->getNota()->getNota();
        contador++;
        temp = temp->getSiguiente();
    }

    if (contador > 0)
    {
        return suma / contador;
    }
    return 0.0;
}

void ListaNota::mostrarNotas()
{
    NodoNota *temp = start;
    while (temp != nullptr)
    {
        cout << temp->getNota()->getNota() << endl;
        temp = temp->getSiguiente();
    }
}

bool ListaNota::isEmpty()
{
    if (start == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ListaNota::~ListaNota()
{
    NodoNota *temp = start;
    while (temp != nullptr)
    {
        NodoNota *aux = temp;
        temp = temp->getSiguiente();
        delete aux;
    }
}
