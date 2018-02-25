/**
 @file lapsoTiempo.c
 @author R. Rivas rafael@ula.ve
*/
#include <lapsoTiempo.h>

void asignaLapsoTiempo(struct sLapsoTiempo *plp,int h, int m, int s){
 int aux;
 plp->hora = h;
 plp->minutos = m;
 plp->segundos = s;

 if ( s > 59 ){
   plp->segundos = s % 60;
   plp->minutos += (int)( s / 60 );
 }

 if ( plp->minutos > 59 ){
   aux = plp->minutos;
   plp->minutos = plp->minutos % 60;
   plp->hora += (int)( aux / 60 );
 }
 return;

}


void copiaLapsoTiempo(struct sLapsoTiempo *dst, struct sLapsoTiempo org){
 int aux;
 dst->hora = org.hora;
 dst->minutos = org.minutos;
 dst->segundos = org.segundos;

 if ( org.segundos > 59 ){
   dst->segundos = org.segundos % 60;
   dst->minutos += (int)( org.segundos / 60 );
 }

 if ( dst->minutos > 59 ){
   aux = dst->minutos;
   dst->minutos = dst->minutos % 60;
   dst->hora += (int)( aux / 60 );
 }
  return;
}

int verHora(struct sLapsoTiempo lp){
  return(lp.hora);
}

int verMin(struct sLapsoTiempo lp){
   return(lp.minutos);
}

int verSeg(struct sLapsoTiempo lp){
    return(lp.segundos);
}

void agregarLapsoTiempo(struct sLapsoTiempo* plp, struct sLapsoTiempo lpExtra){
 int aux;
 plp->hora += lpExtra.hora;
 plp->minutos += lpExtra.minutos;
 plp->segundos += lpExtra.segundos;

 if ( lpExtra.segundos > 59 ){
   plp->segundos = lpExtra.segundos % 60;
   plp->minutos += (int)( lpExtra.segundos / 60 );
 }

 if ( plp->minutos > 59 ){
   aux = plp->minutos;
   plp->minutos = plp->minutos % 60;
   plp->hora += (int)( aux / 60 );
 }

 return;

}
