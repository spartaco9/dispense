
##[PYTHON3]##

#importa PdfFileWriter e PdfFileReader
#classe dalla libreria PyPDF2
from PyPDF2 import PdfFileWriter, PdfFileReader
  
#crea un oggetto PdfFileWriter
out = PdfFileWriter()
  
#Apre e legge il nostro file PDF con PdfFileReader
file = PdfFileReader("acca1.pdf")
  
#Ottiene il numero di pagine nel file originale

num = file.numPages
  
#Scorre ogni pagina del file originale e lo aggiunge al nuovo file.

for idx in range(num):
    
#Ottiene la pagina in index idx

    page = file.getPage(idx)
##page = file.getPage(0)
      
#Aggiunge la pagina al file di output

    out.addPage(page)

#Crea una password variabile e archivia la nostra password in esso
#password = "pass"
password = ""
  
#Critta il nuovo file con la password inserita
out.encrypt(password)
  
#Apre un nuovo file "encrypt.pdf"
with open("encrypt.pdf", "wb") as f:
    
#Scrive il PDF crittato su questo file
    out.write(f)
