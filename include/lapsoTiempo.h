#ifndef LAPSOTIEMPO_H
#define LAPSOTIEMPO_H
/**
 @bfile lapsoTiempo.c
 @brief //Declaración del TDA Lapso de Tiempo y sus operacioones básicas
 @author  rafael@ula.ve
*/

struct sLapsoTiempo{
   int hora;
   int minutos;
   int segundos;
};

void asignaLapsoTiempo(struct sLapsoTiempo *, int, int, int);
void copiaLapsoTiempo(struct sLapsoTiempo *, struct sLapsoTiempo);

int verHora(struct sLapsoTiempo);
int verMin(struct sLapsoTiempo);
int verSeg(struct sLapsoTiempo);

void agregarLapsoTiempo(struct sLapsoTiempo*, struct sLapsoTiempo);


#endif
