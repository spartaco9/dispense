#include <stdio.h>
#include <stdlib.h>
#define N 8                           // costante define di 8 elementi ancora non specificati


int main(){

    int i, j;                       // i = indice sinistro  // j = indice destro
    int m;                         //  m = mediano (centro - mezzo) che in questo caso è 5 perche i=0 + v[N]-1 = 7 / 2 = 3 e la terza posizione è 5
    int k;                        //   k = kiave o chiave
 
 /* v = vettore di N = 8 elementi tra cui i num. tra le graffe : {1, 3, 5, 8, 12, 13, 15, 32} */
    int v[N] = {1, 3, 5, 8, 12, 13, 15, 32};
    
    printf("\n\n  Inserisci Chiave : ");
    scanf("%d", &k);                          //acquisisci valore nella variabile k che è la chiave

    i=0;                                      // i dx viene inizializzato a 0
    j=N-1;                                   // N sarebbe la costante define iniziale di 8 elementi - 1 = 7 quindi fino al penultimo elemento

    do{m = (i+j)/2;                         // mediano è uguale a i sx + j dx diviso 2

        if(k > v[m])                      // se chiave k è maggiore di vettore di mediano(cioe 5)
            i = m+1;                     //  i sx = mediano + 1 (crescera avanzando a da sinistra a destra scartando tutti i risultati prima di m)
        
  // altrimenti j dx = mediano - 1 (decrescera' diminuendo da destra a sinistra scartando tutti i risultati dopo m quindi i maggiori)
        else j=m-1;}

        while((v[m] != k) && (i <= j)); // finche vettore di mediano sara diverso da chiave k e i sx sara' minore uguale di j dx

        if(v[m] == k)                  // se vettore di mediano sara uguale a chiave k
           
                       /* stampa valore chiave + m che è i+j/2 e quindi tutto il vettore m */
               printf("\n\n  Il Valore Chiave %d E' Stato Trovato Nella Posizione Numero %d\n\n ", k, m);

       else                                                                                              // senno
               printf("\n\n  Nessun Valore E' Stato Trovato\n\n ");                                     // stampami questo

        getchar();                                                    // pausa programma
        return 0;}                                                   // ritorna con valore zero
