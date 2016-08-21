#include <time.h>


typedef struct {
  char inicial;
  int anioNac;
} alumno ;

void imprimirDatos(alumno unAlumno);
int edadAlumno(alumno unAlumno);
int anioActual();
alumno constructorAlumno (char inicial,int anioNacimiento);
