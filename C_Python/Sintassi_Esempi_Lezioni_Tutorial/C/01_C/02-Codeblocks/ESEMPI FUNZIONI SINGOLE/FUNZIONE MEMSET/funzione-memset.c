    /* memset example */
    #include <stdio.h>
    #include <stdlib.h>

    int main(){
    
    char str[] = "proviamo questa memset";

    memset(str,'-',8);    /* sostituisce le prime parole che trova, in questo
                             caso con i trattini "-", quindi la parola "proviamo" 
                             che è composta appunto da 8 caratteri con i trattini. */
    

    puts (str);             /* visualizza stringa in output 
                              (solo per stringhe, char e caratteri) */                      
    
    return 0;}
