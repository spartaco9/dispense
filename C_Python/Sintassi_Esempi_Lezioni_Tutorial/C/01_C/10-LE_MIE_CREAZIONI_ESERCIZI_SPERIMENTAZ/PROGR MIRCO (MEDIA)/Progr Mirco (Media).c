#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20



float main(){

float prezzo, totale, i=0;
float media;
float sec = 1.0, min = sec * 60.0, ora = min * 60.0, giorno = ora * 12.0;   // Aggiuntivo

for(sec=1.0; sec<giorno; sec++);                                           // Aggiuntivo
if(media=ora){                                                            // Aggiuntivo


totale = 0;

printf("\n   Immetti un prezzo (Digita -1 Per Terminare) : ");
scanf("%f", &prezzo);

while(prezzo != -1){

totale = totale + prezzo;
i = i + 1;

printf("\n   Immetti un prezzo (Digita -1 Per Terminare) : ");
scanf("%f", &prezzo);}

if(i != 0){

media = (float) totale / i;
float media2 = media / ora * giorno;                              // Aggiuntivo

printf("\n\n\t   **** La Media Dei Prezzi E' Di %.2f ****\n\n", media);}

else{

printf("\n\n\t**** Non E' Stato Rilevato Nessun Prezzo ****\n\n");}

}                                                              // Aggiuntivo

getchar();
system("PAUSE");
return 0;}
