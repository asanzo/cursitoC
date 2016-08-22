typedef struct{
	char inicial;
	int anioNac;
}alumno;

void imprimirAlumnos(alumno unAlumno);

int edadAlumno();

alumno constructorAlumno(char inicial, int anioNac);

int nacioEnAnioBisiesto(alumno unAlumno);