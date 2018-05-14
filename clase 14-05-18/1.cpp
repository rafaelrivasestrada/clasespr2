/**
 * @author Luis Adolfo Ramirez
 * @file 1.cpp
 * @brief Elaboración de la tarea 1
*/

#include<iostream>
#include<cstdlib>
#include<fstream>
int main()
{
    std::ofstream arch("./1.txt");
    for(int i=0;i<100;i++)
    {
        if (i!=0) arch<<std::endl;
        arch<<std::rand();
    }
    arch.close();
    return 0;
}