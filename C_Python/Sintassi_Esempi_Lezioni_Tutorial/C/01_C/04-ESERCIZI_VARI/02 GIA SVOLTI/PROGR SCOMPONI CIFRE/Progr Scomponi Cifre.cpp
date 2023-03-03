#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
int numero, pc, sc, tc, qc, Qc;

numero=pc, sc, tc, qc, Qc;

printf("\n\nINSERISCI UN NUMERO COMPOSTO DA 5 CIFRE...\n\n\n ");

system("PAUSE");

printf("\n\nInserire Prima Cifra E Clicca Invio     : ");
scanf("%d", &pc);

printf("Inserire Seconda Cifra E Clicca Invio   : ");
scanf("%d", &sc);

printf("Inserire Terza Cifra E Clicca Invio     : ");
scanf("%d", &tc);

printf("Inserire Quarta Cifra E Clicca Invio    : ");
scanf("%d", &qc);

printf("Inserire Quinta Cifra E Clicca Invio    : ");
scanf("%d", &Qc);

printf("\n\n%d   %d   %d   %d   %d", pc, sc, tc, qc, Qc);

getch() ;
return 0;
}
