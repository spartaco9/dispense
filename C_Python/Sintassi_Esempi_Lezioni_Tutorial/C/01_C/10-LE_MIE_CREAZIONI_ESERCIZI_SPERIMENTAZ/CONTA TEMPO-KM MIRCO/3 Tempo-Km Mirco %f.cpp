#include <stdio.h>
#include <conio.h>


int main(){
	
	  float velocita, secondi=60,km, totale;
  
  //  float totale; 
 //   avremmo potuto anche dichiarare totale qui sopra come float 
//    e toglierlo dal tipo int e nel printf finale mettere una %f al posto della %d.
	
	printf("\n\n   Immettere I Km Orari : ");
	scanf("%f", &velocita);
	
	printf("\n   Immettere I Km Da Percorrere : ");
	scanf("%f", &km);
	
	totale=km*secondi/velocita;                               //  = calcola il tempo
	
	printf("\n\n   CI VORRANNO PRECISAMENTE %.2f MINUTI !! CIAO ", totale);
	
	
getch();
return 0;}
