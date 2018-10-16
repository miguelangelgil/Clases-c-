#pragma once

#include "Color.hpp"
#include <cstddef>
namespace magma
{
	class Lista 
	{
		struct Nodo
		{
			Color color;
			Nodo * siguiente;
			Nodo * anterior;
		};
		Nodo * primero;
		Nodo * ultimo;
		size_t contador;

	public:
		Lista()
		{
			primero  = nullptr;
			ultimo = nullptr;
			contador = 0;
		}
		Lista(const Lista & other);//recivir una referencia de otra lista, recorrer los nodos y crear una cadena de nodos igual
		///libera la memoria ocupada por los nodos llamando a delete
		~Lista();
		//destruir todos los nodos de la lista 
		///añade un nuevo color al final de la lista anidada
		void push_back(const Color & c);
		///Devuelve el color que se encuentra en cierta posicion de la lista
		Color get_by_index(size_t index);
		///borrar todos los colores iguales a c. (los nodos y reestructura la lista)
		void erase(Color c);
	
	};

}