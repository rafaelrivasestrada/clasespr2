#include<iostream>
#include<pila.h>
#include<stdlib.h>  // Para usar con la función rand
#include<time.h>  // Para usar con la función time

#define NRO_PRUEBAS 10

int main() {
   CPila<int> pila1;
   int i;
   int x;

   srand((unsigned)time(NULL));

   for(i = 0; i < NRO_PRUEBAS; i++){
      x = (int)(((float)rand()/(float)RAND_MAX)*40 + 1);
      std::cout << "Guardando en la pila el número " << x <<'\n';
      pila1.mete(x);
   }



   for(i = 0; i < NRO_PRUEBAS; i++){
      if (pila1.vacia())
         break;
      x = pila1.verTope();
      std::cout << "Sacando de la pila el número " << x <<'\n';
      pila1.saca();
   }


   std::cout << "Agregar las lineas para probar la pila con float, std::string y char*\n";

   return(0);
}
 
   
