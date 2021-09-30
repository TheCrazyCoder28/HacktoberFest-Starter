import requests
from PIL import Image
from io import BytesIO 


print("Welcome To Coding Meme Generator: ")
print("How many memes you wanna download: ")
val = int(input())

#Requesting Memes
meme_request = requests.get("https://meme-api.herokuapp.com/gimme").json()
img_url = meme_request['url']
img_url = requests.get(img_url)
meme_content = img_url.content
new_meme = Image.open(BytesIO(meme_content))
picture = new_meme.save("meme.jpg") 

