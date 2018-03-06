#include<interruptor.h>
CInterruptor::CInterruptor()
{
   this->posicion = 0;

   return;
}

CInterruptor::CInterruptor(const CInterruptor& i)
{
    this->posicion = i.posicion;

	return;
}


CInterruptor::~CInterruptor(){}



int CInterruptor::verPosicion() const
{
   return(this->posicion);
}

void CInterruptor::asignarPosicion(int p)
{
	if (p == 0)
	   this->posicion = 0;
	else
	   this->posicion =1;

	return;
}
