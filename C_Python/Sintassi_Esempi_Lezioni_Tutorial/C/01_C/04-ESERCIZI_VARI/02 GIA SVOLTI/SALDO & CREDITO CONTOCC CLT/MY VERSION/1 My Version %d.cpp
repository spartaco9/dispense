#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	int SaldoInizioMese;                                 // =1
	
	int TotArticoli, TotCrediti, Contatore, ValSentin, NumCC;
	
	int LimiteCreditoConcesso, NuovoSaldo;            //   =1
	
	printf("\n\n  (IMMETTERE UN NUMERO PER PROSEGUIRE OPPURE DIGITARE -1 PER TERMINARE) : ");
	scanf("%d", &ValSentin);
	
	while(ValSentin != -1){                                                                              // fin quando non si Immette -1
	    	Contatore+=NuovoSaldo;                                                                      // Nel While Che Legge Tutto Questo
		    ++Contatore;                                                                               // Corpo D' Istruzioni, Da Qui
		                                                                                              // Fino A :
	printf("\n\n-------------------------------------------------------------------------------\n\n");
		    
    printf("\n   Immettere Il Numero Di Conto Corrente : ");
	scanf ("%d", &NumCC);
		
	   if (NumCC == 0){                                                                                              // Scorrere Giu
	   printf("\n\n\n (SPIACENTI !! NON E' STATO IMMESSO NESSUN VALORE)\n\n ");                                     //     
	   break;}                                                                                                           //      
	                                                                                                                    //  
	    printf("\n\n");                                                                                                //
	                                                                                                                  //
	printf("   Immettere Saldo Iniziale : ");                                                                        //
	scanf ("%d", &SaldoInizioMese);                                                                            //  \  /
	                                                                                                          //   \ /      \*
	    printf("\n\n");                                                                                      //    \/       \*
	
	printf("   Immettere Spese Totali - Mese Corrente : ");
	scanf ("%d", &TotArticoli);
	    
	    printf("\n\n");
	
	printf("   Immettere Totale Crediti - Mese Corrente : ");
	scanf ("%d", &TotCrediti);
	
	    printf("\n\n");
	
	printf("   Immettere Limite Di Credito Concesso : ");
	scanf ("%d", &LimiteCreditoConcesso);
	
	NuovoSaldo=SaldoInizioMese+TotArticoli-TotCrediti;
	
	if (NuovoSaldo <= LimiteCreditoConcesso){
	    printf("\n\n\n (IL NUOVO SALDO NON SUPERA IL LIMITE DI CREDITO DEL CLIENTE)   ");}
        
	
	else {NuovoSaldo >= LimiteCreditoConcesso;
	
        printf("\n\n\n   Conto Corrente : %d\n\n\n", NumCC);   
		printf("   Limite Di Credito : %d\n\n\n   Nuovo Saldo Cliente : %d   ", LimiteCreditoConcesso, NuovoSaldo);
	    printf("\n\n\n (LIMITE DEL CREDITO SUPERATO)   ");}
	    
	    printf("\n\n-------------------------------------------------------------------------------\n\n");
	
	printf("\n  (IMMETTERE UN NUMERO PER PROSEGUIRE OPPURE DIGITARE -1 PER TERMINARE) : ");
	scanf("%d", &ValSentin);}                                                                 // Fino A Qui (Fine Corpo While)
	
    printf("\n\n\n     ...PREMERE UN TASTO PER CONTINUARE..."); 
	
	getch();
    return 0;}
