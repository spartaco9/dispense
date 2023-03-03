#include <stdio.h>
#include <conio.h>

int main(){
	
	int count;
	
	printf("\n\n\n   IMMETTI UN VALORE : ");
	scanf("%d", &count);
	
	if(count <= 10){printf("\n\n\n   Contatore E' Minore Di 10", count);}
	
	if(count >= 10){printf("\n\n\n   Contatore E' Maggiore A 10\n");}

getch();
return 0;
	
}
