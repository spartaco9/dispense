#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

main()

{
	
	int a;
	
	printf("\n\nINSERIRE UN NUMERO : ");
	scanf("%d", &a);
	
	    	
		   
	  if (a % 2 == 1) {printf("\nIl Numero E' Dispari ", a);}
      if (a % 2 == 0) {printf("\nIl Numero E' Pari ",    a);} 
  

		
	getch();
	return 0;

}
