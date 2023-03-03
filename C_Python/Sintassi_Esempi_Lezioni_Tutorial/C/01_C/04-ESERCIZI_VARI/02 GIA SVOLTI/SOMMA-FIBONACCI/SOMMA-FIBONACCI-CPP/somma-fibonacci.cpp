 #include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

int i = 1, n, k, somma = 1, sk = 1;
bool err;

do{
err = false;
cout<<"Inserire un numero positivo: ";
cin>>n;
if(cin.fail()){
cin.clear();
cin.ignore(1000, '\n');
err = true;
cout<<"Errore: dato immesso non valido! Riprova..."<<endl;
}
} while(err == true);

while(somma <= n){
cout<<"I numeri della successione numerica "<<i<<" sono "<<i<<endl;
i++;
cout<<somma<<endl;
somma += i;
}

cout<<"La somma è uguale a "<<somma<<endl;

k = i-1;

while(sk <= k){
cout<<"I numeri della successione numerica"<<i<<" sono "<<i<<endl;
i++;
cout<<sk<<endl;
sk += i;
}

cout<<"La somma di k è uguale a "<<sk<<endl;

return 0;}