/*!
 *   @file  leeNumero.cpp
 *   @brief Programa simple que escribe un numero en un archivo tipo texto 
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
#include<string>

int main()
{
   std::ifstream archivo;
   int n;
   // std::string linea;

   archivo.open("datos.txt");
   if (archivo.fail())
   {
	  std::cerr << "Error: al abrir archivo\n";
	  return(1);
   }

   archivo >> n; 
   // Si se usa getline se debe leer una cadena de caracteres:
   // std::getline(archivo, string);

   std::cout << "Datos leido: " << n << '\n';

   archivo.close();

   return(0);
}
