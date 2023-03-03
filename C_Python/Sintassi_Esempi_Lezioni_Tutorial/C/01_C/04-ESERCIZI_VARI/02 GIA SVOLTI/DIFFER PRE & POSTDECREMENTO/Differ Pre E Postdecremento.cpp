#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main(){
	
	int a=5, b=6, c, risultato=100, i=10;
	
	printf("\n\n\n   Immettere Un Qualsiasi Numero Per Iniziare (-1 Per Terminare) : ");
	scanf("%d", &c);
	
	while(c != -1){
		
	   printf("\n\n\n\n\n   PRIMA :\n   Risultato = %d\n", risultato);
	
	if(a == 5){
	   for(risultato; risultato>i; risultato--);
	   printf("\n\n   1) Questo E' Un Postdecremento Da 100 A %d\n        Decrescendo Di Uno, Esempio : ", i);
	   printf("\n\n                     a--");}
	   
	if(b != 5){
	   for(risultato; risultato>i; --risultato);
	   printf("\n\n\n   2) Questo E' Un Predecremento Da 100 A %d\n        Decrescendo Di Uno, Esempio : ", i );
	   printf("\n\n                     --a");}
	   
	   printf("\n\n   DOPO :\n   Risultato = %d", risultato);
	   break;}
	   
	   printf("\n\n\n\n\n                    Premere Un Tasto Per Continuare...");
	   
	getch();
	return 0;}
