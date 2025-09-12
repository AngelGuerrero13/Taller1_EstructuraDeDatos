#include <string>
#pragma once
#include "Inscripcion.hpp"
using namespace std;

class Alumno{
    private:

        int id;
        string nombre;
        string apellido;
        string carrera;
        string fechaIngreso;
        Inscripcion* inscripciones;//para guardar cursos inscritos
 
    public:
        //contructor
        Alumno(int id,string nombre,string apellido,string carrera,string fechaIngreso);
        
        //Getters
        string getNombre();
        string getApellido();
        string getCarrera();
        int getId();
        string getfechaIngreso();
        
        
        //Setters
        void setID(int newId);
        void setNombre(string newNombre);
        void setApellido(string newApellido);
        void setCarrera(string newCarrera);
        void setIngreso(string newIngreso);
        
        void agregarInscripcion(Curso* curso);
        void eliminarInscripcion(string codigoCurso);
        void mostrarCursos();

        //destructor
        ~Alumno();

};
