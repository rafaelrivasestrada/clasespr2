/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#include <molusco.h>
Molusco::Molusco() : Habitante(){
    this->peso = 0;
    this->tipo = MOLUSCO;
}
///Observador
int Molusco::verPeso()const{
    return this->peso;
}
///Modificadores
void Molusco::asignarPeso(int p){
    if(p > 0){
        this->peso = p;
    }else{
        throw std::domain_error("El peso no puede ser 0 o menor\n");
    }
}
void Molusco::asignarTipo(clas tip){
    if(tip == MOLUSCO){
        this->tipo = tip;
    }else{
        throw std::invalid_argument("Tiene que ser MOLUSCO\n");
    }
}