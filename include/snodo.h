//
//	Clase Nodo Simple
//  Mayo, 1999
//  
#ifndef NODO_S
#define NODO_S
#include <assert.h>


template <class T>
class CNodoS {

	T dato;
protected:
	CNodoS<T> *prox;
public:
	CNodoS() {
		this->prox = 0;
	}  

	CNodoS<T>* siguiente() const {
		return this->prox;
	}

	T& verDato() {
		return this->dato;
	}

	virtual CNodoS<T>* siguiente( CNodoS<T>* ptr ) {
		return ( this->prox = ptr ) ;
	}
	
};
#endif
