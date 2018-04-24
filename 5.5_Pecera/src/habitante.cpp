/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#include <habitante.h>

Habitante::Habitante(){
    this->nombre = "Des";
}

std::string Habitante::verNombre() const{
    return (this->nombre);
}
clas Habitante::verTipo()const{
    return this->tipo;
}

void Habitante::asignarNombre(std::string nom){
    this->nombre = nom;
}