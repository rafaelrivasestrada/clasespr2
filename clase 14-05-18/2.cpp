/**
 * @author Luis Adolfo Ramirez
 * @file 2.cpp
 * @brief Elaboración de la tarea 2
*/

#include<iostream>
#include<fstream>

int main()
{
    std::ifstream entrada ("1.txt");
    std::ofstream pares ("2_pares.txt");
    std::ofstream impares ("2_impares.txt");

    long i;

    while(!entrada.eof())
    {
        entrada>>i;
        if (i%2 == 0)
        {
            if(pares.tellp()!=0) pares<<"\n";
            pares<<i;
        }
        else
        {
            if(impares.tellp()!=0) impares<<"\n";
            impares<<i;
        }
    }

    entrada.close();
    pares.close();
    impares.close();

    return 0;
}