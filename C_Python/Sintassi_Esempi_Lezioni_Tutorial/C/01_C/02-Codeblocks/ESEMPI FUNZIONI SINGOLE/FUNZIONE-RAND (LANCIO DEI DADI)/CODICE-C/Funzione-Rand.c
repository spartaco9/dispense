#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

int i;
int lanciodeidadi;
int mossa;
int decisione;

printf("\n\n   Premere Un Numero Per Giocare, 0 Per Uscire : ");
scanf("%d",&decisione);

while(decisione != 0){

printf("\n\n   Immettere 1 Per Lanciare I Dati, 0 Per Uscire : ");
scanf("%d", &mossa);

if(mossa != 0){

for(i=0; i<12; i++);
   srand(time(NULL));
   lanciodeidadi = (rand() %12) + 2;
printf("\n\n                  \t%d\n", lanciodeidadi);}

else{

return 0;}}

getchar();
return 0;}
