#include <stdio.h>

typedef struct{
	char inicial;
	int anioNac;
}alumno;

void imprimirAlumnos(alumno unAlumno);

void main(){
    alumno yo;
    yo.anioNac = 1996;
    yo.inicial = 'm';
    imprimirAlumnos(yo);
    alumno vos;
    imprimirAlumnos(vos);
}

void imprimirAlumnos(alumno unAlumno){
	printf("inicial: %c\n", unAlumno.inicial);
	printf("anio de nacimiento: %d\n", unAlumno.anioNac);
}
