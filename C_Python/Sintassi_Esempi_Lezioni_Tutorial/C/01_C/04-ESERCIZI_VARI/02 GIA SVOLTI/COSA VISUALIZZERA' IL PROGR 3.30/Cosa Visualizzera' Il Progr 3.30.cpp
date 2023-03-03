#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	
	int riga=10;
	int colonna;
	
	while(riga>=1){
		colonna=1;
		
		while(colonna <=10){
			
			printf("%s", riga %2 ? "<" : ">");
			++colonna;}
			
			--riga;
			printf("\n");}
			
			getch();
			return 0;}
