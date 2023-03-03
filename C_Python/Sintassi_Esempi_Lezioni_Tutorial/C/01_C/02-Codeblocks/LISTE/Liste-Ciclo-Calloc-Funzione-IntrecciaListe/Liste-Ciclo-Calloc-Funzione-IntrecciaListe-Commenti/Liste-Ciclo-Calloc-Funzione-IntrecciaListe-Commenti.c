#include <stdio.h>       // Includo Lo Standard Input / Output Del Linguaggio C
#include <stdlib.h>     // Includo La Libreria Standard Del Linguaggio C
#include <string.h>    // Includo La Libreria Standard Di Stringhe Del Linguaggio C

struct nodo {             /* Dichiarazione Di Una Struttura A Nodo */
char *chiave;          // Dichiarazione Di Un Nodo char *point (*puntatore) Che Ho Chiamato Chiave, Quindi Un Puntatore Stringa
int data;                 // Dichiarazione Di Una Normalissima Variabile Intera Che Ho Chiamato data, Quindi Variabile Di Numeri
struct nodo *succ, *prec;}; //Dichiarazione Di Due Puntatori A Nodo Che Ho Chiamato *succ = Successivo E *Prec = Precedente.
typedef struct nodo nodo;  // Uso Typedef Per Non Dover Ripetere Sempre "struct nodo testa" Durante Il Corpo Del Programma.

         /* PROTOTIPO DI FUNZIONE CREATA DA ME */

nodo *IntrecciaListe(nodo *testaTmp, nodo *testaTmpr);

void main(){ // IlProgramma Inizia Dal Main - Void Non Ritorna A Niente

    char x[]="LISTA = A";     // Creao un vettore Di Stringhe char Che Chiamo x[] Senza Assegnargli Un Indice Numerico,
                             //  Lo Faccio Direttamente Riempendolo Scrivendoci Dentro "LISTA = A" Cioe' Il Nome Della Lista

    printf("\n\n%s\n\n", x); // Stampo Il Testo Del Vettore x Che Ho Appena Creato Andando A Capo Con I \n = New Line

nodo(*testaA)=calloc(10, sizeof(nodo));  // Creo 10 Puntatori A Nodo Che Chiamo "testaA"  Che calloc Mi Inizializza A 0.


int i;    // Creo Una Variabile Intera E La Chiamo i Come Indice.

for(i=0; i<10; i++){    // i sara L' Indice Che Scorrera' Il Mio Primo Ciclo For
                       //  Per Iterare E Scorrere In Tutti I Nodi Successivi Creati Fino Al Decimo Per Poi Stamparli Alla Fine

testaA -> prec = NULL;  // Dichiara Che testaA E' Il primo Nodo Della Lista A E Che Nessun Nodo Lo Precede (prec = precedente)

testaA -> succ = testaA;  /* Il Successivo Nodo Di testaA E' testaA Perche Tutti E 10 I Nodi Creati Hanno Lo Stesso Nome
                             In Modo Di Creare Un Unico Ciclo Che Itera Per 10 E Si Ripete In Automatico.                */

testaA = testaA;              // Concateno Il Nodo Successivo Che Ha Stesso Nome Del Precedente Ma E' Diverso.
testaA -> chiave = "Nodo A"; // Scorro Verso Il Nodo char *point Che Ho Chiamato chiave E Scrivendoci Dentro Le Do Un "Titolo"
testaA -> data++;           // Scorro Verso La Variabile Intera Che Abbiamo Chiamato data E La Facciamo Crescere Di 1 Valore ++
testaA -> chiave;          // Scorro Ancora Verso Il Nodo chiave Di Tipo Puntatore In Modo Che Dichiarato Posso Poi Stamparlo.

if(i == 5)               // Se L Indice Del Ciclo For i Arriva Ad Iterare Fino Al 5 Nodo
    printf("\n");       //  Va A Capo Di Una Nuova Linea

    printf("%s = %d   ", testaA -> chiave, testaA -> data); // Stampa Valori Dei Nodi Stringa E Data Di testaA
    }                                                      // E Poi Esce Dal Ciclo for Con la Graffa Chiusa }


    char z[]="\n\nLISTA = B"; // Creao un vettore Di Stringhe char Che Chiamo z[] Senza Assegnargli Un Indice Numerico,
    printf("\n\n%s\n\n", z); //  Lo Faccio Direttamente Riempendolo Scrivendoci Dentro "LISTA = B" Cioe' Il Nome Della Lista

nodo(*testaB)=calloc(10, sizeof(nodo)); // Creo 10 Puntatori A Nodo Che Chiamo "testaB" Che calloc Mi Inizializza A 0.

int j;                  // Creo Una Variabile Intera E La Chiamo j.
for(j=0; j<10; j++){   // j sara L' Indice Che Scorrera' Il Mio Primo Ciclo For
                      // Per Iterare E Scorrere In Tutti I Nodi Successivi Creati Fino Al Decimo Per Poi Stamparli Alla Fine

testaB -> prec = NULL;     // Dichiara Che testaB E' Il primo Nodo Della Lista B E Che Nessun Nodo Lo Precede (prec = precedente)

testaB -> succ = testaB;  /* Il Successivo Nodo Di testaB E' testaB Perche Tutti E 10 I Nodi Creati Hanno Lo Stesso Nome
                             In Modo Di Creare Un Unico Ciclo Che Itera Per 10 E Si Ripete In Automatico.                    */

testaB = testaB;                // Concateno Il Nodo Successivo Che Ha Stesso Nome Del Precedente Ma E' Diverso.
testaB -> chiave = "Nodo B";   // Scorro Verso Il Nodo char *point Che Ho Chiamato chiave E Scrivendoci Dentro Le Do Un "Titolo"
testaB -> data++;             // Scorro Verso La Variabile Intera Che Abbiamo Chiamato data E La Facciamo Crescere Di 1 Valore ++
testaB -> chiave;            // Scorro Ancora Verso Il Nodo chiave Di Tipo Puntatore In Modo Che Dichiarato Posso Poi Stamparlo.

if(j == 5)           // Se L Indice Del Ciclo For j Arriva Ad Iterare Fino Al 5 Nodo
     printf("\n");  //  Va A Capo Di Una Nuova Linea

     printf("%s = %d   ", testaB -> chiave, testaB -> data);           // Stampa Valori Dei Nodi Stringa E Data Di testaB
}                                                                    // E Poi Esce Dal Ciclo for Con la Graffa Chiusa }

     nodo(*testaTmp)=calloc(10,sizeof(nodo));   //Creo 10 Puntatori A Nodo Che Chiamo "testaTmp"  Che calloc Mi Inizializza A 0.
     nodo(*testaTmpr)=calloc(10,sizeof(nodo)); // Creo 10 Puntatori A Nodo Che Chiamo "testaTmpr" Che calloc Mi Inizializza A 0.

     testaTmp = testaA;          //COPIA TEMPORANEA DEL NODO testaA (testaTmp = Testa Temporanea)
     testaTmpr = testaB;        // COPIA TEMPORANEA DEL NODO testaB (testaTmpr = Testa Temporanea r = lettera di distinzione)

     testaTmp -> data = 0;      // testaTmp E' Un Identica Copia Di testaA Percio Avra I Suoi Nodi *prec, *succ,
                               // Il char Point chiave E L Intero data Percio Siccome Che Con I Precedenti Cicli La Variabile
                              // E' Stata Indicizzata Fino A 10 (Anche Se Una Copia) Dobbiamo Riniziallizarla Da Capo A 0

     testaTmpr -> data = 0; // Stesso Discorso Di testaTmp Con La Variabile testaTmpr Che E' La Copia Identica Di testaB

         /* CHIAMATA DI FUNZIONE CREATA DA ME */

     printf(" ", IntrecciaListe(testaTmp, testaTmpr));    // Stampo La Mia Funzione Personalizzata Creata Da Me
                                                         // "IntrecciaListe" E Ne Mostro Tutti I valori Con Senza Specificarne
                                                        // Nessuna "Specifica Di Conversione, Ovvero Sia Quei Doppi Apici " "
                                                       // Vuoti Che Dovrebbero Contenere %d Oppure %s Ma Che Nel Nostro Caso
                                                      // Non Dovranno Contenere Nulla E Come Parametri Gli Do In Pasto
                                                     // testaTmp E testaTmpr In Questo Modo : (testaTmp, testaTmpr).

     printf("\n\n%s = %d", testaA -> chiave, testaA -> data);  //Stampa LISTA A (Ancora Ne Mostra Contenuto Perche Prima Del For)
     printf("\n\n%s = %d", testaB -> chiave, testaB -> data);  /*        Anche Se Prima Del For Distruttivo La LISTA B
                                                                                Non Riesce Ad Essere Mostrata                 */

/* Distruggi LISTE A - B */


printf("\n\n");

printf("   NodoA       NodoB");

printf("\n");

int N;
for(N=0; N<10; N++){

        testaA[N];
        testaB[N];

 if(testaA != NULL){                                  // Se testaA Diverso Da Null, Aperta Graffa Inizio Condizione if
 if(testaB != NULL){                                 //  Se testaB Diverso Da Null, Aperta Graffa Inizio Condizione if

           if(testaA -> data == 10)                         // Se testaA data è arrivata a 10

           free(testaA -> data = NULL);                   // Cancella testaA data e portala al valore zero
                testaA -> chiave = NULL;                 // Dopodiche  distruggi anche il puntatore char chiave portandolo a null
                testaA -> succ = testaA -> succ = NULL; /* il puntatore succ di testaA fallo valere testaA succ uguale null
                                                          cioe' finisci di portare a null anche il puntatore succ (successivo) */

           if(testaB -> data == 10)                         // Se testaB data è arrivata a 10

           free(testaB -> data = NULL);                   // Cancella testaB data e portala al valore zero
                testaB -> chiave = NULL;                 // Dopodiche  distruggi anche il puntatore char chiave portandolo a null
                testaB -> succ = testaB -> succ = NULL; /* il puntatore succ di testaB fallo valere testaB succ uguale null
                                                          cioe' finisci di portare a null anche il puntatore succ (successivo) */

     printf("\n");

     printf(" %s = %d ", testaA -> chiave, testaA -> data);     //Output : - (null) = 0; -
     printf(" %s = %d ", testaB -> chiave, testaB -> data);}}} /* (Le Liste Sono State Distrutte Con Successo)
                                                                  - Chiuse Graffe Condizione if testaA E testaB -  */


     getchar();   // getchar() Blocca La Chiusura Di Termine Del Programma Finche Non Si Prema Un Tasto Per Uscire

     return;}

/*  DEFINIZIONE DI FUNZIONE CREATA DA ME  */

nodo *IntrecciaListe( nodo *testaTmp, nodo *testaTmpr){

   printf("\n\n\n");          // Torno A Capo \n Per Non Confondere La Nuova Lista Intrecciata Con Le Precedenti Originali

    printf("LISTA = A + B\n\n");  // Stampo Nome Della Nuova Lista Intrecciata E Torno A Capo \n\n

     int k;                      // Creo Una Variabile Intera E La Chiamo k.


for(k=0; k<10; k++){       // i sara L' Indice Che Scorrera' Il Mio Primo Ciclo For
                          //  Per Iterare E Scorrere In Tutti I Nodi Successivi Creati Fino Al Decimo Per Poi Stamparli Alla Fine

testaTmp -> prec = testaTmpr;    // Dichiaro Che Il Nodo Precedente Di testaTmp (Copia Di testaA) E' testaTmpr (Copia Di testaB)
testaTmp -> succ = testaTmpr;   // Dichiaro Che Il Nodo Successivo Di testaTmp (Copia Di testaA) E' testaTmpr (Copia Di testaB)
testaTmpr -> prec = testaTmp;  // Dichiaro Che Il Nodo Precedente Di testaTmpr (Copia Di testaB) E' testaTmp (Copia Di testaA)
testaTmpr -> succ = testaTmp; // Dichiaro Che Il Nodo Successivo Di testaTmpr (Copia Di testaB) E' testaTmp (Copia Di testaA)

testaTmp -> chiave;          // Scorro Ancora Verso Il Nodo chiave Di Tipo Puntatore In Modo Che Dichiarato Posso Poi Stamparlo.
testaTmp -> data++;         // Scorro Verso La Variabile Intera Che Abbiamo Chiamato data E La Facciamo Crescere Di 1 Valore ++

testaTmpr -> chiave;       // Scorro Ancora Verso Il Nodo chiave Di Tipo Puntatore In Modo Che Dichiarato Posso Poi Stamparlo
testaTmpr -> data++;      // Scorro Verso La Variabile Intera Che Abbiamo Chiamato data E La Facciamo Crescere Di 1 Valore ++

     if(k == 2)                // Se L Indice Del Ciclo For k Arriva Ad Iterare Fino Al 2 Nodo
    printf("\n");             //  Va A Capo Di Una Nuova Linea

     if(k == 4)              // Se L Indice Del Ciclo For k Arriva Ad Iterare Fino Al 4 Nodo
    printf("\n");           //  Va A Capo Di Una Nuova Linea

     if(k == 6)            // Se L Indice Del Ciclo For k Arriva Ad Iterare Fino Al 6 Nodo
    printf("\n");         //  Va A Capo Di Una Nuova Linea

     if(k == 8)          // Se L Indice Del Ciclo For k Arriva Ad Iterare Fino Al 8 Nodo
    printf("\n");       //  Va A Capo Di Una Nuova Linea

     if(k == 10)       // Se L Indice Del Ciclo For k Arriva Ad Iterare Fino Al 10 Nodo
    printf("\n");     //  Va A Capo Di Una Nuova Linea


   printf("%s = %d   ", testaTmp -> chiave, testaTmp -> data); // Stampa Valori Dei Nodi Stringa E Data Di testaTmp :
                                                              // (chiave e data)

   printf("%s = %d   ", testaTmpr -> chiave, testaTmpr -> data);} // Stampa Valori (chiave e data) Di testaTmp :
                                                                  // Esce Dal Ciclo for Con la Graffa Chiusa }

   return testaTmp;} /* Ritorna Con Uno Dei Due Parametri Della Funzione Scelta : testaTmp  o testaTmpr
                        Ed Esce Terminando la Funzione "IntrecciaListe()" Dopo La Graffa Chiusa */
