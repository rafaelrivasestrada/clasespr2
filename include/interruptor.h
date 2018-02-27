#ifndef INTERRUPTOR_H
#define INTERRUPTOR_H
class CInterruptor
{
   private:
	  int posicion;

   public:
	  CInterruptor();
	  CInterruptor(const CInterruptor&);
	  ~CInterruptor();

	  int verPosicion() const;
	  void asignarPosicion(int);
};
#endif
