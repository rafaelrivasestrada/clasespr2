
/*!
 *   @file  habitante.h
 *   @brief  Clase Habitante: describe atributoś básicos 
 *   de un ahbitante de la pecera. 
 *  
 *  
 *  
 *  @author  Rafael Rivas Estrada, rafael@ula.ve
 *  @version 1.0
 *  
 *  @internal
 *       Created:  21/04/18
 *      Revision:  none
 *      Compiler:  g++
 *  Organization:  
 *  
 *  This source code is released for free distribution under the terms of 
 *  the GNU General Public License as published by the Free Software 
 *  Foundation.
*/
#ifndef HABITANTE
#define HABITANTE

#include <string>
#include <tiposEnumerados.h>


class Habitante 
{
   TipoHabitante tipo;
   std::string nombre;

   public:

   TipoHabitante verTipo() const
   {
	  return(this->tipo);
   }

   TipoHabitante asignarTipo(const TipoHabitante t)
   {
	  return(this->tipo = t);
   }

   std::string verNombre() const
   {
	  return(this->nombre);
   }

   std::string asignarNombre(const std::string n)
   {
	  return(this->nombre = n);
   }
};

#endif
