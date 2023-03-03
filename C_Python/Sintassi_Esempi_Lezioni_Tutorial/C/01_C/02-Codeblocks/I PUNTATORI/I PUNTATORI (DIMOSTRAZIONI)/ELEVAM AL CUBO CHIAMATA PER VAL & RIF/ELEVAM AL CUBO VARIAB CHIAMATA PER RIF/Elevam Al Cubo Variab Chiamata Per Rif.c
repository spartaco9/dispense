#include <stdio.h>

void Riferimentoalcubo (int * nPtr); // prototipo

int main(){

int numero = 5; // inizializza numero

printf("Il Valore Originale Di Numero E' %d\n", numero);

/* passa l' indirizzo  di numero a Riferimentoalcubo */
Riferimentoalcubo(&numero);

printf("Il Nuovo Valore Di Numero E' %d\n", numero);

getchar();
return 0;}

/* calcola il cubo di "*nPtr"; modifica la variabile "numero" nel main */
void Riferimentoalcubo(int *nPtr){

*nPtr = *nPtr**nPtr**nPtr;} // eleva al cubo nPtr
