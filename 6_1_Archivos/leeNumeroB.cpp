/*!
 *   @file  leeNumeroB.cpp
 *   @brief Programa simple que lee un numero en un archivo tipo no texto 
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
   std::ifstream archivo;
   int n;

   archivo.open("datos.dat", std::ios::binary);
   if (archivo.fail())
   {
	  std::cerr << "Error: al abrir archivo\n";
	  return(1);
   }

   archivo.read((char *) &n, sizeof(int));

   std::cout << "Datos leidos: " << n  << '\n';

   archivo.close();

   return(0);
}
