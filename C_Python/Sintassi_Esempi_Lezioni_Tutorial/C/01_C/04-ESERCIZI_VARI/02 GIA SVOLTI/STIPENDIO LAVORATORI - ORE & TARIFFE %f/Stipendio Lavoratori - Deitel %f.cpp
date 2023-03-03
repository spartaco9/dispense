#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	float ore, tariffa, stipendio;
	
	  printf("\n\n\n   Immettere Le Ore Lavorate (-1 Alla Fine) : ");
	  scanf("%f",&ore);
	
	while(ore != -1){
	  
	  printf("\n\n\n   Immettere La Tariffa Oraria Del Lavoratore (E. 00.00) : ");
	  scanf("%f",&tariffa);
	
	if(ore <= 40){
	  stipendio=ore*tariffa;}
	
	if(ore > 40){
	  stipendio=ore*tariffa+5;}
	  
	  printf("\n\n\n   Lo Stipendio E' = E. %.2f", stipendio);

      printf("\n\n\n   Immettere Le Ore Lavorate (-1 Alla Fine) : ");
	  scanf("%f",&ore);}
	
	  printf("\n\n\n   Premere Un Tasto Per Continuare...");
	  getch();
	
	return 0;

}

