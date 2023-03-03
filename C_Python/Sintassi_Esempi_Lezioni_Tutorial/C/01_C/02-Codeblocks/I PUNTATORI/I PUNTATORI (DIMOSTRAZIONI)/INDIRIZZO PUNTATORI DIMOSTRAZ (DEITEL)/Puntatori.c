#include <stdio.h>

int main(){


int a;               //a è un intero
int *aPtr;          // aPtr è un puntatore a un intero

a = 7;
aPtr = &a;        // aPtr è impostato con l' indirizzo di a

printf("\nL' Indirizzo Di a E' %p\n"
       "\nIl Valore Di aPtr E' %p\n\n", &a, aPtr);

printf("\nL' Indirizzo Di a E' %d\n"
       "\nIl Valore Di aPtr E' %d\n\n", a, *aPtr);

printf("\nDimostrando Che * Ed & Sono complementi "
         "L' Uno Dell' Altro : \n\n "
         "&*aPtr = %p \n\n"
         "*&aPtr = %p\n", &*aPtr, *&aPtr);

       getchar();
       return 0;}       // indica che il programma è terminato con successo
