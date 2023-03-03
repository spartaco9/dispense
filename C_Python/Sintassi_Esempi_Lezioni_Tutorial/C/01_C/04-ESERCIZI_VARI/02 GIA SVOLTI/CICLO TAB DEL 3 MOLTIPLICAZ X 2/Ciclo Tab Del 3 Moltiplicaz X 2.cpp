#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	
	int a=3;
	
	printf("\n\n\t%-4s%-4s%-4s%-4s%", "A", "A+2", "A+4", "A+6\n\n");
	
	while(a <= 15){
		printf("\n\t%-4d%-4d%-4d%-4d%", a, a+2, a+4, a+6);
		a+=3;}
		
		printf("\n\n\n\n Premere Un Tasto Per Terminare...");
		
		getch();
		return 0;}
