#pragma once
#include "ListaAlumno.hpp"
#include "ListaCurso.hpp"
#include "Alumno.hpp"
#include "Curso.hpp"
#include "Nota.hpp"

class Sistema{
    private:
        ListaAlumno alumnos;
        ListaCurso cursos;
    public:
        Sistema();
        void menu();
        void gestionAlumnos();
        void agregarAlumno();
        void buscarAlumno();
        void eliminarAlumno();
        void gestionCursos();
        void agregarCurso();
        void buscarCurso();
        void eliminarCurso();
        void inscripcionCurso();
        void inscribirAlumno();
        void desinscribirAlumno();
        void gestionNotas();
        void reportes();
        ~Sistema();
};