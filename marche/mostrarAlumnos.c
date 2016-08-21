#include <stdio.h>
#include "alumnos.h"

int main(){
    alumno yo = constructorAlumno('m',1996);
    imprimirDatos(yo);
    alumno otro;
    imprimirDatos(otro);
    return 0;
}

