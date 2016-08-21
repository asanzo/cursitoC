#include "alumnos.h"
#include <stdio.h>

void imprimirDatos(alumno unAlumno) {
	printf("El año de nacimiento es: %i\n",unAlumno.anioNac);
	printf("La inicial es: %c\n",unAlumno.inicial);
	printf("La edad es: %d\n",edadAlumno(unAlumno));
}

int edadAlumno(alumno unAlumno) {
	return anioActual() - unAlumno.anioNac;
}

int anioActual(){
    time_t ahora = time(NULL);
    return 1900 + gmtime(&ahora)->tm_year;
}

alumno constructorAlumno (char inicial,int anioNacimiento) {
	alumno unAlumno;
	unAlumno.inicial = inicial;
	unAlumno.anioNac = anioNacimiento;
	return unAlumno;
}
