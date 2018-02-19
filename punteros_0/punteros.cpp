/*
 * =========================================================================
 *
 *       Filename:  p2CPP.cpp
 *
 *    Description:  Prueba de punteros
 *
 *        Version:  1.0
 *        Created:  19/11/15 08:21:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author: R. Rivas 
 *   Organization:  
 *
 * =========================================================================
 */

#include <iostream>


int main() {
  int *a;
  int *b;
  int *c;
  int *d;

  // Asignar memoria
  a = new int;
  b = new int;
  c = new int;

  if (( a == 0) || (b == 0) || (c == 0)){
    std::cerr << "Error en la búsqueda de memoria\n";
    return(1);
  }

  std::cout << "a = ";
  std::cin >> *a; // Porqué  usa *a?
  std::cout << "b = ";
  std::cin >> *b; 

  *c = *a + *b;
 // Probar: 
 // c = a + b;
 // c = *a + *b;
 // c = &a + &b; 

 d = c;

 std::cout << "&a = " << &a << ", a = " << a << ", *a = " << *a << "\n";
 std::cout << "&b = " << &b << ", b = " << b << ", *b = " << *b << "\n";
 std::cout << "&c = " << &c << ", c = " << c << ", *c = " << *c << "\n";
 std::cout << "&d = " << &d << ", d = " << d << ", *d = " << *d << "\n";

 return(0);
}
