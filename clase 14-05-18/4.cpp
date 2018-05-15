/**
 * @author Luis Adolfo Ramirez
 * @file 4.cpp
 * @brief Elaboración de la tarea 4
*/

#include<iostream>
#include<fstream>

int main()
{
	std::ifstream entrada("1.txt");
	std::ofstream salida;
	int n,nums,resto;
	std::string s;
	int a;

	do
	{
		std::cout<<"Cantidad de archivos que quiere: ";
		std::cin>>n;//n: cantidad de archivos
		if(n>100) std::cout<<"La cantidad de archivos debe ser menor o igual que 100\n"<<std::endl;

	}while(n>100);

	nums = 100/n;
	resto = 100%n;
	
	for(int i=0;i<n-1;i++)
	{
		//**LO MAS NORMAL**
		//std::cout<<"Escriba el nombre del archivo "<<i+1<<": ";
		//std::cin>>s;
		
		//**Pero yo preferí esto:**
		s="4_";
		s.insert(s.length(),std::to_string(i+1));
		s.insert(s.length(),".txt");

		salida.open(s);
		for(int j=0;j<nums;j++)
		{
			if(j!=0) salida<<"\n";
			entrada>>a;
			salida<<a;
		}
		salida.close();
	}
	//**LO MAS NORMAL**
	//std::cout<<"Escriba el nombre del archivo "<<n<<": ";
	//std::cin>>s;

	//**Pero yo preferí esto:**
	s="4_";
	s.insert(s.length(),std::to_string(n));
	s.insert(s.length(),".txt");
	salida.open(s);
	for(int i=0;i < nums + resto ;i++)
	{
		if(i!=0) salida<<"\n";
		entrada>>a;
		salida<<a;
	}
	

	entrada.close();
	return 0;
}
