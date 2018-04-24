/**
 * @author Jeremy Roa
 * @brief Creacion de las diferentes bibliotecas a partir del
 * archivo pecera.cpp que fue creado por Rafael Rivas Estrada
 * @date 22/04/2018
 */
#ifndef HABITANTE_H
#define HABITANTE_H
#include <iostream>
#include <stdexcept>
enum clas{PEZ,MOLUSCO,PLANTA};
class Habitante{
    private:
        std::string nombre;
    protected:
        clas tipo;
    public:
        ///Constructor por defecto
        Habitante();
        ///Destructor
        ~Habitante(){};
        ///Observadores
        std::string verNombre() const;
        clas verTipo()const;
        ///Modificadores
        void asignarNombre(std::string);
        virtual void asignarTipo(clas) = 0;


};


#endif