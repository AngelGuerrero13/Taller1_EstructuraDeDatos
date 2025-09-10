#include <iostream>
#include <string>
#include "ListaAlumno.hpp";

using namespace std;

class Curso{
    private:
        string codigo;
        string nombreCurso;
        int cantMaxEstudiantes;
        string nombreCarrera;
        string profesor;
        ListaAlumno Alumnos;
    public:
        //constructor
        Curso(string codigo, string nombreCurso, int cantMaxEstudiantes, string nombreCarrera, string profesor);
        //Getters
        string getCodigo();
        string getNombreCurso();
        int getCantMaxEstudiantes();
        string getNombreCarrera();
        string getProfesor();
        ListaAlumno getLista();
        //Setters
        void setCodigo(string codigo);
        void setNombreCurso(string nombreCurso);
        void setCantMaxEstudiantes(int cantMaxEstudiantes);
        void setNombreCarrera(string nombreCarrera);
        void setProfesor(string profesor);
        //Detructor
        ~Curso();

};