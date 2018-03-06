#include<iostream>
#include<semaforo.h>
#include<string>

std::string int2Color(int);

int main()
{
    Semaforo s1;

    s1.set_Cambiar(2);

    std::cout << "La luz en el semaforo es:  " << int2Color(s1.ver_Estado()) << "\n";

    return(0);
}

std::string int2Color(int c)
{
    switch (c) 
    {
        case 0: 
            return("Rojo");
            break;
        case 1: 
            return("Amarillo");
            break;
        case 2: 
            return("Verde");
            break;
        default:
         return("Dañado !");
    }
}