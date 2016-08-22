#include <stdio.h>
#include "alumno.h"
#include "timeExtras.h"

void imprimirAlumnos(alumno unAlumno){
	printf("inicial: %c\n", unAlumno.inicial);
	printf("anio de nacimiento: %d\n", unAlumno.anioNac);
	if(nacioEnAnioBisiesto(unAlumno)){
		printf("Soy especial: naci en anio bisiesto\n");
	}else{
		printf("Ufa soy normal: no naci en anio bisiesto\n");
	}
	printf("edad: %d\n", edadAlumno(unAlumno));
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

int nacioEnAnioBisiesto(alumno unAlumno){
	return esAnioBisiesto(unAlumno.anioNac);
}