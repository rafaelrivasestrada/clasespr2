/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#ifndef PLANTA_H
#define PLANTA_H
#include <habitante.h>
class Planta : public Habitante{
    private:
        int altura;
    public:
        Planta();
        ~Planta(){};
        ///Observadores
        int verAltura()const;
        ///Modificadores
        void asignarAltura(int);
        void asignarTipo(clas);
};

#endif