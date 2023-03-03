#include <stdio.h>

int Valorealcubo(int n); /* prototipo */

int main(){


int numero = 5; /* inizializza numero */

printf("Il Valore Originale Di Numero E' : %d\n", numero);

/* passa  numero per valore a Valorealcubo */
numero = Valorealcubo(numero);

printf("Il Nuovo Valore Di Numero E' %d\n", numero);

getchar();
return 0;}


/* calcola e restituisce il cubo dell' argomento ingtero */
int Valorealcubo(int n){

/* eleva al cubo la variabile locale "n" e restituisce il risultato */
return n*n*n;}
