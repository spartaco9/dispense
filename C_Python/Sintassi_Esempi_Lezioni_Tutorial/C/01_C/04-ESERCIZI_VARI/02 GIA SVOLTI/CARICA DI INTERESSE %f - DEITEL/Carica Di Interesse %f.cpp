#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	float capitale, tasso, giorni, interesse;
	
	printf("\n\n\n   Immettere Il Capitale (-1 Alla Fine) : ");
	scanf("%f", &capitale);
	
	while(capitale != -1){
		
	if(capitale == 0){
	printf("\n\n\n   Spiacenti, Non E' Stato Possibile Calcolare L' Interesse.");
	break;}
	
	printf("\n\n   Immettere Il Tasso D' Interesse : ");
	scanf("%f", &tasso);
	
	printf("\n\n   Durata Del Prestito In Giorni : ");
	scanf("%f", &giorni);

    interesse = capitale*tasso*giorni/365;
    
    printf("\n\n   La Carica D' Interesse E' = E. %.2f\n\n\n", interesse);
    
    printf("---------------------------------------------------------");
    
    printf("\n\n\n   Immettere Il Capitale (-1 Alla Fine) : ");
	scanf("%f", &capitale);}
    
    printf("\n\n\n   Premere Un Tasto Per Continuare...");
    
    getch();
    return 0;

}
