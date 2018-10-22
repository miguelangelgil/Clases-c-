#pragma once
// Fecha: 17/10/2018
// Autor: Miguel Ángel Gil Martín (magma)
//Copyright: (c) 2018 MAGMa
//Licencia: MIT
#include <iostream>
using namespace std;
namespace magma 
{
	class Persona
	{
	public:

		char * nombre;
		int edad;
		virtual void saludar() = 0;

	};

	class Alumno : public Persona
	{
	public:
		Alumno(char * nombre, int edad): Persona()
		{
			this->nombre = nombre;
			this->edad = edad;
		}
		void saludar() override { cout << "Me llamo " + *nombre << endl; }


	};

	class Profesor : public Persona 
	{
	
		struct Nodo
		{
			Alumno * alumno;
			Nodo * anterior;
			Nodo * siguiente;
		};

		Nodo * primero;
		Nodo * ultimo;
	public:
		Profesor(char * nombre, int edad) : Persona() 
		{
			this->nombre = nombre;
			this->edad = edad;
			primero = nullptr;
			ultimo = nullptr;
		}
		
		void saludar() override;
		Nodo * siguienteNodo(Nodo * nodoActual) { return nodoActual->siguiente; }
		Nodo * anteriorNodo(Nodo * nodoActual) { return nodoActual->anterior; }
		void addNodo(const Alumno & alumno);
	};

}

