#include<stdio.h>

typedef struct {
  char inicial;
  int anioNac;
} alumno ;

void main(int cant, char * argv[]){
    alumno yo;         
    yo.anioNac = 1996;    
    yo.inicial = 'm';   
    imprimirDatos(yo);
    alumno otro;
    imprimirDatos(otro);
}

void imprimirDatos(alumno unAlumno) {
	printf("El año de nacimiento es: %i\n",unAlumno.anioNac);
	printf("La inicial es: %c\n",unAlumno.inicial);
}
