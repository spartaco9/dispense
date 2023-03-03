/* Dimostrazione di utilizzo di un vettore di puntatori a funzioni */

#include <stdio.h>

/* prototipi */
void funzione1(int a);
void funzione2(int b);
void funzione3(int c);

int main(){

/* Inizializza il vettore di 3 puntatori a funzioni che prendono un argomento di tipo int e restituiscono void */
void (*f[3])(int) = {funzione1, funzione2, funzione3}; 
/* mette le 3 funzioni in *f e ne specifica il numero e il tipo prima di inserirle all' 
  interno in questo modo : (*f[3](int) e poi le ordina inserendo i numeri scelta in base all ordine delle tre funzioni */

int scelta; /* Variabile per memorizzare la scelta dell' utente */

printf("\nImmettere Un Numero Compreso Tra 0 E 2, Da 3 In Su Per Uscire : ");
scanf("%d",&scelta);

/* Elabora la scelta dell' utente */
while(scelta >= 0 && scelta < 3 ){

/* Invoca la funzione alla posizione indicata da scelta nel vettore f e passa scelta come argomento : int a, int b o int c */
(*f [scelta])(scelta);

printf("\nImmettere Un Numero Compreso Tra 0 E 2, Da 3 In Su Per Uscire : ");
scanf("%d",&scelta);}

printf("\nEsecuzione Del Programma Completato.\n"); // output valore sentinella impostato per uscire con il numero 3

getchar();
return 0;}


void funzione1(int a){
printf("\nE' Stato Immesso Il Valore %d Cosi funzione1 E' Stata Chiamata\n\n", a);}  //chiamata e ordinata per il numero 0

void funzione2(int b){
printf("\nE' Stato Immesso Il Valore %d Cosi funzione2 E' Stata Chiamata\n\n", b);} //chiamata e ordinata per il numero 1

void funzione3(int c){
printf("\nE' Stato Immesso Il Valore %d Cosi funzione3 E' Stata Chiamata\n\n", c);} //chiamata e ordinata per il numero 2


