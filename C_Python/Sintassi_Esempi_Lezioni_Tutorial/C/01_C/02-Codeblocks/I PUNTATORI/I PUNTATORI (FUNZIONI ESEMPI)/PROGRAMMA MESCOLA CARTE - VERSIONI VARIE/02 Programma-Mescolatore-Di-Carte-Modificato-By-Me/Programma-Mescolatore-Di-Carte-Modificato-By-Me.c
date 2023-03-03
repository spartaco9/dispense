/* Programma per mescolare e distribuire delle carte da gioco */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototipi */
void rimescola(int wmazzo[][13]);
void distribuisci(int wmazzo[][13], const char *wfaccia[], const char *wcompleto[]);

int main(){

/* inizializza il vettore dei semi */
const char *completo[4] = {"Cuori", "Quadri", "Fiori", "Picche"};

/* Inizializza il vettore delle faccie */
const char *faccia[13] =
                  {"Asso", "Due", "Tre", "Quattro", "Cinque", "Sei",
                   "Sette", "Otto", "Nove", "Dieci", "Jack", "Regina", "Re"};

/* inizializza il vettore del mazzo di carte */
int mazzo[4][13] = {0}; srand(time(NULL));
int decisione;

printf("\n\n   Digita Un Tasto Per Iniziare, -1 Per Uscire : ");
scanf("%d", &decisione);

if(decisione == -1){return 0;}

printf("\n\n   Digita Invio Per Lanciare 2 Carte : ");
/* Specifica il seme per il generatore di numeri casuali */
rimescola(mazzo);
distribuisci(mazzo, faccia, completo);
printf("\n\n");

getchar();
return 0;}

/* mescola le carte nel mazzo */
void rimescola(int wmazzo[][13]){

int riga; /* numero di riga */
int colonna; /* numero di colonna */
int carta; /* contatore */

/* per ognuna delle 52 carte, sceglie a caso una casella del mazzo */
for(carta = 1; carta <= 52; carta++){

/* sceglie a caso una nuova locazione finche non trova una casella libera */
do{
  riga = rand() %4;
  colonna = rand() %13;
}while(wmazzo[riga][colonna] != 0);

/* memorizza il numero della carta nella casella del mazzo scelta liberata */
wmazzo[riga][colonna] = carta;}}

/* distribuisce le carte nel mazzo */
void distribuisci(int wmazzo[][13], const char *wfaccia[], const char *wcompleto[]){

int carta; /* contatore delle carte */
int riga; /* contatore delle righe */
int colonna; /* contatore delle colonne */

printf("\n\n");

/* distribuisce ognuna delle 52 carte */
for(carta = 1; carta <= 52; carta++){

/* itera scorrendo le righe di wmazzo */
for(riga=0; riga<=3; riga++){

/* itera scorrendo le colonne di wmazzo relative alla riga corrente */
for(colonna=0; colonna<=12; colonna++){

/* se la casella contiene la carta corrente, la visualizza (se la carta diviso 2 e uguale a zero va a capo spostando tutti i numeri pari a sinistra, senno tabula tutti quelli dispari a destra) */
if(wmazzo[riga][colonna] == carta){
   printf(" \t%5s Di %-8s%c", wfaccia[colonna], wcompleto[riga],
   carta % 2 == 0 ? '\t' : '\t' == getchar());}}}}}
