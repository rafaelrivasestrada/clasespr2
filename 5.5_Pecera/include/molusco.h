/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#ifndef MOLUSCO_H
#define MOLUSCO_H
#include <habitante.h>

class Molusco : public Habitante{
    private:
        int peso;
    public:
        Molusco();
        ~Molusco(){};
        ///Observador
        int verPeso()const;
        ///Modificadores
        void asignarPeso(int);
        void asignarTipo(clas);

};

#endif