#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	int vendite, percentuale=9, tasso=100, StipendioFisso=200, stipendio;
	
	while(vendite != -1){
	  
	  printf("\n\n\n   Immettere Le Vendite In Euro (-1 Alla Fine) : ");
	  scanf("%d", &vendite);
	  
	  if(vendite == 0){
	    printf("\n\n   Spiacenti Ma Il valore Immesso Non Soddisfa I Criteri Richiesti.");
	    break;}
	 
	  if(vendite == -1){
	  	printf("\n\n\n   Premere Un Tasto Per Continuare...");
	    break;}
	  
	  stipendio=vendite*percentuale/tasso+StipendioFisso;
	  
	  printf("\n   Lo Stipendio E' : %d", stipendio);}
	  
	  getch();
	  return 0;
	  
}
