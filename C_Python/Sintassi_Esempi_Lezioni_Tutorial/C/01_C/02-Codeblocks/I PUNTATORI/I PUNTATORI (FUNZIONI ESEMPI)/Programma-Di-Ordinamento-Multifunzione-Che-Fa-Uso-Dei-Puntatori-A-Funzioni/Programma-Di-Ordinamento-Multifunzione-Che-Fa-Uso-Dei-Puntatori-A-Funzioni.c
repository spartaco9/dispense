/* Programma di ordinamento multifunzione che fa uso dei puntatori a funzioni */


#include <stdio.h>
#define SIZE 10

/* prototipi */
void bubble(int lavoro[], const int size, int (*confronto)(int a, int b));
int crescente(int a, int b);
int decrescente(int a, int b);

int main(){

int ordine; /* Per ordinamento ascendente o 2 per ordinamento discendente */
int i; /* Contatore */

/* inizializza il vettore a */
int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};

printf("\nDigitare 1 Per Ordinare In Ordine Crescente,\n"
       "Digitare 2 Per Ordinare In Ordine Decrescente : ");

scanf("%d", &ordine);

printf("\nElementi Di dati Nell' Ordine Originale\n");

/* Visualizza Il Vettore Originale */
for(i = 0; i < SIZE; i++){
   printf("%5d", a[i]);}


/* Ordina Il Vettore In Ordine Ascendente; Passa La Funzione ascendente Come Argomento Per Specificare L' Ordinamento ascendente */

if(ordine == 1){
bubble(a, SIZE, crescente);
printf("\n\nElementi Di Dati In Ordine Crescente\n");}

else{ /* Passa La Funzione Decrescente */
   bubble(a, SIZE, decrescente);
printf("\n\nElementi Di Dati In Ordine Decrescente\n");}

/* Visualizza Il Vettore Ordinato */
for(i = 0; i < SIZE; i++){
   printf("%5d", a[i]);}

printf("\n");

getchar();
return 0;}

/* Bubblesort Multifunzione; Il Paramentro confronto E' Un Puntatore A Una Funzione Di Comparazione (Confronto) Che Determina Il Senso Dell' Orientamento */

void bubble(int lavoro[], const int size, int (*confronto)(int a, int b)){

int pass; /* Contatore Dei Passaggi */
int i; /* Contatore Dei Confronti */

/* swap = scambio (Funzione Per Lo Scambio Dei Puntatori / Variabili Di BubbleSort) */
void swap(int *element1Ptr, int *element2Ptr); /* Prototipo */

/* Ciclo Per Controllare II Passaggi */
for(pass = 1; pass < size; pass++){

/* Ciclo Per Controllare I Confronti Per Ogni Passaggio */
for(i = 0; i < size - 1; i++){

/* Scambia Gli Elementi Adiacenti Se Non Sono In Ordine */
if((*confronto)(lavoro[i], lavoro[i + 1])){
   swap(&lavoro[i], &lavoro[i + 1]);}}}}

/* Scambia I Valori Nelle Locazioni Di Memoria Puntate Da element1Ptr E element2Ptr */
void swap(int *element1Ptr, int *element2Ptr){

/* int temp = (Variabile Temporanea) */
int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;}

/* Determina Se Gli Elementi Non Sono In Ordine Rispetto A Un Ordinamento Cresente */
int crescente(int a, int b){

   return b < a;} /* Effettua Uno Scambio Se b E' Minore Di a */

/* Determina Se Gli Elementi Non Sono In Ordine Rispetto Ad Un Ordinamento Discendente */
int decrescente(int a, int b){

return b > a;} /* Inizia Uno Scambio Se b E' maggiore Di a */
