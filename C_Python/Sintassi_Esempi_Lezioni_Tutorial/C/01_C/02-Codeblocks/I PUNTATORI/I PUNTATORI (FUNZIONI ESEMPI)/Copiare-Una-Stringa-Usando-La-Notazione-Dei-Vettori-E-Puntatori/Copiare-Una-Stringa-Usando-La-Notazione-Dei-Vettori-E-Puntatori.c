/* Copiare una stringa usando la notazione dei vettori e quella dei puntatori */

#include <stdio.h>

void copy1(char *s1, const char *s2); /* prototipo */
void copy2(char *s1, const char *s2); /* prototipo */

int main(){

char string1[10];      /* Crea il vettore string1 */
char *string2 = "Ciao";   /* Crea un puntatore a una stringa */
char string3[10]; /* Crea il vettore string3 */
char string4[] = "Arrivederci"; /* Crea un puntatore a una stringa */

copy1(string1, string2);
printf("string1 = %s\n", string1);

copy2(string3, string4);
printf("string3 = %s\n", string3);

getchar();
return 0;}

/* Copia s2 in s1 usando la notazione dei vettori */

void copy1(char *s1, const char *s2){

int i; /* contatore (indice) */

/* Itera scorrendo le stringhe */
for(i=0; (s1[i] = s2[i]) != '\0'; i++)
   {;}} /* Non fa nulla nel corpo (funzione vuota) */

/* Copia s2 in s1 usando la notazione dei puntatori */
void copy2(char *s1, const char *s2){

/* Itera scorrendo le stringhe */
for(;(*s1 = *s2) != '\0'; s1++, s2++){;}}
