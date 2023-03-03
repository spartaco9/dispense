#include <stdio.h>
#define A 10

int main(){

    int v[A] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int somma;
    int sentinella;

            printf("\n\n   Digitare Un Numero, -1 Alla Fine : ");
            scanf("%d", &sentinella);

            while(sentinella != -1){

            somma = v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7] + v[8] + v[9];

            printf("\n\n   Il Risultato Di : v[0] + v[1] + v[2] + v[3] + v[4]\n\n"
                   "\t\t   + v[5] + v[6] + v[7] + v[8] + v[9] E' = ");
            printf("%d", somma);

            while(sentinella != -1){

            printf("\n\n   Digitare Un Numero, -1 Alla Fine : ");
            scanf("%d", &sentinella);

            printf("\n\n   Il Risultato Di : v[0] + v[1] + v[2] + v[3] + v[4]\n\n"
                   "\t\t   + v[5] + v[6] + v[7] + v[8] + v[9] E' = ");
            printf("%d", somma);}}

    getchar();
    return 0;}
