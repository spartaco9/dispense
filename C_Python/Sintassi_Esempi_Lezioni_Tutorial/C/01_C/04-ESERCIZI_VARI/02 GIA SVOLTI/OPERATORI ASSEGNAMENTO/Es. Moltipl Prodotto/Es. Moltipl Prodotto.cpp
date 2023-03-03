#include <stdio.h>
#include <conio.h>

int main(){
	
	int c, prodotto; //inizializzati a zero quindi se li si moltiplica per qualsiasi altro numero verra' sempre zero come risultato.
	
	while(c<=5){
		prodotto*=c;
		++c;
	}
	
	printf("\n\n   Il Prodotto E' : %d \n", c);

getch();
return 0;

}
