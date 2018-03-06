#include<semaforo.h>
    Semaforo::Semaforo()
    {
        this->luz=0;
    }
    Semaforo::Semaforo(int l)
    {
        if( (l == 0) || (l == 1) || (l == 2) ){
            this->luz=l;
        }
        return;
    }
    Semaforo::Semaforo(const Semaforo& p)
    {
        this->luz = p.luz;
    }

    int Semaforo::ver_Estado() const
    {
        return(this->luz);
    }

    void Semaforo::cambiar_Proximo()
    {
        this->luz=luz+1;
        if(this->luz==3)
        {
            this->luz=0;
        }
    }
    
    void Semaforo::set_Cambiar(int a)
    {
        if( (a == 0) || (a == 1) || (a == 2) ){
            this->luz=a;
        }
        return;
    }