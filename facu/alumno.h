typedef struct{
	char inicial;
	int anioNac;
}alumno;

void imprimirAlumnos(alumno unAlumno);

int anioActual();

int edadAlumno();

alumno constructorAlumno(char inicial, int anioNac);

int esAnioBisiesto(int anio);

int nacioEnAnioBisiesto(alumno unAlumno);