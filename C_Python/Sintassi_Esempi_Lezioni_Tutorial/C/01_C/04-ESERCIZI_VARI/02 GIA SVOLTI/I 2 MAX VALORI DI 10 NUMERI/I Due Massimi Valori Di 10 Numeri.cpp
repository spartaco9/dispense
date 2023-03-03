#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	int contatore, maggiore, minore, numero;
	
	contatore = 1;
	
	printf("\n\n   Inserire %d numero : ", contatore);
	scanf("%d", &maggiore);
	contatore +=1;
	
	printf("   Inserire %d numero : ", contatore);
	scanf("%d", &minore);
	contatore+=1;
	
	/* scambia i valori (in Maggiore il massimo dei due) */
	
	if(maggiore < minore){      //se maggiore è minore di minore
		numero = maggiore;     // numero prende valore da maggiore e diventa minore
		maggiore = minore;    // maggiore prende valore da minore e diventa maggiore
		minore = numero;}    // minore prende valore da numero che a sua volta era diventato il minore diventando anch'esso tale.
		
	while(contatore <= 10){                                // affinche contatore è minore uguale di 10 e non ci arrivi
		printf("   Inserire %d numero : ", contatore);    // stampami tutte e 10 le cifre del contatore inserendole nel testo di stringa
		scanf("%d", &numero);                            // dopodiche assimilami con scanf il valore e inseriscilo nella variabile numero
		
		if(numero > maggiore){                         // se numero sarà maggiore di maggiore (e maggiore minore)
			minore = maggiore;                        // minore prenderà valore da maggiore (che era il minore)
			maggiore = numero;}                      // e maggiore prenderà valore da numero (che era il maggiore)
			
		else if(numero > minore)                  // dopodiche se numero sarà maggiore di minore
			minore = numero;                     // minore prenderà il valore da numero (diventando il secondo numero meno maggiore del precedente)
			contatore +=1;}                     // e il contatore crescerà incrementando di un valore ad ogni ciclo che si ripete.
		    
	
	printf("\n\n   I Massimi Valori Sono %d & %d\n", maggiore, minore);  // stampami i massimi valori tra i numeri delle variabili maggiore e minore.
	
	getch();
	return 0;}
