#pragma once

class Sistema{
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