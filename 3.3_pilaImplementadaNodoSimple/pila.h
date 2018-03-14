/**
 @file pila.h
 @brief Implementación básica del TDA PILA, no es paramétrica y usa memoria dinámica
 @author rafael@ula.ve
 @date Abril, 2015
*/

#ifndef CPILA
#define CPILA
#include <snodo.h>
#include <assert.h>

class CPila 
{
	private:
		CNodoS* tope; /// Tope de la pila

	public:
		CPila();
		CPila(const CPila&);
		~CPila();

		int meteEnPila(float);
		int sacarDePila();
		float verTope() const;
		bool estaVacia() const;
		void operator=(const CPila&);
};

#endif
