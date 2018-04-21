
/*!
 *   @file  planta.h
 *   @brief  Clase Planta
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
#ifndef CLASSPLANTA
#define CLASSPLANTA


#include <habitante.h>

class Planta: public Habitante
{
   unsigned int altura; // altura en mm

   public:
   unsigned int verAltura() const
   {
	  return( this->altura );

   }

   unsigned int asignarAltura(unsigned int p)
   {
	  return ( this->altura = p );
   }
};

#endif
