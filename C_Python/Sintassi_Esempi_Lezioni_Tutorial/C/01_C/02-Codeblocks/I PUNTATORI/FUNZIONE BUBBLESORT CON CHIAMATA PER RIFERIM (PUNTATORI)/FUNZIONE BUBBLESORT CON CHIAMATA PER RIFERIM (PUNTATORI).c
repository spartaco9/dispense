/* Questo Programma Memorizza Valori In Un Vettore, Li Ordina In Modo Ascendente E Visualizza Il vettore risultante.
(Studiamo Il Perche Andando Ad Esaminare Il Caso) */

#include <stdio.h>
#define SIZE 10

/* Prototipo */
void bubblesort(int * const array,  const int size);

int main(){

/* Inizializza */
int a[SIZE]  = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

/* Contatore */
int i;

printf("Elementi Di Dati Nell Ordine Originale Sono : \n");

/* Itera scorrendo il vettore a */
for(i=0; i<SIZE; i++){
printf ("%4d", a[i]);}

/* Ordina il vettore */
bubblesort(a, SIZE);

printf("\n\nGli Elementi Di Dati In Ordine Ascendente Sono : \n");

/* Itera scorrendo il vettore a */
for(i=0; i<SIZE; i++){
printf ("%4d", a[i]);}

printf ("\n");

return 0;}


/* Ordina Un Vettore Di Interi Usando L algoritmo bubblesort */

void bubblesort(int * const array, const int size){

/* Prototipo */
void swap(int *element1Ptr,  int *element2Ptr);

/* Contatore dei passaggi */
int pass;

/* Contatore dei confronti */
int j;

/* Ciclo per controllare i passaggi */
for(pass = 0; pass < size - 1; pass++){

/* Ciclo per controllare i confronti per ogni passaggio */
for(j = 0; j < size - 1; j++){

/* Scambia gli elementi adiacebti se nn sono in ordine */

if(array[j]  > array[j+1]){
swap(&array[j],  &array[j+1]);}}}}

/* Scambia i valori nelle locazioni di memoria  puntate da element1Ptr e element2Ptr */

void swap(int *element1Ptr, int *element2Ptr){

int hold = *element1Ptr;
*element1Ptr = *element2Ptr;
*element2Ptr = hold;}
