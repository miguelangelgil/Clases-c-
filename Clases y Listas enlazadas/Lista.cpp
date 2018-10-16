

#include "Lista.hpp"
namespace magma
{
	Lista::Lista(const Lista & other)
	{
		Nodo * pCopia = other.primero;
		Nodo * p = primero;
		while (pCopia != nullptr) 
		{
			Nodo * nuevo = new Nodo;
			nuevo->color = pCopia->color;
			nuevo->anterior = p;
			p->siguiente = nuevo;
			nuevo->siguiente = nullptr;
			p = nuevo;
			pCopia = pCopia->siguiente;
		}

	}
	void Lista::push_back(const Color & c) 
	{

		if (ultimo == nullptr) 
		{
			Nodo * nuevo = primero = ultimo = new Nodo;
			nuevo->color = c;
			nuevo->siguiente = nuevo->anterior = nullptr;
		}
		else 
		{
			Nodo * nuevo = new Nodo;
			nuevo->color = c;
			nuevo->anterior = ultimo;
			nuevo->siguiente = nullptr;
			ultimo->siguiente = nuevo;
			ultimo = nuevo;
		}
		++contador;
		

	}
	Color Lista:: get_by_index(size_t index)
	{
		Nodo * p = primero;
		for (int i = 0; p->siguiente != nullptr && i <= index; i++){ p = p->siguiente; }
		return p -> color;
	}
	void Lista::erase(Color c) 
	{
		Nodo * p = primero;
		while (p->siguiente != nullptr) 
		{
			while (p->color.color != c.color || p != nullptr) { p = p->siguiente; }
			if (p->color.color == c.color)
			{
				Nodo * pAuxSiguiente;
				Nodo * pAuxAnterior;
				if (p->siguiente != nullptr)
					pAuxSiguiente = p->siguiente;
				if (p != primero)
					pAuxAnterior = p->anterior;
				delete p;
				p = pAuxSiguiente;
				pAuxAnterior->siguiente = p;
				p->anterior = pAuxAnterior;

			}

		}
		
	}
	Lista::~Lista()
	{
		Nodo * p = new Nodo;
		p = primero;
		while (p != nullptr) { Nodo * paux = new Nodo; paux = p->siguiente; delete p; p = paux; }
	}
	
}