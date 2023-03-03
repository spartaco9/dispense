// HEAP = (OVVERO IL MUCCHIO PER LE VARIABILI GLOBALI ESTERNE)

#include <stdio.h>
#include <stdlib.h>

int main(){

// STEACK = (PER LE VARIABILI INTERNE)

	int somma[4], somma2[4], cifra[4], critt[4], risultato;


    printf("\n   Inserire La Prima Cifra    :  ");
	scanf("%d", &cifra[0]);

	printf("\n   Inserire La Seconda Cifra  :  ");
	scanf("%d", &cifra[1]);

	printf("\n   Inserire La Terza Cifra    :  ");
	scanf("%d", &cifra[2]);

	printf("\n   Inserire La Quarta Cifra   :  ");
	scanf("%d", &cifra[3]);

      risultato=1;
      somma[0]=(cifra[0]+3)%10;
      somma[1]=(cifra[1]+3)%10;
      somma[2]=(cifra[2]+3)%10;
      somma[3]=(cifra[3]+3)%10;

      critt[0] = somma[2];
	  critt[1] = somma[3];
	  critt[2] = somma[0];
	  critt[3] = somma[1];


	printf("\n\n         %d   %d   %d   %d", critt[0], critt[1], critt[2], critt[3]);


	getchar();
	return 0;}
