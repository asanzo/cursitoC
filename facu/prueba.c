#include <stdio.h>
#include <time.h>

typedef struct{
	char inicial;
	int anioNac;
}alumno;

void imprimirAlumnos(alumno unAlumno);

int anioActual();

int edadAlumno();

alumno constructorAlumno(char inicial, int anioNac);

void main(){
    alumno unAlumno = constructorAlumno('m',1996);
    imprimirAlumnos(unAlumno);
    //alumno otroAlumno;
    //imprimirAlumnos(otroAlumno);
}

void imprimirAlumnos(alumno unAlumno){
	printf("inicial: %c\n", unAlumno.inicial);
	printf("anio de nacimiento: %d\n", unAlumno.anioNac);
	printf("edad: %d\n", edadAlumno(unAlumno));
}

int anioActual(){
    time_t ahora = time(NULL);
    return 1900 + gmtime(&ahora)->tm_year;
}

int edadAlumno(alumno unAlumno){
	return anioActual() - unAlumno.anioNac;
}

alumno constructorAlumno(char inicial, int anioNac){
	alumno unAlumno;
	unAlumno.inicial = inicial;
	unAlumno.anioNac = anioNac;
	return unAlumno;
}

