// Fecha: 17/10/2018
// Autor: Miguel Ángel Gil Martín (magma)
//Copyright: (c) 2018 MAGMa
//Licencia: MIT

#include <iostream>
#include <time.h>
#include "Persona.hpp"

using namespace magma;

//class PilaDeNombres 
//{
//public:
//	string Nombres[] = { "Juan", "Carlos", "Antonio", "Paco", "Pepe","Jose", "Jose Luis", "Jose Ángel","Miguel", "Miguel Ángel", "María", "Marta","Carla", "Clara","Carlota","Judit","Katy", "Luci" };
//	
//};

void GenerarAlumnos(size_t cantidad) 
{
	char n [] = "juanito";
	char * nombre = n;
	int edad;
	srand(time(NULL));

	for (size_t i = 0; i < cantidad; i++) 
	{
		edad = rand() % 20 + 10;
		Alumno(nombre, edad);
	}
}
void GenerarProfesores(size_t cantidad)
{
	char n[] = "Don.Angel";
	char * nombre = n;
	int edad;
	srand(time(NULL));

	for (size_t i = 0; i < cantidad; i++)
	{
		edad = rand() % 60 + 25;
		Profesor(nombre, edad);
		
	}

}
int main()
{
	

	return 0;
}
