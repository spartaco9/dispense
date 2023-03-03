#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void main(){

int i, j, temp;
int vett[SIZE] = {3, 6, 5, 9, 2, 10 };

for(i=0; i < SIZE; i++){
for(j=0; j < SIZE-i-1; j++){

    if(vett[j] < vett[j+1]){ /* sostituire ">" con "<" per avere un ordinamento decrescente e viceversa */


        temp = vett[j];
        vett[j] = vett[j+1];
        vett[j+1] = temp;}}



        printf("%d \n", vett[j]);}

getchar();
return;}
