#include <stdio.h>
#include <stdlib.h>

void main(){

    int vett[30];

    int i, j, n, temp;
    printf("Immettere Numero Vettori (n)  ");
    scanf("%d", &n);

    printf("Immettere Valore Di Ogni Vettore\n");
    for(i=0; i<n; i++)
    {

    scanf("%d", &vett[i]);

    }

    for(i=0; i<n; i++)
    {
            for(j=i+1; j<n; j++)
            if(vett[i]> vett[j])
    {

                temp = vett[i];
                vett[i] = vett[j];
                vett[j] = temp;

    }}


    for(i=0; i<n; i++){
            printf("\nI Valori Ordinati Sono : %d\n", vett[i]);

 }}
