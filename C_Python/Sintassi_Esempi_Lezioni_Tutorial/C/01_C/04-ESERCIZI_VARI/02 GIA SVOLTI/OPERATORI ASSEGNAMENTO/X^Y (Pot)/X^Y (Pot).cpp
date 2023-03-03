#include <stdio.h>
#include <conio.h>

int main(){
	
	int x, y, i, potenza;
	
	i=1;
	potenza=1;
	
	printf("\n\n   Immere Il Valore Di X : ");
	scanf("%d", &x);
	
	printf("\n\n   Immere Il Valore Di Y : ");
	scanf("%d", &y);
	
	while(i <= y){
		potenza*=x;
		++i;}
		
		printf("\n\n   La Potenza E' Uguale A = %d \n", potenza);
		
		getch();
		return 0;
}
