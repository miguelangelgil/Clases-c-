// Fecha: 17/10/2018
// Autor: Miguel Ángel Gil Martín (magma)
//Copyright: (c) 2018 MAGMa
//Licencia: MIT
#include "Persona.hpp"
namespace magma
{
	void Profesor::saludar()
	{
		Nodo * nodoAlumno = new Nodo;
		nodoAlumno = primero;
		while (nodoAlumno != nullptr) { cout << nodoAlumno->alumno->nombre << endl; nodoAlumno = siguienteNodo(nodoAlumno); }
		
	}

	void Profesor::addNodo(const Alumno & alumno)
	{
		Nodo * nuevo = new Nodo;
		if (primero != nullptr) 
		{
			nuevo->anterior = ultimo;
			ultimo = ultimo->siguiente = nuevo;
			*nuevo->alumno = alumno;
			nuevo->siguiente = nullptr;
		}
		else {
			primero = ultimo = nuevo;
			*nuevo->alumno = alumno;
			nuevo->anterior = nullptr;
			nuevo->siguiente = nullptr;

		}
		


		
	}
	
}