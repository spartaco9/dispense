#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo {
char *chiave;
int data;
struct nodo *succ, *prec;};
typedef struct nodo nodo;

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

 if(testaA != NULL){                                  // Se testaA Diverso Da Null, Aperta Graffa Inizio Condizione if
 if(testaB != NULL){                                 //  Se testaB Diverso Da Null, Aperta Graffa Inizio Condizione if

           if(testaA -> data == 10)                         // Se testaA data è arrivata a 10

           free(testaA -> data = NULL);                   // Cancella testaA data E La Porta Al Valore Zero
                testaA -> chiave = NULL;                 // Dopodiche  Distrugge Anche Il Puntatore char chiave Portandolo A null
                testaA -> succ = testaA -> succ = NULL; /* Il Puntatore succ Di testaA Lo Fa Valere testaA succ = null
                                                          Cioe' Finisce Di Portare A null Anche Il Puntatore succ (Successivo) */

           if(testaB -> data == 10)                         // Se testaB data è arrivata a 10

           free(testaB -> data = NULL);                   // Cancella testaB data E La Porta Al Valore Zero
                testaB -> chiave = NULL;                 // Dopodiche  Distrugge Anche Il Puntatore char chiave Portandolo A null
                testaB -> succ = testaB -> succ = NULL; /* Il Puntatore succ Di testaB Lo Fa Valere testaB succ = null
                                                          Cioe' Finisce Di Portare A null Anche Il Puntatore succ (Successivo) */

     printf("\n");

     printf(" %s = %d ", testaA -> chiave, testaA -> data);     //Output : - (null) = 0; -
     printf(" %s = %d ", testaB -> chiave, testaB -> data);}}} /* (Le Liste Sono State Distrutte Con Successo)
                                                                  - Chiuse Graffe Condizione if testaA E testaB -  */

     getchar();

     return;}
