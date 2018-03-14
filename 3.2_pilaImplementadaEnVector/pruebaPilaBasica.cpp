
 /**
 @brief programa de prueba del primer TDA Pila en su versión básica 

 @ author R. Rivas rafael@ula.ve
 @ date Octubre, 2015
*/
#include<iostream>
#include<pila.h>

int imprimePila(nsPila::CPila);

int main(){
   nsPila::CPila pila1;
   nsPila::CPila pila2;
   float vDatos[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,0.0};
   float datoAux;
   int i;


   std::cout << "Prueba de pila soportada con un vector\n";
 std::cout << "Está la pila vacía? " <<  pila1.estaVacia() 
       << " (true: Si, false: No)\n";

   std::cout << "Agregando elementos a la pila:\n";
   for(i = 0; i < 10; i++){
        std::cout << "Dato " << i << " : " << vDatos[i] << '\n'; 
     if(pila1.meteEnPila(vDatos[i]))
           std::cerr << "Error al agregar elementos a la pila\n";
   }

   pila2 = pila1;

   std::cout << "\n\nSacando elementos de la pila: ";

   while(!pila1.estaVacia()){
     datoAux = pila1.verTope();
      if(pila1.sacarDePila()){
         std::cerr << "Error al sacar elementos a la pila\n";
           break;
      }
      std::cout << datoAux << ' ';
  }
    
  std::cout << std::endl;

  imprimePila(pila2);
    
  return(0);
}

int imprimePila(nsPila::CPila p){
   nsPila::CPila pila_auxiliar;
   float datoAux;

   pila_auxiliar = p;

   std::cout << "Mostrar datos de la pila desde una función: ";
   while(!pila_auxiliar.estaVacia()){
     datoAux = pila_auxiliar.verTope();
     if(pila_auxiliar.sacarDePila()){
        std::cerr << "Error al sacar elementos a la pila\n";
         break;
     }
    std::cout << datoAux << ' ';
  }
    
  std::cout << std::endl;

  return(0);
}
