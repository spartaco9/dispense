#include <stdio.h>
#include <stdlib.h>

int main(){

	int somma[4], somma2[4], cifra[4], critt[4];

	printf("\n   Inserire La Prima Cifra    :  ");
	scanf("%d", &cifra[0]);

	printf("\n   Inserire La Seconda Cifra  :  ");
	scanf("%d", &cifra[1]);

	printf("\n   Inserire La Terza Cifra    :  ");
	scanf("%d", &cifra[2]);

	printf("\n   Inserire La Quarta Cifra   :  ");
	scanf("%d", &cifra[3]);

	somma[0]=cifra[0]+7;
	somma[1]=cifra[1]+7;
	somma[2]=cifra[2]+7;
	somma[3]=cifra[3]+7;

	somma2[0]=somma[0]%10;
	somma2[1]=somma[1]%10;
	somma2[2]=somma[2]%10;
	somma2[3]=somma[3]%10;

	critt[0] = somma2[2];
	critt[1] = somma2[3];
	critt[2] = somma2[0];
	critt[3] = somma2[1];

	printf("\n\n         %d   %d   %d   %d", critt[0], critt[1], critt[2], critt[3]);


	getchar();
	return 0;}
