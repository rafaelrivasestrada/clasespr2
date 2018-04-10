/*!
 *   @file  escribeNumeroB.cpp
 *   @brief Programa simple que escribe un numero en un archivo tipo no texto 
 *  
 *  
 *  @author  Rafael Rivas Estrada, rafael@ula.ve
 *  @version 1.0
 *  
 *  @internal
 *       Created:  10/04/18
 *      Revision:  none
 *      Compiler:  g++
 *  Organization:  
 *  
 *  This source code is released for free distribution under the terms of 
 *  the GNU General Public License as published by the Free Software 
 *  Foundation.
 */

#include<iostream>
#include<fstream>

int main()
{
   std::ofstream archivo;
   const int n = 2;

   archivo.open("datos.dat", std::ios::binary);
   if (archivo.fail())
   {
	  std::cerr << "Error: al crear archivo\n";
	  return(1);
   }

   archivo.write((char *) &n, sizeof(int));

   std::cout << "Datos escritos\n";

   archivo.close();

   return(0);
}
