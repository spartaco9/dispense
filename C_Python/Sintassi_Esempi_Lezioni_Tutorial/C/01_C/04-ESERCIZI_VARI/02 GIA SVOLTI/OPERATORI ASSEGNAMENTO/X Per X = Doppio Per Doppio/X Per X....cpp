#include <stdio.h>
#include <conio.h>

int main(){
	
	int x = 1, total = 0, y;                                    // Si parte Da 1 E Da 0 Per tutte Le variabili presenti
	
	printf("\n\n");                                 
	
	while (x<=10){                                           // La X Cresce Fino Ad Aumentare Fino A 10
		
		y=x*x;                                             // Si Sommano Le 2 X Che All' Inizio Valgono 1 Quindi 1* 1 = 1
		                               
		printf("     %d\n", y);                            // E Ne Stampa Il risultato Con Questo printf Che Calcola Solo X * X
		
		total+=y;                                      // E Che Senza Questo total+=y Funzionerebbe Lo Stesso Perfettamente
		
		++x;                                         // Perche Serve Solo Ad Incrementare La printf Del Totale Finale. ++x Invece Serve
	}
	                                               //  Solo Ad Incrementare E Far Crescere La X Di Un 1 Valore Quindi Quando Il Ciclo Si Ripete
	printf("\n\n\n  Il Totale E' = %d ", total);
	                                             // Al èposto Di 1 * 1 = 1 La X sara Diventata 2 E Sara' 2 * 2 = 4, Poi 3 * 3 = 9 E Cosi Via.
	getch();
	return 0;                                  // L' Ultima printf Che vediamo Qui Sopra Alla Fine Non Fa Altro Che Calcolarne Il Valore Tot
	
}                                            // Di Tutti I Numeri Moltiplicati Per Se Stessi.
