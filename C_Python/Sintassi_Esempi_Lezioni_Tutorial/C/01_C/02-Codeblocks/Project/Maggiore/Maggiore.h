#ifndef MAGGIORE_H_INCLUDED
#define MAGGIORE_H_INCLUDED

/* trovare il maggiore di tre numeri */

#include <stdio.h>

// prototipo della funzione
int maggiore( int x, int y, int z);




/* int main(){} */




int maggiore(int x, int y, int z){

/* si assume che x sia il massimo */
int max = x;

/* se y è il maggiore di max, assegna y a max */
if(y> max){
        max = y;
}

/* se z è maggiore di max, assegna z a max */
if(z > max){
        max = z;
}

/* max è il valore massimo */
return max;}

#endif // MAGGIORE_H_INCLUDED
