#include "Sistema.hpp"
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
        cout<<"------------------"<<endl;
        cin>>op;
        cout<<"------------------"<<endl;

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
        cout<<"------------------"<<endl;
        cin>>opAlumno;
        cout<<"------------------"<<endl;

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
void Sistema::agregarAlumno(){

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
    cout<<idAlumno<<endl;
    Alumno* alumno = new Alumno(idAlumno, nombreAlumno, apellidoAlumno, carreraAlumno, fechaIngreso);
    alumnos.agregarAlumno(alumno);

    cout<<"Alumno agregado con exito"<<endl;
}
void Sistema::buscarAlumno(){
    //agregar logica mas tarde debido al uso de listas con nexo.
    int opBuscar;
    int idAlumno;
    string nombreAlumno;

    do{
        cout<<"1. Buscar por ID"<<endl;
        cout<<"2. Buscar por Nombre"<<endl;
        cout<<"3. Volver al Menu Alumnos"<<endl;
        cin>>opBuscar;

        switch(opBuscar){
            case 1:
                cout<<"Ingrese el ID del Alumno: "<<endl;
                cin>>idAlumno;
                alumnos.buscarAlumnoId(idAlumno);
                break;
            case 2:
                cout<<"Ingrese el Nombre del Alumno: "<<endl;
                cin>>nombreAlumno;
                alumnos.buscarAlumnoNombre(alumnos.getStart(),nombreAlumno);
                break;
            case 3:
                break;
        }
    }while(opBuscar!=3);

}
void Sistema::eliminarAlumno(){

    int idAlumno;

    cout<<"Ingrese el ID del Alumno: "<<endl;
    cin>>idAlumno;

    bool eliminado = alumnos.eliminarAlumno(alumnos.getStart(),idAlumno);

    if(eliminado){
        cout<<"Alumno eliminado con exito"<<endl;
    }else{
        cout<<"No se encontro el Alumno"<<endl;
    }
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
void Sistema::agregarCurso(){

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

    
    Curso* curso = new Curso(codigoCurso, nombreCurso,cantMaxEstudiantesCurso, carreraCurso, profesorCurso);
    cursos.agregarCurso(curso);

    cout<<"Curso agregado con exito"<<endl;
}
void Sistema::buscarCurso(){
    //agregar logica mas tarde debido al uso de listas con nexo.
    int opBuscar;
    string codigoCurso;
    string nombreCurso;

    do{
        cout<<"1. Buscar por ID"<<endl;
        cout<<"2. Buscar por Nombre"<<endl;
        cout<<"3. Volver al Menu Cursos"<<endl;
        cin>>opBuscar;

        switch(opBuscar){
            case 1:
                cout<<"Ingrese el codigo del Curso: "<<endl;
                cin>>codigoCurso;
                cursos.buscarCursoCodigo(codigoCurso);
                break;
            case 2:
                cout<<"Ingrese el Nombre del Curso: "<<endl;
                cin>>nombreCurso;
                cursos.buscarCursoNombre(nombreCurso);
                break;
            case 3:
                break;
        }
    }while(opBuscar!=3);
}
void Sistema::eliminarCurso(){
    //agregar logica mas tarde debido al uso de listas con nexo.
    string codigoCurso;

    cout<<"Ingrese el codigo del Curso: "<<endl;
    cin>>codigoCurso;

    bool eliminado = cursos.eliminarCurso(codigoCurso);

    if(eliminado){
        cout<<"Curso eliminado con exito"<<endl;
    }else{
        cout<<"No se encontro el Curso"<<endl;
    }
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
                desinscribirAlumno();
                break;
            case 3:
                break;
        }
    }while(opInscripcion!=3);
}

void Sistema::inscribirAlumno(){
    int id;
    string curso;
    Alumno* alumnoExiste = nullptr;
    Curso* cursoExiste = nullptr;
    //realizar inscribirAlumno con las busqueda de nombre o id
    //para curso y alumno
    
    do{
        cout<<"Ingrese el ID del alumno"<<endl;
        cin>>id;
        alumnoExiste = alumnos.buscarAlumnoId(id);
        
        if(alumnoExiste == nullptr){
            cout<<"Alumno no encontrado. Intente nuevamente"<<endl;
        }

    }while(alumnoExiste==nullptr);


    cout<<"Ingrese el curso en el que se desea agregar: "<<endl;
    cin>>curso;

    cursoExiste = cursos.buscarCursoNombre(curso);

    if(cursoExiste == nullptr){
        cout<<"Curso no encontrado"<<endl;
        return;
    }

    if(alumnoExiste->getCarrera() != cursoExiste->getNombreCarrera()){
        cout<<"Error. El alumno pertenece a la carrera: "<<alumnoExiste->getCarrera()
            <<" y el curso es de la carrera: "<<cursoExiste->getNombreCarrera();
        return;
    }

    if(cursoExiste->getCantMaxEstudiantesCurso() <= cursoExiste->getCantEstudiantesInscritos()){
        cout<<"Error. No hay cupos disponibles en el curso: "<<cursoExiste->getNombreCurso()<<endl;
        return;
    }
    

    alumnoExiste->agregarInscripcion(cursoExiste);

    cout<<"Alumno "<<alumnoExiste->getNombre()<<" "<<alumnoExiste->getApellido()
        <<" inscrito en el curso "<<cursoExiste->getNombreCurso()<<endl;
}
void Sistema::desinscribirAlumno(){
    int id;
    string curso;
    Alumno* alumnoExiste = nullptr;
    Curso* cursoExiste = nullptr;
    //realizar inscribirAlumno con las busqueda de nombre o id
    //para curso y alumno
    
    do{
        cout<<"Ingrese el ID del alumno"<<endl;
        cin>>id;
        alumnoExiste = alumnos.buscarAlumnoId(id);
        
        if(alumnoExiste == nullptr){
            cout<<"Alumno no encontrado. Intente nuevamente"<<endl;
        }

    }while(alumnoExiste!=nullptr);


    cout<<"Ingrese el curso en el que se desea eliminar: "<<endl;
    cin>>curso;

    cursoExiste = cursos.buscarCursoNombre(curso);

    if(cursoExiste == nullptr){
        cout<<"Curso no encontrado"<<endl;
        return;
    }

    if(alumnoExiste->getCarrera() != cursoExiste->getNombreCarrera()){
        cout<<"Error. El alumno pertenece a la carrera: "<<alumnoExiste->getCarrera()
            <<" y el curso es de la carrera: "<<cursoExiste->getNombreCarrera();
        return;
    }

    alumnoExiste->eliminarInscripcion(cursoExiste->getCodigo());

    cout<<"Alumno "<<alumnoExiste->getNombre()<<" "<<alumnoExiste->getApellido()
        <<" eliminado del curso "<<cursoExiste->getNombreCurso()<<endl;
}

void Sistema::gestionNotas(){
    /*
    *Se pregunta por el alumno, luego se despliegan los cursos inscritos de dicho
    *alumno, luego se pregunta por el curso, y se despliegan las notas de dicho curso
    *para dicho alumno.
    */
}

void Sistema::reportes(){
    int id;
    Alumno* alumnoExiste = nullptr;

    do{
        cout<<" Ingresa el Id del estudiante buscado: ";
        cin>>id;
        alumnoExiste = alumnos.buscarAlumnoId(id);
        if(alumnoExiste == nullptr){
            cout<<"Alumno no encontrado. Intente nuevamente"<<endl;
        }

    }while(alumnoExiste!=nullptr);

    Cursos* cursosAlumnos alumnoExiste->mostrarCursos();
    




    

    /*
    *Se pregunta por un alumno, luego se despliegan los cursos inscritos de dicho
    *alumno con todas sus notas, promedio de cada curso, y promedio general del alumno.
    */
}

Sistema::~Sistema(){
}