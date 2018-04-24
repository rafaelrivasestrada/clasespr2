/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#ifndef PEZ_H
#define PEZ_H
#include <habitante.h>

class Pez : public Habitante{
    private:
        int edad;
    public:
        Pez();
        ~Pez(){};
        ///Observadores
        int verEdad()const;
        ///Modificadores
        void asignarEdad(int);
        void asignarTipo(clas);
};


#endif