#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	float SaldoInizioMese;                                 // =1
	
	float TotArticoli, TotCrediti, Contatore, ValSentin;
	
	float LimiteCreditoConcesso, NuovoSaldo;            //   =1
	
	int NumCC;
	
	printf("\n\n  (IMMETTERE UN NUMERO PER PROSEGUIRE OPPURE DIGITARE -1 PER TERMINARE) : ");
	scanf("%d", &ValSentin);
	
	while(ValSentin != -1){                                                                              // fin quando non si Immette -1
	    	Contatore+=NuovoSaldo;                                                                      // Nel While Che Legge Tutto Questo
		    ++Contatore;                                                                               // Corpo D' Istruzioni, Da Qui
		                                                                                              // Fino A :
	printf("\n\n-------------------------------------------------------------------------------\n\n");
		    
    printf("\n   Immettere Il Numero Di Conto Corrente (Valore Intero) : ");
	scanf ("%d", &NumCC);
		
	   if (NumCC == 0){                                                                                              // Scorrere Giu
	   printf("\n\n\n (SPIACENTI !! NON E' STATO IMMESSO NESSUN VALORE)\n\n ");                                     //     
	   break;}                                                                                                           //      
	                                                                                                                    //  
	    printf("\n\n");                                                                                                //
	                                                                                                                  //
	printf("   Immettere Saldo Iniziale : ");                                                                        //
	scanf ("%f", &SaldoInizioMese);                                                                            //  \  /
	                                                                                                          //   \ /      \*
	    printf("\n\n");                                                                                      //    \/       \*
	
	printf("   Immettere Spese Totali - Mese Corrente : ");
	scanf ("%f", &TotArticoli);
	    
	    printf("\n\n");
	
	printf("   Immettere Totale Crediti - Mese Corrente : ");
	scanf ("%f", &TotCrediti);
	
	    printf("\n\n");
	
	printf("   Immettere Limite Di Credito Concesso : ");
	scanf ("%f", &LimiteCreditoConcesso);
	
	NuovoSaldo=SaldoInizioMese+TotArticoli-TotCrediti;
	
	if (NuovoSaldo <= LimiteCreditoConcesso){
	    printf("\n\n\n (IL NUOVO SALDO NON SUPERA IL LIMITE DI CREDITO DEL CLIENTE)   ");}
        
	
	else {NuovoSaldo >= LimiteCreditoConcesso;
	
        printf("\n\n\n   Conto Corrente : %d\n\n\n", NumCC);   
		printf("   Limite Di Credito : %.2f\n\n\n   Nuovo Saldo Cliente : %.2f   ", LimiteCreditoConcesso, NuovoSaldo);
	    printf("\n\n\n (LIMITE DEL CREDITO SUPERATO)   ");}
	    
	    printf("\n\n-------------------------------------------------------------------------------\n\n");
	
	printf("\n  (IMMETTERE UN NUMERO PER PROSEGUIRE OPPURE DIGITARE -1 PER TERMINARE) : ");
	scanf("%f", &ValSentin);}                                                                 // Fino A Qui (Fine Corpo While)
	
    printf("\n\n\n     ...PREMERE UN TASTO PER CONTINUARE..."); 
	
	getch();
    return 0;}
