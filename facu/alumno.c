#include <stdio.h>
#include <time.h>
#include "alumno.h"
#include "divisores.h"

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

int esAnioBisiesto(int anio){
	return (divisiblePor(anio,400) || divisiblePorUnNumeroPeroNoPorOtro(anio,4,100));
}

int nacioEnAnioBisiesto(alumno unAlumno){
	return esAnioBisiesto(unAlumno.anioNac);
}