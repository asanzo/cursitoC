#include <time.h>
#include "divisores.h"

int anioActual(){
	time_t ahora = time(NULL);
	return 1900 + gmtime(&ahora)->tm_year;
}

int esAnioBisiesto(int anio){
	return (divisiblePor(anio,400) || divisiblePorUnNumeroPeroNoPorOtro(anio,4,100));
}