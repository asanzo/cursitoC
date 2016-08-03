#include <stdio.h>
#include <time.h>
#include "alumno.h"

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