#include <stdio.h>

int main(){

int num1;
int num2;
int num3;

printf("Immettere Tre Numeri Interi : ");
scanf("%d%d%d", &num1, &num2, &num3);

/* num1, num2 e num3 sono gli argomenti della chiamata di funzione a maggiore */

printf("Il Numero Maggiore E' : %d\n", maggiore(num1, num2, num3));

return 0;}
