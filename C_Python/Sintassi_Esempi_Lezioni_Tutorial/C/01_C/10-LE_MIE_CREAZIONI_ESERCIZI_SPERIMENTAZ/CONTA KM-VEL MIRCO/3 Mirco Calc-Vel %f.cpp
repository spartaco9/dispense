#include <stdio.h>
#include <conio.h>


int main(){
	
	float km, secondi=60,tempo, totale;
	
	printf("\n\n   Immettere I Km Percorsi Finora : ");
	scanf("%f", &km);
	
	
	printf("\n   Immettere Il Tempo Percorso : ");
	scanf("%f", &tempo);
	
	totale=tempo/secondi*km;
	
	printf("\n\n   FINORA HAI PERCORSO ESATTAMENTE %.10f KILOMETRI ORARI !! CIAO ", totale);
	
	
getch();
return 0;}
