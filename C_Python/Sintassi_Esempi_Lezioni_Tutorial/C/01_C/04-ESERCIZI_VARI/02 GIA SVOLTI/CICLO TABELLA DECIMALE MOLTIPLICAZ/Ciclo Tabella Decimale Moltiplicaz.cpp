#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	
	int n = 1;
	
	printf("\n\n\t%-8s%-8s%-8s%-8s%", "N", "10*N", "100*N", "1000*N\n\n");       // %- DA UN DISTACCO STRUTTURANDO L ORDINE DELLE PAROLE CHE ANDRA A STAMPARE
	                                                                            // IN SEGUITO IN QUESTO CASO COME DA TITOLO "N 10*N 100*N 1000*N.
																			   // 8s% NON SONO ALTRO CHE : 8 IL NUMERO DI SPAZI DI TABULAZIONE,
	                                                                          //  ED s% NON E' ALTRO CHE LA SPECIFICA DI CONVERSIONE IN STRINGA PER POI STAMPARE 
	                                                                         // APPUNTO L' OUTPUT DELLE PAROLE DI SEGUITO QUI SOPRA RIPORTATE COME DA TITOLO.
	
	while(n <= 10){ printf("\t%-8d%-8d%-8d%-8d\n", n, 10*n, 100*n,  1000*n); // INIZIALIZZAZIONE CICLO WHILE, n MAGGIORE DI 10 QUINDI FINCHE n NON SUPERA O ARRIVA
	        n+=1; }                                                         // FINO A 10 printf - STAMPAMI ("\t%-8d%-8d%-8d%-8d\n", n, 10*n, 100*n,  1000*n);
	                                                                       // 8d% NON SONO ALTRO CHE : 8 GLI SPAZI TRA UNA COLONNA DI CIFRE E L ALTRA
	getch();                                                              // INCREMENTATE DI 1 GRAZIE AL CICLO WHILE CHE SI RIPETE MENTRE d% SONO LE CIFRE
	return 0;}                                                           // INCREMENTATE DAL CICLO E MESSE IN COLONNA GRAZIE A \t E AD %- CHE LE ORDINA DANDOGLI
	                                                                    // UNA STRUTTURA BEN PRECISA. A SEGUIRE, GRAZIE ALLA DICHIARAZIONE DELLA VARIABILE n
																	   // DICHIARATA SULL' ULTIMO printf DI SEGUITO DENTRO IL WHILE : , n, 10*n, 100*n,  1000*n);
																	  // GRAZIE A QUESTE MOLTIPLICAZIONI MOLTIPLICANDO NEL CICLO PRIMA 10 X N (DOVE N VARRA' 1)
																	 // POI ANCORA 100 X N E POI 1000 X N, E GRAZIE AL PEZZO DI CODICE n+=1; } IL CICLO
																	// EFFETTUERA' UN INCREMENTO DI + 1 AL RISULTATO DELLE MOLTIPLICAZIONI QUI APPENA ELENCATE 
																   // CHE NEL PROSSIMO GIRO DI ITERAZIONE DI CICLO A SEGUIRE SI MOLTIPLICHERA' PER N CHE VARRA'
																  // SEMPRE 1, AD ESEMPIO 100 X N (100 X 1 = 100) DOPODICHE GRAZIE A n+=1; } E A UN ALTRO
																 // GIRO DI ITERAZIONE DI CICLO SI RIPETERA' CRESCENDO DI 1 QUINDI INVECE DI 100 X N 
															    // SARA' CRESCIUTO E QUINDI SARA' DIVENTATO 200 X N (200 X 1 = 200) POI 300 X 1...E COSI VIA...
