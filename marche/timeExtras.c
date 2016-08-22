#include "timeExtras.h"

int anioActual(){
    time_t ahora = time(NULL);
    return 1900 + gmtime(&ahora)->tm_year;
}


bool esAnioBisiesto (int unAnio) {
	return esMultiploDe (400,unAnio) || 
	(esMultiploDe(4,unAnio) && !esMultiploDe (100,unAnio));
	
} 

bool esMultiploDe (int divisor, int dividendo) {
	return (dividendo%divisor == 0);
}
