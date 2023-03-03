
/* Programma per la stampa della 
costante RAND_MAX */

#include <stdio.h>
#include <stdlib.h>
 
int main () {
    printf("Il valore di RAND_MAX e' %d\n",RAND_MAX);

   return EXIT_SUCCESS;
   }


/* se il file .c si salva su desktop, andare da terminale su desktop con il cmd :

" cd Scrivania "

dopo di che digitare :

" gcc NomeFile.c -o NomeFile "

esempio :

" gcc stampaRAND_MAX.c -o stampaRAND_MAX "  */



                                     /* OUTPUT */
                      /* Il valore di RAND_MAX e' 2147483647 */
