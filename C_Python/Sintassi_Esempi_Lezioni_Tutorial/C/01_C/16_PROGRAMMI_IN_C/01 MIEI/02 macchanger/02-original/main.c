#include <stdio.h>
#include <stdlib.h>
#include "mac.c"

int main(){

   char *c = NULL;
   spoof(c);
   char * t = NULL;
   printf("Inserisci Un Tasto Per Continuare : ");
   scanf("%s", &t);
   return 0;
}
