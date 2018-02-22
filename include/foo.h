#include <iostream>
/**
 @file foo.h
*/

/**
 @brief Clase para comprobar los puntos de activación de constructores y 
 destructores en C++

 @date Enero, 2000
*/
class foo {
private:
	int dato;

public:
	static int n;
        /**
         Constructor por defecto
       */
	foo(){
		this->dato = ++n;
		std::cout << "CONSTRUCTOR, OBJETO:" << this->dato << '\n';
	}
        /**
         Constructor de copia
        */
	foo(const foo &){
		this->dato = ++n;
		std::cout << "CONSTRUCTOR DE COPIA, OBJETO:" << this->dato << '\n';
	}
        /**
         Destructor
        */
	~foo(){
		std::cout << "DESTRUCTOR, OBJETO:" << this->dato << '\n';
	}
};
