#include <stdio.h>
#include <conio.h>

int main(){
	
	
	int x, somma;
	
	x=1;
	somma=0;
	
	while(x <= 10){
	
	somma+=x;
	x++;}
	
	printf("\n\n   La Somma E' : %d\n", somma);
	
	getch();
	return 0;
	
}
