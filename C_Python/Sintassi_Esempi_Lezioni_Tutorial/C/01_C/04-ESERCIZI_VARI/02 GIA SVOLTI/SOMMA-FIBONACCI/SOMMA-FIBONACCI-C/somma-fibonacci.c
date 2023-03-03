#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

int i=1, n, k, somma=1, sommak=1;

printf("Inserire Numero Positivo N : ");
scanf("%d", &n);

while(somma <= n){

printf("\nI Numeri Di N(i) Sono %d - Valore = ", i); //NON SOMMA GLI INDICI MA SOLO I VALORI

i++;
printf("%d", somma);

somma+=i;}

k=i-1;

printf("\n\nLa Somma Di N E' = %d\n", somma);

while(sommak <= k){

printf("\nI Numeri Di K(i) Sono %d - Valore = ", i);

i++;
printf("%d", sommak);
sommak+=i;}

printf("\n\nLa Somma Di K E' = %d\n", sommak);

getchar();
return 0;}
