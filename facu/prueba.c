#include <stdio.h>

typedef struct{
	char inicial;
	int anioNac;
}alumno;

void imprimeAlumnos(alumno unAlumno){
	char inicial = unAlumno.inicial;
	int anioNac = unAlumno.anioNac;
	printf("inicial: %c\n", inicial);
	printf("anio de nacimiento: %d\n", anioNac);
}

void main(){
    alumno yo;
    yo.anioNac = 1996;
    yo.inicial = 'm';
    imprimeAlumnos(yo);
    alumno vos;
    imprimeAlumnos(vos);
}