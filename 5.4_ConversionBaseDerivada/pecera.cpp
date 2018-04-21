/*!
 *   @file  pecera.cpp
 *   @brief  Programa de prueba para conevrsión de clases usando 
 *   la versión  C++98
 *   Para usar for( : ) y class enum se debe usar C++11
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
#include<iostream>
#include<pez.h>
#include<molusco.h>
#include<planta.h>
#include <vector>

std::ostream& operator<<(std::ostream&, Habitante *);

int main()
{
   std::vector<Habitante *> vHabitantes;
   int i = 0;
   Habitante *pHabitante;
   Pez *pPez;
   Molusco *pMolusco;
   Planta *pPlanta;

   // Agregar Peces
   pPez = new Pez;
   pPez->asignarNombre("Platty Dorado");
   pPez->asignarEdad(12);
   pPez->asignarTipo(PEZ);
   vHabitantes.push_back((Habitante *) pPez);
   i++;

   pPez = new Pez;
   pPez->asignarNombre("Platty Rojo");
   pPez->asignarEdad(2);
   pPez->asignarTipo(PEZ);
   vHabitantes.push_back((Habitante *) pPez);
   i++;

   pPez = new Pez;
   pPez->asignarNombre("Neon");
   pPez->asignarEdad(8);
   pPez->asignarTipo(PEZ);
   vHabitantes.push_back((Habitante *) pPez);
   i++;

   // Agregar Molusco
   pMolusco = new Molusco;
   pMolusco->asignarNombre("Caracol Manzana");
   pMolusco->asignarPeso(10);
   pMolusco->asignarTipo(MOLUSCO);
   vHabitantes.push_back((Habitante *) pMolusco);
   i++;

   // Agregar Planta
   pPlanta = new Planta;
   pPlanta->asignarNombre("Cinta Rizada");
   pPlanta->asignarAltura(200);
   pPlanta->asignarTipo(PLANTA);
   vHabitantes.push_back((Habitante *) pPlanta);
   i++;

   pPlanta = new Planta;
   pPlanta->asignarNombre("Elodea");
   pPlanta->asignarAltura(120);
   pPlanta->asignarTipo(PLANTA);
   vHabitantes.push_back((Habitante *) pPlanta);
   i++;

   // Pruebas de acceso a los elemtos del vector
   unsigned int opc;
   bool sw = true;
   do 
   {
	  std::cout << "\n\n\t\tOPCIONES\n";
	  std::cout << "1.- Ver todos los habitantes de la Pecera\n";
	  std::cout << "2.- Ver todos los peces de la Pecera\n";
	  std::cout << "3.- Ver todos los moluscos de la Pecera\n";
	  std::cout << "4.- Ver todas las plantas de la Pecera\n";
	  std::cout << "Otro.- Salir\n";
	  std::cout << "\n\tSu opción: ";
	  std::cin >> opc;
	  switch (opc) {
		case 1:
		   //for(pHabitante : vHabitantes) esto es para std::C++11
		     for (int j = 0; j < i; j++)
			  std::cout << vHabitantes[j] << '\n';
		   break;
		 case 2:
		     for (int j = 0; j < i; j++)
			  if (vHabitantes[j]->verTipo() == PEZ)
				 std::cout << vHabitantes[j] << '\n';
		   break;
		  case 3:
		     for (int j = 0; j < i; j++)
			  if (vHabitantes[j]->verTipo() == MOLUSCO)
				 std::cout << vHabitantes[j] << '\n';
		   break;
		  case 4:
		     for (int j = 0; j < i; j++)
			  if (vHabitantes[j]->verTipo() == PLANTA)
				 std::cout << vHabitantes[j] << '\n';
		   break;
		  default:
		   sw = false;
	  } 

   } while(sw);

   
   for (int j = 0; j < i; j++)
	  delete vHabitantes[j];

   return(0);
} 

std::ostream& operator<<(std::ostream &salida, Habitante *p)
{
   salida << p->verNombre() << '\n';
   if (p->verTipo() == PEZ)
   {
	  salida << "Edad en meses: " << ((Pez *)(p))->verEdad() << '\n';
   } else
   {
	  if (p->verTipo() == MOLUSCO)
	  {
	  	salida << "Peso en gramos: " << ((Molusco *)(p))->verPeso() << '\n';
	
      }	else 
	  {
	  	salida << "Altura en mm: " << ((Planta *)(p))->verAltura() << '\n';
	  }
   }

   return (salida);
}
