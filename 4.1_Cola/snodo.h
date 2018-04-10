/**
 @file snodo.h
 @brief Implementación básica del TDA Nodo Simple, no es paramétrico 
 @author rafael@ula.ve
 @date Abril, 2015
*/

#ifndef NODO_S
#define NODO_S

class CNodoS {

	float dato;
	CNodoS *prox;
public:
	CNodoS() {
	  this->prox = 0;
	}  

	CNodoS* siguiente() const {
	  return this->prox;
	}

	float verDato() {
	  return this->dato;
	}

        float asignarDato(float d){
           return (this->dato = d);
        }

	CNodoS* siguiente( CNodoS* ptr ) {
	  return ( this->prox = ptr ) ;
	}
	
};
#endif
