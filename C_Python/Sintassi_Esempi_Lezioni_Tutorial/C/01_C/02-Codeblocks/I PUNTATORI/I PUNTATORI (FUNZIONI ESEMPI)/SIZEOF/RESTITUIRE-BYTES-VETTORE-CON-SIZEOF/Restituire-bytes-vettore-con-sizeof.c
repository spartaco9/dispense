/* Quando viene applicato al nome di un vettore, l' operatore sizeof restituisce il numero dei bytes di quest' ultimo */

#include <stdio.h>

/* prototipo */
size_t getSize(float *ptr); 
/*size_t = tipo int unsigned (intero senza segno) da almeno 16 bit */


int main(){

float array [20];  //crea il vettore

printf("\n\n   Il Numero Di Bytes Nell' Array E' : %d"
       "\n\n   Il Numero Di Byte Restituito Da getsize E' : %d\n\n",
        sizeof(array), getSize(array));

return 0;}


/* restituisce la dimensione di ptr */
size_t getSize(float *ptr){

return sizeof(*ptr);}
