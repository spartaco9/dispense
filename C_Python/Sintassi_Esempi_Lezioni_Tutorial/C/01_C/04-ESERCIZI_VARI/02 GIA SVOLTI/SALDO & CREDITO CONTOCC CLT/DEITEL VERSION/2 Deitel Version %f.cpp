#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	float SaldoInizioMese;                                 // =1
	
	float TotArticoli, TotCrediti, Contatore;
	
	int NumCC;
	
	float LimiteCreditoConcesso, NuovoSaldo;            //   =1
	
	    printf("\n   Immettere Il Numero Di Conto Corrente (-1 Alla Fine) : ");
	    scanf ("%d", &NumCC);
	
	while(NumCC != -1){                                                                                  // fin quando non si Immette -1
	    	Contatore+=NuovoSaldo;                                                                      // Nel While Che Legge Tutto Questo
		    ++Contatore;                                                                               // Corpo D' Istruzioni, Da Qui
		                                                                                              // Fino A :
	if (NumCC == 0){
		printf("\n\n\n (SPIACENTI !! NON E' STATO IMMESSO NESSUN VALORE)\n\n ");
		break;}
	
	    printf("\n\n   Immettere Saldo Iniziale : ");
        scanf ("%f", &SaldoInizioMese);
		
	    printf("\n\n   Immettere Spese Totali - Mese Corrente : ");
	    scanf ("%f", &TotArticoli);
	    
	    printf("\n\n   Immettere Totale Crediti - Mese Corrente : ");
	    scanf ("%f", &TotCrediti);
	
	    printf("\n\n   Immettere Limite Di Credito Concesso : ");
	    scanf ("%f", &LimiteCreditoConcesso);	
		
	NuovoSaldo=SaldoInizioMese+TotArticoli-TotCrediti;                                                         // Scorrere Giu
	                                                                                                                 //     
	if(NuovoSaldo <= LimiteCreditoConcesso){                                                                        //      
	    printf("\n\n\n (IL NUOVO SALDO NON SUPERA IL LIMITE DI CREDITO DEL CLIENTE)\n\n\n");}                      //  
	                                                                                                              //
	else{NuovoSaldo >= LimiteCreditoConcesso;                                                                    //
	    printf("-------------------------------------------------------------------");                          //
	    printf("\n\n\n\n   Conto Corrente = %d", NumCC);                                                       //
	    printf("\n\n\n   Limite Di Credito = %.2f", LimiteCreditoConcesso);                                   //  
	    printf("\n\n\n   Nuovo Saldo Cliente = %.2f", NuovoSaldo);                                      //  \  /      \*
	    printf("\n\n\n  (LIMITE DEL CREDITO SUPERATO)\n\n\n");}                                        //   \ /       \*
	    printf("-------------------------------------------------------------------");                //    \/        \*
	    printf("\n\n\n   Immettere Il Numero Di Conto Corrente (-1 Alla Fine) : ");
	    scanf ("%d", &NumCC);}                                                               // Fino A Qui (Fine Corpo While)
	
        printf("\n\n\n     ...PREMERE UN TASTO PER CONTINUARE..."); 
	
	getch();
    return 0;}
