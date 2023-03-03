#include <stdio.h>
#include <conio.h>


int main(){
	
	  int velocita, secondi=60,km, totale;
  
  //  float totale; 
 //   avremmo potuto anche dichiarare totale qui sopra come float 
//    e toglierlo dal tipo int e nel printf finale mettere una %f al posto della %d.
	
	printf("\n\n   Immettere I Km Orari : ");
	scanf("%d", &velocita);
	
	printf("\n   Immettere I Km Da Percorrere : ");
	scanf("%d", &km);
	
	totale=km*secondi/velocita;                               //  = calcola il tempo
	
	printf("\n\n   CI VORRANNO PRECISAMENTE %d MINUTI !! CIAO ", totale);
	
	
getch();
return 0;}
