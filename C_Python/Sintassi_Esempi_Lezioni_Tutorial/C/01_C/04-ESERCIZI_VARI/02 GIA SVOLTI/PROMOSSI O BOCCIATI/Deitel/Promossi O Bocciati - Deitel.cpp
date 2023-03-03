#include <stdio.h>
#include <conio.h>

int main(){
	
	
	int promossi=0;
	int bocciati=0; 
	int studente=1; 
	int risultato;
	
	while(studente <= 10){
	
	
	printf("\nImmetti Un Risultato (1=Promosso, 2=Bocciato) : ");
	scanf("%d", &risultato);
	
	if(risultato == 1){
		
		promossi = promossi + 1;}
		
	   else{bocciati = bocciati + 1;}
	
	       studente = studente + 1;}
		 
		 printf("\nI Promossi Sono %d\n", promossi);
		 printf("\nI bocciati Sono %d\n", bocciati);
		 
	if (promossi > 8){
		
		printf("\nAumentare Le Tasse Di Studio Agli Studenti" );}
	
		
		getch();
		return 0;}	 
