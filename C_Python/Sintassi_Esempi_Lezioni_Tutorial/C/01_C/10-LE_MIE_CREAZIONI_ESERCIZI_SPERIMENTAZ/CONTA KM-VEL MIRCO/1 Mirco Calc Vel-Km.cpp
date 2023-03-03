#include <stdio.h>
#include <conio.h>


int main(){
	
	  int km, secondi=60,tempo, totale;
  
  //  float totale; 
 //   avremmo potuto anche dichiarare totale qui sopra come float 
//    e toglierlo dal tipo int e nel printf finale mettere una %f al posto della %d.
	
	printf("\n\n   Immettere I Km Percorsi Finora : ");
	scanf("%d", &km);
	
	
	printf("\n   Immettere Il Tempo Percorso : ");
	scanf("%d", &tempo);
	
	totale=km*secondi/tempo;                               //  = calcola la velocita'
	
	printf("\n\n   FINORA ANDAVI PRECISAMENTE A %d KILOMETRI ORARI !! CIAO ", totale);
	
	
getch();
return 0;}
