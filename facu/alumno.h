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