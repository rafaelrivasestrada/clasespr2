/********************************************
 * @brief Programa de prueba adaptado a la clase std::stack<T>
 * 
 * Marzo, 2018
 * ********************************************/

#include<iostream>
#include<stack>
#include<stdlib.h>  // Para usar con la función rand
#include<time.h>  // Para usar con la función time

#define NRO_PRUEBAS 10

int main() 
{
   std::stack<int> pila1;
   int i;
   int x;

   srand((unsigned)time(NULL));

   for(i = 0; i < NRO_PRUEBAS; i++){
      x = (int)(((float)rand()/(float)RAND_MAX)*40 + 1);
      std::cout << "Guardando en la pila el número " << x <<'\n';
      pila1.push(x);
   }



   for(i = 0; i < NRO_PRUEBAS; i++){
      if (pila1.empty())
         break;
      x = pila1.top();
      std::cout << "Sacando de la pila el número " << x <<'\n';
      pila1.pop();
   }


   std::cout << "Agregar las lineas para probar la pila con float, std::string y char*\n";

   return(0);
}
 
   
