/**
 @file pila.h
 @brief Declaracion del espacio de nombres nsPila, contiene
 versión  básica del TDA PILA, no es paramétrica y usa un vector
 @author R. Rivas rafael@ula.ve
 @date Abril, 2015
*/

#ifndef CPILA
#define CPILA
#include <assert.h>

namespace nsPila{
   const int TAM_MAX = 10;

   class CPila {

	int  tope; /// Tope de la pila
        float* v;  /// Vector para guardar datos de la pila

      public:
	CPila();
	CPila(const CPila&);
	~CPila();

	int meteEnPila(float);
	int sacarDePila();
	float verTope() const;
	bool estaVacia() const;
	bool estaLlena() const;
	void operator=(const CPila&);


   };
}

#endif
