//
// Clase Pila
// Mayo 1999
//
#ifndef CPILA
#define CPILA
#include <snodo.h>

template <class T> class CPila {
	CNodoS<T>* tope;

public:
	CPila();
	CPila(const CPila&);
	~CPila();

	int mete(const T& );
	int saca();
	T& verTope() const;
	int vacia() const;
	void operator=(const CPila&);

};

template <class T> CPila<T>::CPila() {
	this->tope = 0;
}

template <class T> CPila<T>::~CPila() {
	while( !this->saca() );
}
				
	
template <class T> int CPila<T>::mete(const T& d){
	CNodoS<T>* nodo = new CNodoS<T>;

	if (nodo == 0 )
		return 1;

	nodo->verDato() = d;
	
	nodo->siguiente(this->tope);
	this->tope = nodo;

	return 0;
}
	
	
template <class T> int CPila<T>::saca() {
	if (this->vacia())
		return 1;
	
	CNodoS<T>* aux = this->tope;
	this->tope = aux->siguiente();
	delete aux;
	return 0;
}

template <class T> T& CPila<T>::verTope() const {
	return this->tope->verDato();
}

template <class T> int CPila<T>::vacia() const {
	return ( this->tope == 0 );
}

template <class T> CPila<T>::CPila(const CPila& p) {
	CNodoS<T>* aux1= p.tope;
	if (aux1) {
		CNodoS<T>* aux2 = this->tope = new CNodoS<T>;
		do {
			aux2->get_dato() = aux1->verDato();
			if ( aux1 = aux1->siguiente() ) {
				aux2->siguiente(new CNodoS<T>);
				assert( (aux2 = aux2->siguiente()) != 0);
			}
		}while(aux1);
	} else
		tope = 0;
}

template <class T> void CPila<T>::operator=(const CPila& p) {
	while( this->saca()  );

	CNodoS<T>* aux1= p.tope;
	if (aux1) {
		CNodoS<T>* aux2 = this->tope = new CNodoS<T>;
		do {
			aux2->verDato() = aux1->verDato();
			if ( aux1 = aux1->siguiente() ) {
				aux2->siguiente( new CNodoS<T>);
				assert( (aux2 = aux2->siguiente()) != 0);
			}
		}while(aux1);
	} else
		this->tope = 0;
}

#endif
