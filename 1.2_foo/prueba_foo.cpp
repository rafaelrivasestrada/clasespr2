/********************************************
 @file prueba_foo.cpp
 *  PRUEBA DE EJECUCION DE CONSTRUCTORES
 *  Y DESTRUCTORES 
 *
 *  Se recomienda la ejecución de este programa linea a linea
 *  con la ayuda de un depurador, por ejemplo ddd
 *
 *  rafael@ula.ve
 ******************************************/

#include <foo.h>

int foo::n = 0;

foo funcion_1(foo obj_temp1) {
	std::cout << "FUNCION 1\n";
	return obj_temp1;
}

foo funcion_2(const foo& obj_temp2){
	std::cout << "FUNCION 2\n";
	return obj_temp2;
}

foo obj1;

int main(){
	foo obj2;
	static foo obj3;
	foo* obj4;
	foo* obj5;

	do {
		foo obj6;
		obj4 = new foo;
		obj5 = new foo;
	} while (0);
	
	funcion_1(obj2);
	delete obj5;
	funcion_2(obj2);
}
