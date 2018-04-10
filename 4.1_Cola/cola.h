/**
 @file cola.h
 @brief Declaración de la implementación básica del TDA COLA, 
 no es paramétrica y usa memoria dinámica
 @author rafael@ula.ve
 @date Abril, 2015
*/

#ifndef CPILA
#define CPILA
#include <snodo.h>
#include <assert.h>

class CCola {
	CNodoS* inicio; /// Inicio de la cola
	CNodoS* fin; /// Fin de la cola

public:
	CCola();
	CCola(const CCola&);
	~CCola();

	int meteEnCola(float);
	int sacarDeCola();
	float verInicio() const;
	bool estaVacia() const;
	void operator=(const CCola&);

};

#endif
