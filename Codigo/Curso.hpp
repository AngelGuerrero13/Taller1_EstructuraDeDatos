#include <iostream>
#include <string>
#pragma once

using namespace std;

class Curso{
    private:
        string codigo;
        string nombreCurso;
        int cantMaxEstudiantes;
        string nombreCarrera;
        string profesor;
    public:
        //constructor
        Curso(string codigo, string nombreCurso, int cantMaxEstudiantes, string nombreCarrera, string profesor);
        //Getters
        string getCodigo();
        string getNombreCurso();
        int getCantMaxEstudiantes();
        string getNombreCarrera();
        string getProfesor();
        
        //Setters
        void setCodigo(string codigo);
        void setNombreCurso(string nombreCurso);
        void setCantMaxEstudiantes(int cantMaxEstudiantes);
        void setNombreCarrera(string nombreCarrera);
        void setProfesor(string profesor);
        //Detructor
        ~Curso();

};