/**
 * @name Jeremy Roa
 * @brief Practica Particiones Lab
 * @date 14/05/2018
**/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
/// @brief Crea un archivo con 100 numeros aleatorios
void parte1(){
    std::ofstream fsalida("part1.txt");
    for(int i = 1;i <= 100;i++){
        if(i == 100)
            fsalida << rand()%100;
        else
            fsalida<<rand()%100<<'\n';
    }
    fsalida.close();
}
/// @brief crea dos archivos uno con num par y el otro con num impar a partir de part1.txt
void parte2(){
    std::ifstream fentrada("part1.txt");
    std::ofstream fpar("par.txt"), fimpar("impar.txt");
    while(not fentrada.eof()){
        int t;
        fentrada >> t;
        if(t % 2 == 0)
            fpar << t << '\n';
        else
            fimpar << t << '\n';
    }
    fentrada.close();
    fpar.close();
    fimpar.close();
}
///@brief Divide el archivo part1.txt en dos 60 num para uno y el resto para el otro
void parte3(){
    std::ifstream fentrada("part1.txt");
    std::ofstream fsalida;
    int t, i = 0;
    while(not fentrada.eof()){
        fentrada >> t;
        if(i == 0)
            fsalida.open("arch60.txt");
        if(i == 60){
            fsalida.close();
            fsalida.open("arch40.txt");
        }
        fsalida << t << '\n';
        i++;
    }
    fsalida.close();
    fentrada.close();
}
///Crea X archivos en base a la cantidad de numeros
///que quiere que tenga el archivo.
///Recibe la cantidad de numeros.
void parte4(int cant){
    std::ifstream fentrada("part1.txt");
    std::ofstream *fsalida, fout;
    int n = cant;
    int t = 100 / n;
    int ban = 0;
    int i = 0;
    int aux;
    std::string file = "file";
    /*if(100 % n == 0)
        fsalida = new std::ofstream[t]; ///Asi tambien funciona
                                        ///Quitando el comentario a fsalida y
                                        ///colocandoselo al fout
    else
        fsalida = new std::ofstream[t+1];*/
    while(!fentrada.eof()){
        if(ban == 0){
            file += std::to_string(i+1);
            file += ".txt";
            fout.open(file);
            //fsalida[i].open(file); 
        }
        if(ban != n){
            fentrada >> aux;
            fout << aux << '\n';
            //fsalida[i] << aux << '\n';
            ban++;
        }else{
            fout.close();
            //fsalida[i].close();
            i++;
            file = "file";
            ban = 0;
        }
    }
    fentrada.close();
    //delete[] fsalida;
}
int main(){
    parte1();
    parte2();
    parte3();
    parte4(3);
    return 0;
}