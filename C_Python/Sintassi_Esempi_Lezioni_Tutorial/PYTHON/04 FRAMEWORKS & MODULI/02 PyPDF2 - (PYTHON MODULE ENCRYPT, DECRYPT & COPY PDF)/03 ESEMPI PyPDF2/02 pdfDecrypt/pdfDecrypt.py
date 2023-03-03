
##[PYTHON3]##

#importa PdfFileWriter e PdfFileReader
# classe dalla libreria PyPDF2
from PyPDF2 import PdfFileWriter, PdfFileReader
  
# Crea un oggetto PdfFileWriter
out = PdfFileWriter()
  
#Apre il file PDF crittato con PdfFileReader
file = PdfFileReader("encrypt.pdf")
  
#Memorizza la password corretta in una variabile.
password = ""
  
#Controlla se il file aperto è effettivamente crittato
if file.isEncrypted:
  
#Se crittato, decrittalo con la password
    file.decrypt(password)

     #Ora, il file è stato sbloccato.
     #Scorri in ogni pagina del file
     #e aggiungilo al nostro nuovo file.
    for idx in range(file.numPages):
        
        #Ottieni la pagina in index idx
        page = file.getPage(idx)
          
        #Aggiunge la pagina corrente al file di output
        out.addPage(page)
      
        #Apre un nuovo file "decrypt.pdf"
    with open("decrypt.pdf", "wb") as f:
        
        #Scrive il PDF decrittato su questo file
        out.write(f)
  
    #Stampa il messaggio di successo al termine
    print("File decrittato con successo.")
else:
    
    #Se il file non è crittografato, stampare il file
    #Messaggio
    print("Il file è già decrittato.")
