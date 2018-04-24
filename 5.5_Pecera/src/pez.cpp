/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#include <pez.h>

Pez::Pez() : Habitante(){
    this->edad = 0;
    this->tipo = PEZ;
}

int Pez::verEdad()const{
    return (this->edad);
}

void Pez::asignarEdad(int ed){
    if(ed >= 0){
        this->edad = ed;
    }else{
        throw std::domain_error("La edad no puede ser negativa\n");
    }
}

void Pez::asignarTipo(clas tip){
    if(tip == PEZ){
        this->tipo = tip;
    }else{
        throw std::invalid_argument("debe ser PEZ\n");
    }
}