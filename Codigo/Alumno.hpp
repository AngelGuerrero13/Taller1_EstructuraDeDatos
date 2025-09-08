#include <iostream>
#include <string>
using namespace std;

class Alumno{
    private:

        int id;
        string nombre;
        string apellido;
        string carrera;
        string fechaIngreso;
        string cursos;//ponerlo con lista
        double notas;//ponerlo con lista
        
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

        //destructor
        ~Alumno();

};
