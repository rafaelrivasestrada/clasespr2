/**
 @brief programa de prueba del TDA Cola en su versión STD

 @ author R. Rivas rafael@ula.ve
 @ date Abril, 2015
*/
#include<iostream>
#include<queue>

int imprimeCola(std::queue<float>);

int main(){
   	std::queue<float> cola1;
   	std::queue<float> cola2;
    float vDatos[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,0.0};
    float datoAux;
    int i;


    std::cout << "Programa de prueba Clase Cola STD\n";
    std::cout << "Está la cola vacía? " <<  
	   (cola1.empty() ? " si " : " no ")  << '\n';

    std::cout << "Agregando elementos a la cola:\n";
    for(i = 0; i < 10; i++){
        std::cout << "Dato " << i << " : " << vDatos[i] << '\n'; 
        cola1.push(vDatos[i]);
	}

    cola2 = cola1;

    std::cout << "\n\nSacando elementos de la cola: ";

    while(!cola1.empty()){
        datoAux = cola1.front();
        cola1.pop();
        std::cout << datoAux << ' ';
    }
    
    std::cout << std::endl;

    imprimeCola(cola2);
    
    return(0);
}

int imprimeCola(std::queue <float> p){
   std::queue <float> cola_auxiliar;
   float datoAux;

   cola_auxiliar = p;

   std::cout << "Mostrar datos de la cola desde una función: ";
   while(!cola_auxiliar.empty()){
     datoAux = cola_auxiliar.front();
     cola_auxiliar.pop();
     std::cout << datoAux << ' ';
    }
    
    std::cout << std::endl;

    return(0);
}
