/* Usare le notazioni con indici e puntatori per i vettori */


#include <stdio.h>

    int main(){


    int b[]={10,20,30,40}; /* inizializza il vettore b */

    int *bPtr=b; /* fa puntare bPtr al vettore b */
    int i; /* contatore (indice) */
    int offset; /* contatore offset (distanza tra gli elementi del vettore) */

  /* visualizza il vettore b usando la notazione con gli indici di vettore */
    printf("\n\nL' Array b Verra' Stampato Con :\nArray A Notazione Pedice : ");

 /* itera sscorrendo il vettore b */
    for(i=0; i<4;i++){
        printf("b[%d]= %d\n",i,b[i]);}


 /* visualizza il vettore b usando il suo nome e la notazione con puntatore e offset */
    printf("\n\nPuntatore / Offset Notazione Dove : \n" 
           "Il Puntatore E' Il Nome Dell' Array : \n");

/* itera scorrendo il vettore b */
   for(offset=0;offset<4; offset++){
        printf("*(b+%d)=%d\n", offset, *(b+offset));}

/* visualizza il vettore b usando bPtr e la notazione con gli indci di vettore */
   printf("\n\nNotazione Puntatore Pedice : \n");

/* itera scorrendo il vettore b */
   for(i=0; i<4; i++){
        printf("bPtr[%d]=%d\n", i, bPtr[i]);}

/* visualizza iol vettore b usando bPtr e la notazione con puntatore e offset */
   printf("\n\nNotazione Puntatore / Offset : \n");

/* itera scorrendo il vettore b */
   for(offset=0; offset<4; offset++)
        printf("*(bPtr+%d)=%d\n", offset, *(bPtr+offset));

   getchar();
   return 0;}
