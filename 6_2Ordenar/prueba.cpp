/**
 @brief Ejemplo simple de ordenar un vector usando std::sort
 @author R. Rivas
 @Date: Mayo, 2018
 **/
#include<algorithm>
#include<vector>
#include<iostream>
#include "claseA.h"

bool comparar(ClaseA x1, ClaseA x2){
   //return(x1 < x2);  // Ordenar por el campo por defecto
   return(x1.getB() < x2.getB());  // Ordenar por otro campo
}

int main(){
   ClaseA a;
   std::vector<ClaseA> v;

   a.set(1,4);
   v.push_back(a);

   a.set(2,3);
   v.push_back(a);

   a.set(3,2);
   v.push_back(a);

   a.set(4,1);
   v.push_back(a);

   std::sort(v.begin(), v.end(), comparar);

   for(int i = 0; i < 4; i++){
	  std::cout << v[i].getA() << ", " << v[i].getB() << '\n';
   }
  
   return(0);

}

