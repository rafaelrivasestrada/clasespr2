
/*!
 *   @file  molusco.h
 *   @brief  
 *  
 *  <+DETAILED+>
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
#ifndef CLASSMOLUSCO
#define CLASSMOLUSCO

#include <habitante.h>


class Molusco: public Habitante 
{
   unsigned int  peso; // peso en gramos

   public:
   unsigned int verPeso() const
   {
	  return( this->peso );

   }

   unsigned int asignarPeso(unsigned int p)
   {
	  return ( this->peso = p );
   }
};

#endif
