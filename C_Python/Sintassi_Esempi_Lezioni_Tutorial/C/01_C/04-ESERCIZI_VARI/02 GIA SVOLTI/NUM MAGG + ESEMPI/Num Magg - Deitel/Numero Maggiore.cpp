#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	int contatore=0, numero=0, maggiore=0;
	
	while(contatore < 10){ 
	  contatore++;
		printf("\n   (Immettere Il %d Numero) : ", contatore);
		scanf("%d", &numero);
	if(numero > maggiore)                                             // Se ogni qualvolta che la variabile "numero" sarà maggiore
		maggiore=numero;}                                            // Alla variabile "maggiore", che inizialmente varrà 0 e che registrerà
		printf("\n\n\n   Il Numero Vincente E' = %d ", maggiore);   // Il valore della variabile "numero" ad ogni giro di ciclo
		                                                           // (Perche c e' il while) e successivamente si ripeterà
		printf("\n\n\n Premere Un Tasto Per Terminare...");       // Per  ogni giro del ciclo, registrando cosi il valore
		                                                         // Del numero maggiore rispetto a quello del numero precedente,
		getch();                                                // Assegna alla variabile "maggiore" il valore di "numero"
		return 0;}                                             // Per ogni giro di ciclo fino a che non avrete registrato il valore
		                                                      // Piu grande di tutti e quindi sara' effettivamente quello maggiore.
