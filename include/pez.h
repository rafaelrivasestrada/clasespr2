
/*!
 *   @file  pez.h
 *   @brief 
 *   Clase Pez derivada de la clase Habitante;
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
#ifndef CLASSPEZ
#define CLASSPEZ

#include<habitante.h>

class Pez: public Habitante
{
   unsigned int edad; // Edad en meses
   
   public:
   unsigned int verEdad() const
   {
	  return(this->edad);
   }

   unsigned int asignarEdad(unsigned int e)
   {
		return(this->edad = e);
   }
};

#endif
