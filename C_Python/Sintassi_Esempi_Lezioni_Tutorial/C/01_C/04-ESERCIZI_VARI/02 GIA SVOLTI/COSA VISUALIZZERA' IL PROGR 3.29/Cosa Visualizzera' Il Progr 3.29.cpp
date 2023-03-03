#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main(){
	
	int count = 1;
	
	while(count <= 10){
		
		printf("%s\n", count % 2 ? "****" : "++++++++");
		count++;}
		
		getch();
		return 0;
	}
