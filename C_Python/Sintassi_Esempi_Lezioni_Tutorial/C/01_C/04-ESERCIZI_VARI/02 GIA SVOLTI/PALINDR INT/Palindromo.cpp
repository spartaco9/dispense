#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	
	int palindromo, numero[3], numero2[2];
	
	
	printf("Inserire Un Numero Di 5 Cifre : ");
	scanf("%d", &numero[0]);
	
	printf("Inserire Un Numero Di 5 Cifre : ");
	scanf("%d", &numero[1]);
	
	printf("Inserire Un Numero Di 5 Cifre : ");
	scanf("%d", &numero[2]);
	
	printf("Inserire Un Numero Di 5 Cifre : ");
	scanf("%d", &numero2[0]);
	
	printf("Inserire Un Numero Di 5 Cifre : ");
	scanf("%d", &numero2[1]);

	 numero[0] % 100;
	 numero[1] % 100;
	 numero[2] % 100;
	 numero2[0]  % 100;
	 numero2[1]  % 100;
	 
	 if(numero[1] == numero2[0]){
	 if(numero[0] == numero2[1])

	printf("\n\n%d", numero[0]);
	printf("\n\n%d", numero[1]);
    printf("\n\n%d", numero[2]);
	printf("\n\n%d", numero2[0]);
	printf("\n\n%d", numero2[1]);}
	
	else{printf("\n\n   Il Numero Non E' Un palindromo");}
	
	
	getch();
	return 0;}
