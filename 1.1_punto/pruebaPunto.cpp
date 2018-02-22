/**************
 @file pruebaPunto.cpp
 @brief Prueba de la clase punto simple

 @date Sept, 10
*/

#include <iostream>
#include <punto.h>


int main(){
  CPunto p0; ///< Prueba del constructor por defecto
   CPunto p1(1,2); ///< Prueba del constructor auxiliar
   CPunto p2(p1); ///< Prueba del constructor de copia
   CPunto *p3; ///< Puntero a un objeto CPunto

   
   p0 = p1; ///< Prueba del operador de copia

   if ( p0 == p1 ) { ///< Prueba del operador de equivalencia
      std::cout << "El operador de copia es correcto\n";
   } else {
      std::cout << "El operador de copia no funciona\n";
   }

   p3 = &p2;

   std::cout << "p2 es (" << p2.verX() << ", " << p3->verY() << ")\n";

   p3 = new CPunto;  ///< ¿Cuál constructor es usado en esta instrucción ?

   p3->asignar(3,4);

   std::cout << "p3 es (" << p3->verX() << ", " << p3->verY() << ")\n";

   delete p3;

   return(0);
   
}

