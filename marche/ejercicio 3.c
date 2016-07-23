#include <time.h>
#include <stdio.h>

//Preguntar orden: ¿Struct -> header -> main?

typedef struct {
  char inicial;
  int anioNac;
} alumno ;

//Header -> putea menos (declaración implícita blah blah vuela, un rojo menos)
void imprimirDatos(alumno unAlumno);
int edadAlumno(alumno unAlumno);
int anioActual();
alumno constructorAlumno (char inicial,int anioNacimiento);


//D) Usarla en el programa principal, reemplazando las dos líneas que “llenaban” al alumno.

int main(){
    alumno yo = constructorAlumno('m',1996);
    imprimirDatos(yo);
    alumno otro;
    //No puedo hacer alumno otro = constructorAlumno(); -> rómpe tó
    imprimirDatos(otro);
    return 0;
}


//B) Modificar la función que imprime el alumno para que también imprima la edad.

void imprimirDatos(alumno unAlumno) {
	printf("El año de nacimiento es: %i\n",unAlumno.anioNac);
	printf("La inicial es: %c\n",unAlumno.inicial);
	//¿Dónde está mi orden superior?
	//Yo quiero hacer printf("La edad es: %d\n",edadAlumno(alumno unAlumno));
	int edadDelAlumno = edadAlumno(unAlumno);
	printf("La edad es: %d\n",edadDelAlumno);
}

//A) Definir una función que devuelva la edad del alumno. Usar la siguiente función
int edadAlumno(alumno unAlumno) {
	return anioActual() - unAlumno.anioNac;
}

int anioActual(){
    time_t ahora = time(NULL);
    return 1900 + gmtime(&ahora)->tm_year;
}

//C) Hacer una función que “construya” a un alumno: 
//le paso la inicial y el anio de nacimiento y me devuelve un struct alumno.

alumno constructorAlumno (char inicial,int anioNacimiento) {
	alumno unAlumno;
	unAlumno.inicial = inicial;
	unAlumno.anioNac = anioNacimiento;
	return unAlumno;
}

//Tenemos que hablar de convenciones: ¿Está bien decir constructorAlumno?
//¿O mejor usar newAlumno? ¿getAlumno? 
