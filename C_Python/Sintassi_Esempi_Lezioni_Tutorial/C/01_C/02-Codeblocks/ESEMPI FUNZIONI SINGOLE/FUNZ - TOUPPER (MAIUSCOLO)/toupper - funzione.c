#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char str[] = "tutorials point";

   while(str[i])
   {
      putchar (toupper(str[i]));  // LA FUNZIONE TOUPPER CONVERTE STRINGA IN MAIUSCOLO
      i++;
   }

   return(0);
}
