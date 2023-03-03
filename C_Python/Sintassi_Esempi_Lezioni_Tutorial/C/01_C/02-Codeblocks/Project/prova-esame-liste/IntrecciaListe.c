#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo {
char *chiave;
int data;
struct nodo *succ, *prec;};
typedef struct nodo nodo;

nodo *IntrecciaListe(nodo *testaTmp, nodo *testaTmpr);

nodo *IntrecciaListe( nodo *testaTmp, nodo *testaTmpr){

   printf("\n\n\n");

    printf("LISTA = A + B\n\n");

     int k;

     for(k=0; k<10; k++){

     testaTmp -> prec = testaTmpr;
     testaTmp -> succ = testaTmpr;
     testaTmpr -> prec = testaTmp;
     testaTmpr -> succ = testaTmp;
     testaTmp -> chiave;
     testaTmp -> data++;
     testaTmpr -> chiave;
     testaTmpr -> data++;

     if(k == 2)
    printf("\n");

     if(k == 4)
    printf("\n");

     if(k == 6)
    printf("\n");

     if(k == 8)
    printf("\n");

     if(k == 10)
    printf("\n");

   printf("%s = %d   ", testaTmp -> chiave, testaTmp -> data);
   printf("%s = %d   ", testaTmpr -> chiave, testaTmpr -> data);}
   return testaTmp;}
