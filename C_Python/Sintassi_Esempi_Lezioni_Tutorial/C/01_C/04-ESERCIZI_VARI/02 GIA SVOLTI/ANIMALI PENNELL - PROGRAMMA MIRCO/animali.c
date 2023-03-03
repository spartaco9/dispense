#include <stdio.h>

int main(){

int scelta;

printf("\n   Premere 0 Se L Animale Scelto E' : Cavallo "
       "\n   Premere 1 Se L Animale Scelto E' : Dromedario "
       "\n   Premere 2 Se L Animale Scelto E' : Cane "
       "\n   Premere 3 Se L Animale Scelto E' : Gatto "
       "\n   Premere 4 Se L Animale Scelto E' : Pennellaccio Culo Ciupacapra "
       "\n\n   Digita Un Numero : ------>  ");

scanf("%d", &scelta);

switch(scelta){

  case (0) :
               printf("\n  L' Animale Scelto E' : Cavallo\n");
               break;

  case (1)  :
               printf("\n  L' Animale Scelto E' : Dromedario\n");
               break;

  case (2)  :
               printf("\n  L' Animale Scelto E' : Cane\n");
               break;

  case (3)  :
               printf("\n  L' Animale Scelto E' : Gatto\n");
               break;

  case (4)  :
               printf("\n  L' Animale Scelto E' : Pennellaccio Culo Ciupacapra\n");
               break;

  default  :

               printf("\n  Nessun Animale E' Stato Scelto\n");}


getchar();
return 0;}
