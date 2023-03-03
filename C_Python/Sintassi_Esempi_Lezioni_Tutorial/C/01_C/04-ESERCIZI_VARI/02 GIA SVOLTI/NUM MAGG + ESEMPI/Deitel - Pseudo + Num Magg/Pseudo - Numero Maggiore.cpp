#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>                                                             // Includiamo le varie funzioni della libreria standard di
                                                                              // Input/Output Del Linguaggio C.

int main()                                                                  // Funzione Main di start - inizio programma.
{                                                                          // Aperta graffa (apertura - inizio del corpo del programma).
	
	int contatore=0, numero=0, maggiore=0;                               // Dichiarazione delle tre variabili con azzeramento valore.
	
	while(contatore < 10)                                              // Finche variabile "contatore" è minore al valore 10
	                                                                  // (esegui istruzioni successive che tra poco andremo a vedere)...
	
	{                                                               // Aperta graffa (apertura - Inizio del Corpo ciclo While = Finchè)
	
	                                                              // Inizio istruzioni successive riportate qui sotto a seguire...
	
	  contatore++;                                              // Finche' variabile "contatore" è minore a 10
	                                                           // fai crescere "contatore" di 1 valore e ripetilo ad ogni giro di ciclo
	                                                          // che viene eseguito.
	  
	  
		printf("\n   (Immettere Il %d Numero) : ", contatore);  // stampami il valore di contatore che cresce e mostramelo seguito da una
		                                                       // stringa di caratteri di testo racchiusa da parentesi tonde che mi scrive
		                                                      // (Immettere Un Numero) seguita da due punti finali.
		
		
		scanf("%d", &numero);                               // Registrami tutte le cifre che immetto in input nella variabile "numero"                                                      
	
	
	if(numero > maggiore)                                             // Se ogni qualvolta che la variabile "numero" sarà maggiore
		maggiore=numero;}                                            // Alla variabile "maggiore", che inizialmente varrà 0 e che registrerà
		printf("\n\n\n   Il Numero Vincente E' = %d ", maggiore);   // Il valore della variabile "numero" ad ogni giro di ciclo
		                                                           // (Perche c e' il While) e successivamente si ripeterà
		                                                          // Per  ogni giro del ciclo, registrando cosi il valore
                                                                 // Del numero maggiore rispetto a quello del numero precedente,
		                                                        // Assegna alla variabile "maggiore" il valore di "numero"
		                                                       // Per ogni giro di ciclo fino a che non avrete registrato il valore
		                                                      // Piu grande di tutti e quindi sara' effettivamente quello maggiore.

    printf("\n\n\n Premere Un Tasto Per Terminare...");     // Stampami la stringa "Premere Un Tasto Per Terminare"

    getch();                                              // Funzione che fa rimanere aperto in esecuzione il programma
                                                         // fino a che non si preme un tasto qualsiasi da tastiera.
	
	return 0;                                          // Al termine del programma ci avverte degli errori presenti, 
	                                                  // se corretto ritorna a 0.  

}                                                   // Chiusa graffa (chiusura - fine del corpo del programma).
