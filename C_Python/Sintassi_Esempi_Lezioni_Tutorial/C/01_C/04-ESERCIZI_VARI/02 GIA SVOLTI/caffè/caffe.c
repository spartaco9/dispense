

/************************************/
/* Programma per Macchina da Caffe' */
/************************************/
 
/***************************/
/* Universita' Degli Studi */
/*   Carlo Bo di Urbino    */
/* Autore: Luca Mencarelli */
/***************************/
 
/*****************************/
/* Inclusione delle librerie */
/*****************************/
 
#include <stdio.h>
#include <stdlib.h>
 
/********************************/
/* Dichiarazione delle Funzioni */
/********************************/
 
/* void prepara_bevanda(); */
 
/***********************************/
/* Definizione della funzione main */
/***********************************/
 
int main(void)
{
	/* Dichiarazione delle variabili locali alla funzione */
		
	int scelta = 0;
	int zucchero = 0;
 
	printf("--------MACCHINA DEL CAFFE--------------\n");
	printf("\n");
	printf("1) Caffe' Espresso\n");
	printf("2) Caffe' Macchiato\n");
	printf("3) Caffe' Decaffeinato\n");
	printf("4) Caffe' Decaffeinato Macchiato\n");
	printf("5) Cappuccino\n");
	printf("6) Cioccolata Calda\n");
	printf("7) Te' Limone\n");
	printf("8) Te' Pesca\n");
	printf("9) Ginseng\n");
	printf("10) Orzo\n");

	/* Chiedo all'utente di scegliere una bevanda */
	printf("Prego Scegliere una Bevanda: ");
	scanf("%d", &scelta);

        switch(scelta){
           case 1:
              printf("Hai Scelto Caffè Espresso\n");
           break;
           case 2:
              printf("Hai Scelto Caffè Macchiato\n");
           break;
           case 3:
              printf("Hai Scelto Caffè Decaffeinato\n");
           break;
           case 4:
              printf("Hai Scelto Caffè Decaffeinato Macchiato\n");
           break;
           case 5:
              printf("Hai Scelto Cappuccino\n");
           break;
           case 6:
              printf("Hai Scelto Cioccolata Calda\n");
           break;
           case 7:
              printf("Hai Scelto Te' Limone\n");
           break;
           case 8:
              printf("Hai Scelto Te' Pesca\n");
           break;
           case 9:
              printf("Hai Scelto Caffè Ginseng\n");
           break;
           case 10:
              printf("Hai Scelto Caffè Orzo\n");
           break;
           default:
              printf("La Scelta Non È Presente\n");
           break;}

	
	
	/* Chiedo all'utente quanto zucchero vuole */
	printf("Prego inserire la quantita' di zucchero: ");
	scanf("%d", &zucchero);
 
	/* Preparazione della bevanda */
	printf("IN PREPARAZIONE\n");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-\n");
	printf("BEVANDA PRONTA PRELEVARE PREGO\n");
	
	return(0);
}
