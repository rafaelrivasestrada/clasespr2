/*  Ejemplo de uso simple del TDA Lapso de Tiempo

    rafael@ula.ve

*/
#include<lapsoTiempo.h>
#include<stdio.h>



int main() {
   struct sLapsoTiempo estudiar, comer, total;
   int h, m, s;
   // Inicializar en 0 el tiempo total acumulado
   asignaLapsoTiempo( &total, 0, 0, 0);

   printf("Introduzca el tiempo usado en estudiar especifidao en Horas, minutos y segundos: ");
   scanf("%d", &h);
   scanf("%d", &m);
   scanf("%d", &s);
   //asignaLapsoTiempo( &estudiar, 8, 59, 64);
   asignaLapsoTiempo( &estudiar, h, m, s);

   printf("Introduzca el tiempo usado en comer especifidao en Horas, minutos y segundos: ");
   scanf("%d", &h);
   scanf("%d", &m);
   scanf("%d", &s);
   //asignaLapsoTiempo( &comer, 0, 1, 4);
   asignaLapsoTiempo( &comer, h, m, s);


   copiaLapsoTiempo(&total, estudiar);

   agregarLapsoTiempo(&total, comer);

   printf("Tiempo total es %d horas, %d minutos %d seg\n", verHora(total), verMin(total), verSeg(total));

   return(0);

}
