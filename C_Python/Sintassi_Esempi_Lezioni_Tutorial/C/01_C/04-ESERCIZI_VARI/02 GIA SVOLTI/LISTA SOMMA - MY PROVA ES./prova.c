#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct nodo{int data;
struct nodo *succ, *prec;}lista;
typedef struct nodo nodo;

//FUNZIONI PERSONALI
extern nodo *crea_nodoK(nodo *testak);
extern nodo *crea_nodoN(nodo *testan);
extern nodo *somma_nodoK(nodo *k1, nodo *k2);

int main(){

int v, v2; //valori da inserire nei nodi creati
int risposta, risposta2;
int k1, k2;

printf("Vuoi Creare Una Lista?\n"
       "\n 1 = Si\n"
       " 0 = No :  ");
scanf( "%d", &risposta);

if(risposta == 1){
 crea_nodoK(v);}

else{
printf("\nArrivederci...\n\n");
getchar();
return (0);}



printf("\n\n");



printf("Vuoi Creare Una Lista?\n"
       "\n 1 = Si\n"
       " 0 = No :  ");
scanf( "%d", &risposta2);

if(risposta2 == 1){
 crea_nodoN(v2);}

else{
printf("\nArrivederci...\n\n");
getchar();
return (0);}

printf("\n\n");

somma_nodoK(k1, k2);

getchar();
return (0);}

//FUNZIONI PERSONALI

//CREA NODO K
extern nodo *crea_nodoK(nodo *testak){
nodo(*k) = calloc(6, sizeof(nodo));

int i;

printf("\n\n");

for(i=0; i<6; i++){

k -> prec = NULL;
k -> succ = k;
k = k;
k -> data++;

printf("%d ", k -> data);}}

//CREA NODO N
extern nodo *crea_nodoN(nodo *testan){
nodo(*n) = calloc(7, sizeof(nodo));

int i;

printf("\n\n");

for(i=0; i<7; i++){

n -> prec = NULL;
n -> succ = n;
n = n;
n -> data++;

printf("%d ", n -> data);}}

//SOMMA NODO K
extern nodo *somma_nodoK(nodo *k1, nodo *k2){
nodo(*k) = calloc(7, sizeof(nodo));}
