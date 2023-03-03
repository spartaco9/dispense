#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct nodo {
char *chiave;
int data;
struct nodo *succ, *prec;};
typedef struct nodo nodo;

nodo *IntrecciaListe(nodo *testaTmp, nodo *testaTmpr);

void main(){

    char x[]="LISTA = A";
    printf("\n\n%s\n\n", x);

nodo(*testaA)=calloc(10, sizeof(nodo));


int i;

for(i=0; i<10; i++){

testaA -> prec = NULL;
testaA -> succ = testaA;
testaA = testaA;
testaA -> chiave = "Nodo A";
testaA -> data++;
testaA -> chiave;

if(i == 5)
    printf("\n");

    printf("%s = %d   ", testaA -> chiave, testaA -> data);}


    char z[]="\n\nLISTA = B";
    printf("\n\n%s\n\n", z);

nodo(*testaB)=calloc(10, sizeof(nodo));

int j;

for(j=0; j<10; j++){

testaB -> prec = NULL;
testaB -> succ = testaB;
testaB = testaB;
testaB -> chiave = "Nodo B";
testaB -> data++;
testaB -> chiave;

if(j == 5)
    printf("\n");

    printf("%s = %d   ", testaB -> chiave, testaB -> data);}

     nodo(*testaTmp)=calloc(10,sizeof(nodo));
     nodo(*testaTmpr)=calloc(10,sizeof(nodo));

     testaTmp = testaA;
     testaTmpr = testaB;
     testaTmp -> data = 0;
     testaTmpr -> data = 0;

     printf("",IntrecciaListe(testaTmp, testaTmpr));

getchar();}

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
