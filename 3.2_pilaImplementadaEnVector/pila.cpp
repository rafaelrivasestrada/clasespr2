#include <pila.h>

/**
 @brief Constructor por defecto

*/
nsPila::CPila::CPila() {
	this->tope = -1;
        v = new float[TAM_MAX];
        assert (v != 0);
        return;
}

/**
 @brief Destructor, libera el espacio asignado al vector
*/
nsPila::CPila::~CPila() {
	while( !this->sacarDePila() );
        delete [] v;
        
        return;
}
				
	
/**
 @brief Método para guardar datos en la pila
 @param d Dato en punto flotante a guardar
 @return 0 en caso de exito
 @return 1 en caso de error por pila llena
*/
int nsPila::CPila::meteEnPila(float d){

        if(this->estaLlena())
           return(1);

        v[++tope] = d;

        return(0);
}

	
/**
 @brief Método para sacar datos en la pila
 @return 0 en caso de exito
 @return 1 en caso de error por pila vacia
*/
int nsPila::CPila::sacarDePila() {
	if (this->estaVacia())
		return(1);
   
        --this->tope;        

	return(0);
}

/**
 @brief Método para observar el dato en el tope de la pila
 @return Dato en el tope
*/
float nsPila::CPila::verTope() const {
	return(this->v[tope]);
}

/**
 @brief Método para observar si la pila esta vacia
 @return true en caso de pila vacía
 @return false en caso de pila no vacía
*/
bool nsPila::CPila::estaVacia() const {
	return(this->tope == -1);
}

/**
 @brief Método para observar si la pila esta llena
 @return true en caso de pila llena
 @return false en caso de pila no llena
*/
bool nsPila::CPila::estaLlena() const {
	return(this->tope == (TAM_MAX -1));
}

/**
 @brief Constructor de copia de la Clase Pila
 @param p Objeto de la clase pila a copiar
*/
nsPila::CPila::CPila(const CPila& p) {
   int i;


   this->v = new float[TAM_MAX];
   assert(this->v);

   for(i = 0; i < TAM_MAX; i++)
      this->v[i] = p.v[i];

   this->tope = p.tope;

   return;
}

/**
 @brief operador de copia de la Clase Pila
 @param p Objeto de la clase pila a copiar
*/
void nsPila::CPila::operator=(const CPila& p) {
   int i;

   delete [] this->v;

   this->v = new float[TAM_MAX];
   assert(this->v);

   for(i = 0; i < TAM_MAX; i++)
      this->v[i] = p.v[i];

   this->tope = p.tope;

   return;

}

