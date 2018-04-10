/**
 @file cola.pp
 @brief Implementación básica del TDA COLA, no es paramétrica y usa memoria dinámica
 @author rafael@ula.ve
 @date Abril, 2015
*/
#include <cola.h>

/**
 @brief Constructor por defecto.
*/
CCola::CCola() {
	this->inicio = this->fin = 0;
        return;
}

/**
 @brief Destructor.
*/
CCola::~CCola() {
	while( !this->sacarDeCola() );
        
        return;
}
				
	
/**
 @brief Método para meter datos en la cola.
 @param d Dato a guardar en la cola.
 @return 0 en caso de exito, 1 en caso contrario.
*/
int CCola::meteEnCola(float d){
	CNodoS* nodo = new CNodoS;

	if (nodo == 0 )
		return 1;

	nodo->asignarDato(d);
	
        if ( !this->inicio )
           this->inicio = this->fin = nodo;
        else { 
           this->fin->siguiente(nodo); 
           this->fin = nodo;
        }

	return(0);
}
	
	
/**
 @brief Método para sacar datos de la cola.
 @return 0 en caso de exito, 1 en caso contrario.
*/
int CCola::sacarDeCola() {
	if (this->estaVacia())
		return(1);
	
	CNodoS* aux = this->inicio;
        if ( this->inicio == this->fin )
           this->inicio = this->fin = 0;
        else 
           this->inicio = aux->siguiente();

	delete aux;

	return(0);
}

/**
 @brief Método para observar el dato al inicio de la cola
 @return Dato al inicio de la cola
*/
float CCola::verInicio() const {
        assert(this->inicio);
	return(this->inicio->verDato());
}

/**
 @brief Método para saber si la cola está vacia
 @return true en caso de cola vacía, false en caso contrario.
*/
bool CCola::estaVacia() const {
	return(this->inicio == 0);
}

/**
 @brief Constructor de copia 
 @param d Dato a guardar en la cola.
*/
CCola::CCola(const CCola& c) {
	CNodoS* aux = c.inicio;

        this->inicio = this->fin = 0;

        while(aux){
           this->meteEnCola(aux->verDato());
           aux = aux->siguiente();
        }

        return;
}


/**
 @brief Sobrecarga del operador de copia
 @param c Cola  de la cual se copiaran los datos.
 @return 0 en caso de exito, 1 en caso contrario.
*/
void CCola::operator=(const CCola& c) {
   	CNodoS* aux = c.inicio;

	while(!this->sacarDeCola());

        while(aux){
           this->meteEnCola(aux->verDato());
           aux = aux->siguiente();
        }

        return;
}

