
from PyPDF2 import PdfMerger

pdfs = ['1.pdf', '2.pdf']

merger = PdfMerger()

for pdf in pdfs:
    merger.append(pdf)

merger.write("prova.pdf")
merger.close()
