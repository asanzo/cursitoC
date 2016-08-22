#include "alumnos.h"
#include "timeExtras.h"
#include <stdio.h>


void imprimirDatos(alumno unAlumno) {
	printf("El año de nacimiento es: %i\n",unAlumno.anioNac);
	printf("La inicial es: %c\n",unAlumno.inicial);
	printf("La edad es: %d\n",edadAlumno(unAlumno));
	printf("Nació en año bisiesto: %i\n",nacioEnAnioBisiesto(unAlumno));
}

int edadAlumno(alumno unAlumno) {
	return anioActual() - unAlumno.anioNac;
}

alumno constructorAlumno (char inicial,int anioNacimiento) {
	alumno unAlumno;
	unAlumno.inicial = inicial;
	unAlumno.anioNac = anioNacimiento;
	return unAlumno;
}

bool nacioEnAnioBisiesto(alumno unAlumno) {
	return esAnioBisiesto(unAlumno.anioNac);
}
