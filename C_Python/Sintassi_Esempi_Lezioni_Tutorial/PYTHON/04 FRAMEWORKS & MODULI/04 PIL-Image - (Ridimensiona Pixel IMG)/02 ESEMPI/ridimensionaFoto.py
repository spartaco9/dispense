
from PIL import Image

openImg = Image.open("/home/black-jack/Scrivania/cover.jpg")  
newsize = (1600, 1600) 
img = openImg.resize(newsize) 
img.save('/home/black-jack/Scrivania/cover.jpg')

