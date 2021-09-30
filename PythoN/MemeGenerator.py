#Modules

from tkinter import *  
from tkinter import filedialog as fd
import requests
from PIL import Image, ImageTk
from io import BytesIO 


global meme_data
global new_meme


def next_meme():
    global meme_data
    global new_meme
    new_meme_request = requests.get("https://meme-api.herokuapp.com/gimme/ProgrammerHumor").json()
    new_url = new_meme_request['url']
    meme_url = requests.get(new_url)
    meme_content = meme_url.content
    new_meme = Image.open(BytesIO(meme_content))
    resized_meme = new_meme.resize((550,500), Image.ANTIALIAS)
    final_meme = ImageTk.PhotoImage(resized_meme)
    memeimg.configure(image=final_meme)
    memeimg.image = final_meme
    meme_data='NULL'


def download_image():
    global meme_data
    global new_meme
    if (meme_data!='NULL'):
        export_file_path = fd.asksaveasfilename(defaultextension='.jpg',filetypes= [('Image (.jpg file)','.jpg')] )
        meme_data=meme_data.convert('RGB')
        meme_data.save(export_file_path)
    else:
        export_file_path = fd.asksaveasfilename(defaultextension='.jpg',filetypes= [('Image (.jpg file)','.jpg')] )
        new_meme=new_meme.convert('RGB')
        new_meme.save(export_file_path)



if __name__ == '__main__' :

    #Main Window Configuration
    root = Tk()
    root.geometry("700x700")
    root.title("Meme Generator")
    root.config(bg="#F2F2F2")
    root.minsize(700,700)
    root.maxsize(700,700)
    root.wm_iconbitmap('E:\Akki Prac\Python\Tkinter\MemeGenerator\Images\meme1.ico')

    #Main Title
    head = Label(text="Meme Generator", font="poppins 25 bold", bg="#19242D", fg="white")
    head.pack(fill=X)

    #Requesting Memes
    meme_request = requests.get("https://meme-api.herokuapp.com/gimme/ProgrammerHumor").json()
    url = meme_request['url']
    meme = requests.get(url)
    meme_data = meme.content    #Stores image data in meme_data var
    meme_data = Image.open(BytesIO(meme_data))      #Converts the data back to picture format
    resized_image = meme_data.resize((570,500), Image.ANTIALIAS)
    meme_image = ImageTk.PhotoImage(resized_image)          

    #Packs the meme on the Window
    memeimg = Label(image= meme_image)
    memeimg.pack(pady=35)

    #Frame to pack next and download button
    frame1 = Frame(root)
    frame1.pack(side = BOTTOM,pady=10)

    down_button = Button(frame1,text="Download", font="Asap 15 bold", bg="#0090FF", fg="white", padx=8, pady=3,command=download_image)
    down_button.pack(side=LEFT,padx=15)

    next_button = Button(frame1,text="Next", font="Asap 15 bold", bg="#0090FF", fg="white", padx=35, pady=3,command=next_meme)
    next_button.pack(side=RIGHT,padx=15)


    #MainLoop or Infinite Loop to run the application
    root.mainloop()

