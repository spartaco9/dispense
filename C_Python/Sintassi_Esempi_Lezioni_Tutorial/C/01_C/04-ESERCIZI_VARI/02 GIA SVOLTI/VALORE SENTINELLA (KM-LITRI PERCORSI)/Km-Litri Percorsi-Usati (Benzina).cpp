#include <stdio.h>
#include <conio.h>

int main(){
	
	int contatore, ContatoreKm, ContatoreLitri, litri, km, TotaleKm, TotaleLitri;
	float risultato;
	
	TotaleKm=0;
	contatore=0;
	
	
	printf("\n\n  Immettere I Kilometri Percorsi (Alla Fine Inserire -1) : ");
	scanf("%d", &km);
	
	
	while(km != -1){
	TotaleKm+=km;
	++km;
	ContatoreKm+=contatore;
	++contatore;
	printf("  Immettere I Kilometri Percorsi (Alla Fine Inserire -1) : ");
	scanf("%d", &km);}
	
	
	printf("\n\n-------------------------------------------------------------------------------");
	printf("\n\n  Immettere I Litri Utilizzati (Alla Fine Inserire -1) : ");
	scanf("%d", &litri);
	
	while(litri != -1){
	TotaleLitri+=litri;
	++litri;
	ContatoreLitri+=contatore;
	++contatore;
	printf("  Immettere I Litri Utilizzati (Alla Fine Inserire -1) : ");
	scanf("%d", &litri);}
	
	
	if(contatore != 0){
	    risultato = (float) TotaleKm/TotaleLitri;
		printf("\n\n  I Litri Per Ogni Kilometro Percorso \n  Ad Ogni Pieno Effettuato Erano : \n\n\n  %.6f", risultato);}
	
	
	getch();
	return 0;}
