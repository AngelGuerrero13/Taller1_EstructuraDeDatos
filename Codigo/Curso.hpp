#include <iostream>
#include <string>

using namespace std;

class Curso{
    private:
        string codigo;
        string nombreCurso;
        int cantMaxEstudiantes;
        string nombreCarrera;
        string profesor;
    public:
        Curso(string codigo, string nombreCurso, int cantMaxEstudiantes, string nombreCarrera, string profesor);
        string getCodigo();
        string getNombreCurso();
        int getCantMaxEstudiantes();
        string getNombreCarrera();
        string getProfesor();
        void setCodigo(string codigo);
        void setNombreCurso(string nombreCurso);
        void setCantMaxEstudiantes(int cantMaxEstudiantes);
        void setNombreCarrera(string nombreCarrera);
        void setProfesor(string profesor);
        ~Curso();

};