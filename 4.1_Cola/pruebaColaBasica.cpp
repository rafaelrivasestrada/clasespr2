/**
 @brief programa de prueba del primer TDA Cola en su versión básica

 @ author R. Rivas rafael@ula.ve
 @ date Abril, 2015
*/
#include<iostream>
#include<cola.h>

int imprimeCola(CCola);

int main(){
    CCola cola1;
    CCola cola2;
    float vDatos[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,0.0};
    float datoAux;
    int i;


    std::cout << "Programa de prueba Clase Cola, dinámica, no paramétrica\n";
    std::cout << "Está la cola vacía? " <<  cola1.estaVacia() 
       << " (true: Si, false: No)\n";

    std::cout << "Agregando elementos a la cola:\n";
    for(i = 0; i < 10; i++){
        std::cout << "Dato " << i << " : " << vDatos[i] << '\n'; 
        if(cola1.meteEnCola(vDatos[i]))
           std::cerr << "Error al agregar elementos a la cola\n";
    }

    cola2 = cola1;

    std::cout << "\n\nSacando elementos de la cola: ";

    while(!cola1.estaVacia()){
        datoAux = cola1.verInicio();
        if(cola1.sacarDeCola()){
           std::cerr << "Error al sacar elementos a la cola\n";
           break;
        }
        std::cout << datoAux << ' ';
    }
    
    std::cout << std::endl;

    imprimeCola(cola2);
    
    return(0);
}

int imprimeCola(CCola p){
   CCola cola_auxiliar;
   float datoAux;

   cola_auxiliar = p;

   std::cout << "Mostrar datos de la cola desde una función: ";
   while(!cola_auxiliar.estaVacia()){
     datoAux = cola_auxiliar.verInicio();
     if(cola_auxiliar.sacarDeCola()){
        std::cerr << "Error al sacar elementos a la cola\n";
         break;
     }
     std::cout << datoAux << ' ';
    }
    
    std::cout << std::endl;

    return(0);
}
