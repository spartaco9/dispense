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

     printf("",IntrecciaListe(testaTmp, testaTmpr));  //Stampa Funzione IntrecciaListe Con Output : LISTA A + B Da 1 Fino A 10.

     printf("\n\n%s = %d", testaA -> chiave, testaA -> data);  //Stampa LISTA A (Ancora Ne Mostra Contenuto Perche Prima Del For)
     printf("\n\n%s = %d", testaB -> chiave, testaB -> data); /*        Anche Se Prima Del For Distruttivo La LISTA B
                                                                                Non Riesce Ad Essere Mostrata                 */

     /* Distruggi LISTE A - B */


printf("\n\n");

printf("   NodoA       NodoB");

printf("\n");

int N;
for(N=0; N<10; N++){

        testaA[N];
        testaB[N];

 if(testaA != NULL){                                  
 if(testaB != NULL){                                

           if(testaA -> data == 10)                        

           free(testaA -> data = NULL);                   
                testaA -> chiave = NULL;                 
                testaA -> succ = testaA -> succ = NULL;

           if(testaB -> data == 10)                        

           free(testaB -> data = NULL);                   
                testaB -> chiave = NULL;                 
                testaB -> succ = testaB -> succ = NULL;

     printf("\n");

     printf(" %s = %d ", testaA -> chiave, testaA -> data);     
     printf(" %s = %d ", testaB -> chiave, testaB -> data);}}}

     getchar();

     return;}

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
