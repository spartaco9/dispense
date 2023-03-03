#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login(char *pass){

int corretta = 0;
char password[10];

strcpy(password, pass);
if(!strcmp(password, "LLOYDBANKS87")){

corretta = 1;}

       printf("Corretta Contiene : %d", corretta);
return corretta;}

int main(){

char psw[100];
       printf("Inserire Password : ");
scanf("%20s", &psw);
if( login(psw) == 1)
       printf("\n\n** Accesso Eseguito **\n\n\n");
else
       printf("\n\n** Accesso Negato **\n\n\n");

       printf("________________________________________________________________");

return 0;}


