/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#include <planta.h>

Planta::Planta() : Habitante(){
    this->altura = 1;
    this->tipo = PLANTA;

}
///Observadores
int Planta::verAltura()const{
    return this->altura;
}
///Modificadores
void Planta::asignarAltura(int al){
    if(al > 0){
        this->altura = al;
    }
    else{
        throw std::domain_error("La altura no puede ser 0\n");
    }
}
void Planta::asignarTipo(clas tip){
    if(tip == PLANTA){
        this->tipo = tip;
    }else{
        throw std::invalid_argument("Debe ser PLANTA\n");
    }
}