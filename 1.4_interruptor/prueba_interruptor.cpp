#include<iostream>
#include<interruptor.h>


int main()
{
   CInterruptor i1;
   i1.asignarPosicion(1024);
   CInterruptor i2(i1);

   std::cout << "i1: " << i1.verPosicion() << "\n";
   std::cout << "i2: " << i2.verPosicion() << "\n";

   //i2.posicion =-2;

}


