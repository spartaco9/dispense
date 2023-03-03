#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;                          // i = indice
    int k;                         //  k = kiave
    int v[5] = {2, 5, 4, 1, 23};

    printf("\n\n  Inserire Valore Chiave : ");
    scanf("%d", &k);

    i=0;
    while((k != v[i]) && (i < 5))   // questo while ha i requisiti di un for ed è un suo equivalente
        i++;

        if(i < 5)
            printf("\n  La Chiave E' Stata Trovata Nella Posizione %d\n\n", i);

        else{

            printf("\n  La Chiave Immessa Non E' Stata Trovata\n\n");}

        getchar();
        return 0;}
