#include <cstdlib>
#include <iostream>

#include "prof.h"
#include <conio.h>

using namespace std;

    struct MP3
    {
       string titolo;
       string autore;
       int durata;
       string url;
    };

//conta le righe del file che contiene i dati sugli MP3
//per sapere  quanti elementi mettere nel vettore
//attenzione: nel file non bisogna andare a capo dopo l'ultima riga
int contaRighe(string nomeFile)
{
  int cont=0;
  string riga=leggiRiga(nomeFile);

  while(riga != "#FINITO#")
  {
    cont++;
    riga=leggiRiga(nomeFile);
  }
  return cont;

}



int carica(string nomeFile, MP3 v[])
{
   int cont=0;
   string riga = leggiRiga(nomeFile);
  
   while (riga != "#FINITO#")
   {
      v[cont].titolo = riga;

      
      riga = leggiRiga(nomeFile);
      v[cont].autore = riga;


      riga = leggiRiga(nomeFile);
      v[cont].durata = atoi(riga.c_str());


      riga = leggiRiga(nomeFile);
      v[cont].url = riga;


      riga = leggiRiga(nomeFile);
 
      cont ++;
   }

   return cont;
}

void salva(string nomeFile, MP3 v[], int quantiMP3)
{
   //elimino vecchi dati
   elimina(nomeFile);

   for(int i=0; i<quantiMP3; i++)
   {
      registraRiga(nomeFile, v[i].titolo);
      registraRiga(nomeFile, v[i].autore);
      registraRiga(nomeFile, intToString(v[i].durata) );
      registraRiga(nomeFile, v[i].url);
   }
}

//maxMP3: dimensione vettore struct da non superare
//giaInseriti: mp3 attualmente presenti nel vettore
//RESTITUISCE:
void aggiungi(MP3 v[], int giaInseriti)
{
  cout << "Inserire Titolo: ";
  cin >> v[giaInseriti].titolo;

  cout << "\nInserire Autore: ";
  cin >> v[giaInseriti].autore;

  cout << "\nInserire Durata (in sec.): ";
  cin >> v[giaInseriti].durata;

  cout << "\nInserire indirizzo da cui scaricare: ";
  cin >> v[giaInseriti].url;

}

int cerca(MP3 v[], int numMp3, string cercato)
{
   int pos = 0;
   while( pos<numMp3 && v[pos].titolo!=cercato)
     pos++;
   
   if (v[pos].titolo==cercato)
     return pos;
   else
     return -1;
}

void visualizzaTutti(MP3 v[], int quantiMP3)
{
    for (int i=0; i<quantiMP3; i++)
    {
      cout << "Titolo: " << v[i].titolo<< endl;
      cout << "Autore: " << v[i].autore << endl;
      cout << "Durata: " << v[i].durata << endl;
      cout << "url: " << v[i].url << endl;
      cout << "--------------------------------" << endl;
    }

     cout << "INVIO per continuare ... ";
     while (!kbhit());
}

extern string oldFile;

int contaCompatta(string nomeFile)
{
  int cont=0; string riga;
  
  while( (riga = leggiRiga(nomeFile)) != "#FINITO#")
    cont++;

    
  return cont;

}
 
int main(int argc, char *argv[])
{

    cout << oldFile;
    //registraRiga("prova.txt", "riga 1");

    attendi("prova libreria");
    char *stringaProva = allocaStringa("prova");
    
    int numMP3=0; //MP3 gia' caricati
    
    //il vettore ha tanti elementi quanti sono
    //gli MP3 nel file + 30 per nuovi inserimenti
    numMP3 = contaRighe("MP3.txt") / 4;
    int maxMP3 = numMP3 + 30;
 
    
    MP3 collezione[ maxMP3 ];

     int scelta = -1;
    //menù principale
    do
    {
      system("cls"); //pulisci schermo
      cout << "1 - Carica catalogo da disco (MP3.txt)" << endl;
      cout << "2 - Salva catalogo su disco (MP3.txt)" << endl;
      cout << "3 - Aggiungi una scheda MP3" << endl;
      cout << "4 - Cerca una scheda " << endl;
      cout << "5 - Visualizza tutti" << endl;

      cout << "9 - FINE PROGRAMMA" << endl;

      
      cout <<"SCEGLI -> ";
      cin >> scelta;

      switch (scelta)
      {
         case 1: numMP3 = carica("MP3.txt", collezione);
           break;
         case 2: salva("MP3.txt", collezione, numMP3);
           break;
         case 3:
            if (numMP3<maxMP3)
            {
              aggiungi(collezione, numMP3);
              numMP3++;
            }
            else
            {
              cout<< "Vettore pieno ... impossibile inserire" << endl;
              cout <<"Premi un tasto per continuare ...";
              while (!kbhit());
            }

           break;
         case 4: 
              {
              string titoloCercato=""; //usata per chiamare la ricerca
              int pos = -1;
              
              cout<< "Inserisci il titolo da cercare " << endl;
              cin >> titoloCercato;
              
              if ( (pos = cerca(collezione, numMP3, titoloCercato)) >=0)
              {
                cout << "Titolo: " << collezione[pos].titolo<< endl;
                cout << "Autore: " << collezione[pos].autore << endl;
                cout << "Durata: " << collezione[pos].durata << endl;
                cout << "url: " << collezione[pos].url << endl;
                
                attendi("Premi un tasto per continuare");                   
              }
              else
                attendi("MP3 non trovato. Premi un tasto per continuare...");
              }
              
           break;
         case 5: visualizzaTutti(collezione, numMP3);
          break;
      }

    } while (scelta != 9);

    return EXIT_SUCCESS;
}
