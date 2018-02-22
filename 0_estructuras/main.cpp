#include <iostream>
#include <struct_punto.h>

int main(){
   struct s_punto p1;
   struct s_punto *p2;

   p1.x = 1.0;
   p1.y = 2.0;

   p2 = cambiar_coordenadas(p1);
   std::cout << " Punto original: ";
   std::cout << " p1 (" << p1.x << ", " << p1.y << ") \n";

   std::cout << " Punto cambiado: ";
   std::cout << " p2 (" << p2->x << ", " << p2->y << ") \n";

   // En C
   // free(p2);
   //
   // En C++
   delete p2;

   return(0);
}
