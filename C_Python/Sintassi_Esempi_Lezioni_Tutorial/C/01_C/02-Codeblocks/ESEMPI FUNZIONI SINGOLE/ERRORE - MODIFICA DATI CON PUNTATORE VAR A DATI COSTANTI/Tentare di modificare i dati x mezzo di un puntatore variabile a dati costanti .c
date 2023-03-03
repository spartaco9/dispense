/* Tentare di modificare i dati x mezzo di un puntatore variabile a dati costanti */

#include <stdio.h>

/* prototipo */
void f(const int *xPtr);

int main(){

int y = 2;  // Dichiara y

/* f tenta di eseguire una modifica illecita */
f(&y);

getchar();
return 0;}

/* xPtr  non puo essere usato per modificare il valore  della variabile a cui punta */

void f(const int *xPtr){

*xPtr = 100;}

   //  Error : assignment of read-only location xPtr
  //   Errore: assegnazione di sola lettura posizione xptr

/* L' errore segna che non si puo modificare un oggetto const */
