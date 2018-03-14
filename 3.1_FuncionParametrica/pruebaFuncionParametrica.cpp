#include<iostream>
#include<string>
#include<stdlib.h>
#include<intercambiar.h>

int main()
{
    double x, y;
    std::string a, b;
    int j, k;

    x = 3.14;
    y = 9.1;
    a = "cadena: 12345";
    b = a.substr(8,2);
    j = atoi(b.c_str());
    k = atoi(a.substr(10,3).c_str());

    intercambiar(x,y);
    std::cout << "x: " << x << ", y: " << y << '\n';

    intercambiar(a,b);
    std::cout << "a: " << a << ", b: " << b << '\n';

    intercambiar(j,k);
    std::cout << "j: " << j << ", k: " << k << '\n';

    return(0);
}