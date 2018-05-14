#include<iostream>
#include<fstream>

int main()
{
    std::ifstream entrada("1.txt");
    std::ofstream salida;
    int n,N=0;
    long a;
    int R;
    std::string s;
    do
    {
        std::cout<<" (1) Crear un archivo"<<std::endl;
        std::cout<<" (2) Salir"<<std::endl;
        std::cin>>R;
        switch(R)
        {
            case 1:
                std::cout<<" Nombre del archivo: ";
                std::cin>>s;
                salida.open(s);
                std::cout<<" Cantidad de numeros: ";
                std::cin>>n;
                N=N+n;
                if(n>100)
                {
                    std::cout<<"Demasiados numeros\n";
                    break;
                }
                if(N>100)
                {
                    std::cout<<"Se acabaron los numeros\n";
                    break;
                }
                for(int i=0;i<n;i++)
                {
                    if (i!=0) salida<<std::endl;
                    entrada>>a;
                    salida<<a;
                }
                salida.close();
                break;
            case 2:
                break;
            default:
                std::cout<<"Esa no es una opcion\n";
        }
    }
    while(R!=2);

    entrada.close();

    return 0;
}
