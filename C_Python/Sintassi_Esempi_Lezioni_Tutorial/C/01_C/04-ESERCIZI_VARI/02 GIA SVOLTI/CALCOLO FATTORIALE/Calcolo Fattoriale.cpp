#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    int n , fattoriale, cifra, j=2, cifra2;
    
    cout << "\n\n   Inserire Un Valore Di Numero Positivo : ";
    cin >> n;
    
    cifra=n;
    cifra2=cifra;
    
    printf("\n\n");
    
    printf("   %d! =\n\n", cifra);
    
    printf("   %d x", cifra2);
    
    while(j < cifra){
    --cifra;
    printf(" %d x", cifra);}
    
    printf(" %d = ", 1);
    
    fattoriale = 1;
        
    for (int i=1; i<=n; i++){
    fattoriale = fattoriale * i;}
        
    cout << "\n\n\n   Il fattoriale di " << n <<"!" " e' = " << fattoriale << "\n\n";
    
    system("PAUSE");
    getch();
    return 0;}  

