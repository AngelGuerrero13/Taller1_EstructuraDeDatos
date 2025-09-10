#include "Sistema.hpp"
#include "Alumno.hpp"
#include "Curso.hpp"
#include "Nota.hpp"
#include <iostream>

using namespace std;

Sistema::Sistema(){
}

void Sistema::menu(){

    int op;
    
    do{
        cout<<"Menu Principal"<<endl;
        cout<<"1. Gestion de Alumnos"<<endl;
        cout<<"2. Gestion de Cursos"<<endl;
        cout<<"3. Inscripcion a Curso"<<endl;
        cout<<"4. Gestion de Notas"<<endl;
        cout<<"5. Reportes"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>op;

        switch(op){
            case 1:
                gestionAlumnos();
                break;
            case 2:
                gestionCursos();
                break;
            case 3:
                inscripcionCurso();
                break;
            case 4:
                gestionNotas();
                break;
            case 5:
                reportes();
                break;
            case 6:
                cout<<"Saliendo..."<<endl;
                exit(0);
        }
    }while(op!=6);
    


}

void Sistema::gestionAlumnos(){
    int opAlumno;

    do{
        cout<<"1. Agregar Alumno"<<endl;
        cout<<"2. Buscar Alumno"<<endl;
        cout<<"3. Eliminar Alumno"<<endl;
        cout<<"4. Volver al Menu Principal"<<endl;

        switch(opAlumno){
            case 1:
                agregarAlumno();
                break;
            case 2:
                buscarAlumno();
                break;
            case 3:
                eliminarAlumno();
                break;
            case 4:
                break;
        }
    }while(opAlumno!=4);
}
void Sistema::agregarAlumno(ListaAlumno alumnos){

    int idAlumno;
    string nombreAlumno;
    string apellidoAlumno;
    string carreraAlumno;
    string fechaIngreso;

    cout<<"Ingrese el ID del Alumno: ";
    cin>>idAlumno;
    cout<<"Ingrese el Nombre del Alumno: ";
    cin>>nombreAlumno;
    cout<<"Ingrese el Apellido del Alumno: ";
    cin>>apellidoAlumno;
    cout<<"Ingrese la Carrera del Alumno: ";
    cin>>carreraAlumno;
    cout<<"Ingrese la Fecha de Ingreso del Alumno: ";
    cin>>fechaIngreso;

    //editar constructor, faltan atributos
    Alumno alumno(idAlumno, nombreAlumno, apellidoAlumno, carreraAlumno, fechaIngreso);    
    alumnos->agregarAlumno(alumno);

}
void Sistema::buscarAlumno(){
    //agregar logica mas tarde debido al uso de listas con nexo.
    cout<<"Ingrese el ID del Alumno: "<<endl;
}
void Sistema::eliminarAlumno(){
    //agregar logica mas tarde debido al uso de listas con nexo.
    cout<<"Ingrese el ID del Alumno: "<<endl;
}

void Sistema::gestionCursos(){
    int opCurso;

    do{
        cout<<"1. Agregar Curso"<<endl;
        cout<<"2. Buscar Curso"<<endl;
        cout<<"3. Eliminar Curso"<<endl;
        cout<<"4. Volver al Menu Principal"<<endl;
        cin>>opCurso;

        switch(opCurso){
            case 1:
                agregarCurso();
                break;
            case 2:
                buscarCurso();
                break;
            case 3:
                eliminarCurso();
                break;
            case 4:
                break;
        }
    }while(opCurso!=4);
}
void Sistema::agregarCurso(ListaCurso cursos){
    string codigoCurso;
    string nombreCurso;
    int cantMaxEstudiantesCurso;
    string carreraCurso;
    string profesorCurso;

    cout<<"Ingrese el ID del Curso: "<<endl;
    cin>>codigoCurso;
    cout<<"Ingrese el Nombre del Curso: "<<endl;
    cin>>nombreCurso;
    cout<<"Ingrese la cantidad maxima de estudiantes del curso: "<<endl;
    cin>>cantMaxEstudiantesCurso;
    cout<<"Ingrese el nombre de la carrera del Curso: "<<endl;
    cin>>carreraCurso;
    cout<<"Ingrese el Nombre del profesor del Curso: "<<endl;
    cin>>profesorCurso;

    
    Curso curso(codigoCurso, nombreCurso,cantMaxEstudiantesCurso, carreraCurso, profesorCurso);
    cursos->agregarCurso(curso);
}
void Sistema::buscarCurso(){
    //agregar logica mas tarde debido al uso de listas con nexo.
}
void Sistema::eliminarCurso(){
    //agregar logica mas tarde debido al uso de listas con nexo.
}

void Sistema::inscripcionCurso(){
    int opInscripcion;

    do{
        cout<<"1. Inscribir Alumno"<<endl;
        cout<<"2. Eliminar Alumno"<<endl;
        cout<<"3. Volver al Menu Principal"<<endl;
        cin>>opInscripcion;

        switch(opInscripcion){
            case 1:
                inscribirAlumno();
                /*
                *control de errores al inscribir una clase, ya que los alumnos
                *deben inscribir clases de sus carreras correspondientes, y no
                *deben inscribir clases de otras carreras.
                */
                break;
            case 2:
                desinscribirAlumnoInscrito();
                break;
            case 3:
                break;
        }
    }while(opInscripcion!=3);
}

void inscribirAlumno(){
}
void desinscribirAlumnoInscrito(){
}

void Sistema::gestionNotas(){
    /*
    *Se pregunta por el alumno, luego se despliegan los cursos inscritos de dicho
    *alumno, luego se pregunta por el curso, y se despliegan las notas de dicho curso
    *para dicho alumno.
    */
}

void Sistema::reportes(){
    /*
    *Se pregunta por un alumno, luego se despliegan los cursos inscritos de dicho
    *alumno con todas sus notas, promedio de cada curso, y promedio general del alumno.
    */
}

Sistema::~Sistema(){
}