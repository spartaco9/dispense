#include <stdio.h>                                         // includo la funzione di input e output nelle librerie standard del linguaggio c
#include <stdlib.h>                                       // includo tutte le librerie standard del linguaggio c

main ()                                                  // dichiaro la funzione principale primaria main di apertura programma
{                                                       // apro graffa di inizio sessione.
int c,nl;                                              // dichiaro variabili c e nl
	
nl = 0;                                              // assegno valore 0 a variabile nl


while ((c = getchar()) != EOF)                     // inizio ciclo loop while - getchar Fino a quando non premi invio il risultato di cio' che stai digitando 
                                                  // non viene mostrato in output. != diverso da zero - EOF (end of file = fine del testo, cioe se diverso da zero 
											     // solo premendo il tasto ctrl + z il programma
											    // contera' il risultato finale dei new line digitati nel programma e quindi tutte le linee a capo di stringa 
											   // che si sono battute con il tasto invio.


if (c=='\n')                                 // se c e' uguale a new line (nuova linea quindi spazio a capo)
++nl;                                       // incremento variabile nl di +1.
printf("%d\n", nl);                        // stampo in decimali le linee battute con invio ad ogni riga prima di cliccare il tasto ctrl + z, 
                                          // e mostro la variabile nl incrementata col while per mezzo di ogni battitura con il tasto invio 
										 // (che in questo caso sono i new line battuti con invio e quindi i new line contati)

system("PAUSE");                       // mi servo della funzione di libreria standard #include <stdlib> per fare in modo che appena premo ctrl + z 
                                      // il programma si fermi e attenda almeno che io legga il risultato delle righe a capo e quindi 
								     // dei new line battuti con invio, aspettando che io prema almeno l' ultimo dato di input con il tasto invio per chiudere 
									//e terminare la sessione del mio programma e evitare che questo accada prima, senza nemmeno avere avuto il tempo 
								   //di leggerne il risultato. 


}                               // chiudo graffa di termine sessione. FINE !!
