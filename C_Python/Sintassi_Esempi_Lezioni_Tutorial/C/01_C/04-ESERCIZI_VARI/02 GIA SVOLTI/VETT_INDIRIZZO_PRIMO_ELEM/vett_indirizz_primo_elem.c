#include <stdio.h>

int main(){

char array[5];

printf("\n\n");

printf("    Array = %p\n&Array[0] = %p\n"
       "   &Array = %p\n",                       // 1 DIMOSTRAZIONE, 1 VETTORE Array[0] Uguale A Indirizzo Di Array E &Array
       array, &array[0], &array);

        printf("\n\n");

/*********************************************/

printf("    Array = %p\n&Array[1] = %p\n"
       "   &Array = %p\n",                                  // 2 DIMOSTRAZIONE, 2 VETTORE Array[1] Diverso Da Array E &Array
       array, &array[1], &array);

       printf("\n\n");

/*********************************************/

printf("    Array = %p\n&Array[2] = %p\n"
       "   &Array = %p\n",                             // 3 DIMOSTRAZIONE, 3 VETTORE Array[2] Diverso Da Array E &Array
       array, &array[2], &array);

       printf("\n\n");

/*********************************************/

printf("    Array = %p\n&Array[3] = %p\n"
       "   &Array = %p\n",                         // 4 DIMOSTRAZIONE, 4 VETTORE Array[3] Diverso Da Array E &Array
       array, &array[3], &array);

       printf("\n\n");

/*********************************************/

printf("    Array = %p\n&Array[4] = %p\n"
       "   &Array = %p\n",                      // 5 DIMOSTRAZIONE, 5 VETTORE Array[4] Diverso Da Array E &Array
       array, &array[4], &array);

       printf("\n\n");

/*********************************************/

printf("    Array = %p\n&Array[5] = %p\n"
       "   &Array = %p\n",                   // 6 DIMOSTRAZIONE, 6 VETTORE Array[5] Diverso Da Array E &Array
       array, &array[5], &array);

       printf("\n\n");

/*********************************************/

       getchar();

       return 0;}                                                     // FINE
