#include <stdio.h>
#include <stdlib.h>
#include "anon.c"

int main(){

   char *c = NULL;
   anonsurf(c);
   char * t = NULL;
   printf("Inserisci Un Tasto Per Continuare : ");
   scanf("%s", &t);
   return 0;
}
