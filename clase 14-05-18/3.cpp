/**
 * @author Luis Adolfo Ramirez
 * @file 3.cpp
 * @brief Elaboración de la tarea 3
*/

#include<iostream>
#include<fstream>

int main()
{
    std::ifstream arch("1.txt");
    std::ofstream A("3_A.txt");
    std::ofstream B("3_B.txt");
    long a;
    for(int i=0;i<60;i++)
    {
        if (i!=0) A<<std::endl;
        arch>>a;
        A<<a;
    }

    for(int i=0;i<40;i++)
    {
        if (i!=0) B<<std::endl;
        arch>>a;
        B<<a;
    }

    arch.close();
    A.close();
    B.close();

    return 0;
}