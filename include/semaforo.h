#ifndef SEMAFORO_H
#define SEMAFORO_H

class Semaforo
{
    private:
        int luz; //0 -> rojo ; 1 -> amarillo ; 2 -> verde
    
    public:
        Semaforo();
        Semaforo(int);
        Semaforo(const Semaforo&);
        ~Semaforo(){};
        
        //los mètodos primero minùscila, luego Mayùscula

        int ver_Estado() const;
        void cambiar_Proximo();
        void set_Cambiar(int);
        
};

#endif //SEMAFORO