#include <struct_punto.h>

struct s_punto *cambiar_coordenadas(struct s_punto p){
   struct s_punto *p_aux;
   
   // En C sería:
   //p_aux = (struct i_punto *) malloc( sizeof(struct s_punto));
   
   // En C++ es:
   p_aux = new struct s_punto;

   if (p_aux == 0 )
     return( 0 );

  p_aux->x = p.y;
  p_aux->y = p.x;

  return( p_aux );
}  
