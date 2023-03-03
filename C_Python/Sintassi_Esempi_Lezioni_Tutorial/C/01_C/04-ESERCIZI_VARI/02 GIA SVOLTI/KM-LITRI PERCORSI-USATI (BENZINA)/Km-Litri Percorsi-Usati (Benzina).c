#include <stdio.h>

int main(){

	  int contatore, ContatoreKm, ContatoreLitri, litri, km, TotaleKm, TotaleLitri, risultato;

  //  float risultato;
 //   avremmo potuto anche dichiarare risultato qui sopra come float
//    e toglierlo dal tipo int e nel printf finale mettere una %f al posto della %d.

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
	  printf("\n\n  Immettere I Litri Di Ogni Pieno Effettuato  (Alla Fine Inserire -1) : ");
	  scanf("%d", &litri);

	  while(litri != -1){
	  TotaleLitri+=litri;
	  ++litri;
	  ContatoreLitri+=contatore;
	  ++contatore;
	  printf("  Immettere I Litri Di Ogni Pieno Effettuato (Alla Fine Inserire -1) : ");
	  scanf("%d", &litri);}


	  if(contatore != 0){
	      risultato = (float) TotaleKm/TotaleLitri;
		  printf("\n\n  I Litri In Totale Erano : %d\n\n", risultato);}


	  getchar();
	  return 0;}
