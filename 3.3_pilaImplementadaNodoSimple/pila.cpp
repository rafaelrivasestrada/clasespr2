#include <pila.h>

CPila::CPila() 
{
	this->tope = 0;
	return;
}

CPila::~CPila() 
{
	while( !this->sacarDePila() );
        
        return;
}
				
	
int CPila::meteEnPila(float d)
{
	CNodoS* nodo = new CNodoS;

	if (nodo == 0 )
		return 1;

	nodo->asignarDato(d);
	
	nodo->siguiente(this->tope);
	this->tope = nodo;

	return(0);
}
	
	
int CPila::sacarDePila() 
{
	if (this->estaVacia())
		return(1);
	
	CNodoS* aux = this->tope;
	this->tope = aux->siguiente();
	delete aux;

	return(0);
}

float CPila::verTope() const 
{
	return(this->tope->verDato());
}

bool CPila::estaVacia() const 
{
	return(this->tope == 0);
}

CPila::CPila(const CPila& p) 
{
	CNodoS* aux1= p.tope;
	CNodoS* aux2;
	CNodoS* aux3;
	if (aux1) {
		CNodoS* aux2 = this->tope = new CNodoS;
                assert(aux2);
		do {
			aux2->asignarDato(aux1->verDato());
			if ( aux1 = aux1->siguiente() ) {
                                aux3 = new CNodoS;
                                assert(aux3);
				aux2->siguiente(aux3);
				assert((aux2 = aux2->siguiente()) != 0);
			}
		}while(aux1);
	} else
		tope = 0;
}

void CPila::operator=(const CPila& p) 
{
	while(!this->sacarDePila());

	CNodoS* aux1= p.tope;
	if (aux1) {
                CNodoS* aux3;

		CNodoS* aux2 = this->tope = new CNodoS;
                assert(aux2);
		do {
			aux2->asignarDato(aux1->verDato());
			if ( aux1 = aux1->siguiente() ) {
                                aux3 = new CNodoS;
                                assert(aux3);
				aux2->siguiente(aux3);
				assert( (aux2 = aux2->siguiente()) != 0);
			}
		}while(aux1);
	} else
		this->tope = 0;

        return;
}

