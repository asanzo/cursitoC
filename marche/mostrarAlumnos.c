#include <time.h>
#include <stdio.h>
#include "mostrarAlumnos.h"

int main(){
    alumno yo = constructorAlumno('m',1996);
    imprimirDatos(yo);
    alumno otro;
    imprimirDatos(otro);
    return 0;
}

void imprimirDatos(alumno unAlumno) {
	printf("El año de nacimiento es: %i\n",unAlumno.anioNac);
	printf("La inicial es: %c\n",unAlumno.inicial);
	int edadDelAlumno = edadAlumno(unAlumno);
	printf("La edad es: %d\n",edadDelAlumno);
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
