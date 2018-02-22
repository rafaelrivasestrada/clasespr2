/**
 @file punto.cpp
 @brief Archivo con las definicones de los método de la clase CPunto
*/
#include <punto.h>
//
// DEFINICION DE LOS METODOS DE LA CLASE PUNTO
//


/**
 @brief Constructor de copia
 @param p Punto del cual se toman las coordenadas iniciales
*/
CPunto::CPunto(const CPunto& p) {
	this->x = p.x;
	this->y = p.y;
}

/**
 @brief Constructor por defecto
*/
CPunto::CPunto() {
	this->x = this->y = 0;
}

/**
 @brief Constructor a partir de datos iniciales
 @param x Coordenada x
 @param y Coordenada y
*/
CPunto::CPunto(float x, float y) {
	this->x = x;
	this->y = y;
}

/**
 @brief Asignación de coordenadas a un punto ya instaciado.
 @param x Coordenada x
 @param y Coordenada y
*/
void CPunto::asignar(float x, float y) {
	this->x = x;
	this->y = y;
}	

/**
 @brief Sobrecarga del operador de copia
 @param p Referencia constante al objeto a copiar
 @return Objeto temporal con los varores copiados.
*/
  CPunto CPunto::operator=(const CPunto& p){
	this->x = p.x;
	this->y = p.y;
	return(*this);
}

/**
 @brief Sobrecarga del operador de equivalencia
 @param p Referencia constante al objeto a comparar
 @return 1 si son iguales, 0 en caso de ser diferentes
*/
int CPunto::operator==(const CPunto& p){
	return ( (this->x == p.x) && (this->y == p.y) );
}
