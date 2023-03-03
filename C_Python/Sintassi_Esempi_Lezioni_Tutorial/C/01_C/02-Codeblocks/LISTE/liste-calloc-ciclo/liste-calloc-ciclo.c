#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct nodo {
char *chiave;
int data;
struct nodo *succ, *prec;
}Liste;
typedef struct nodo nodo;

void main(){

    char x[]="LISTA = A";
    printf("\n\n%s\n\n", x);

nodo *testaA=calloc(10, sizeof(nodo));

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

nodo *testaB=calloc(10, sizeof(nodo));

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

getchar();}




/*



if(i == 0)
   testaA -> chiave = "1 Nodo A";

if(i == 1)
   testaA -> chiave = "2 Nodo A";

if(i == 2)
   testaA -> chiave = "3 Nodo A";

if(i == 3)
   testaA -> chiave = "4 Nodo A";

if(i == 4)
   testaA -> chiave = "5 Nodo A";

if(i == 5)
   testaA -> chiave = "6 Nodo A";

if(i == 6)
   testaA -> chiave = "7 Nodo A";

if(i == 7)
   testaA -> chiave = "8 Nodo A";

if(i == 8)
   testaA -> chiave = "9 Nodo A";

if(i == 9)
   testaA -> chiave = "10 Nodo A";

   */
