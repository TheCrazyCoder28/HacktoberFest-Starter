# NOTEPAD In Python

from tkinter import *
from tkinter import filedialog as fd
from tkinter import messagebox as tmsg
import os

#Functions:

def newfile():
    global file
    root.title('Untitled - Notepad')    #It will change or put a new title to the new file
    file=None   #We reseted the file variable by storing or putting None in it coz we have to use same file variable in openfile & savefile function also.
    textarea.delete(1.0,END)        #It will delete the content of text box from 1 row and 0th column to the END.
    
def openfile():
    global file
    file=fd.askopenfilename(defaultextension='.txt',filetypes=[('All Files','*.*'),('Text Documents','*.txt')]) #It will return the selected file path
    if file=='':
        file=None
    else:
        root.title(os.path.basename(file) + ' - Notepad') #It will change the title of file to filename - Notepad
        textarea.delete(1.0,END)        #It will delete the old content of file (if any)
        f=open(file,'r')    #It will open the file in read mode
        textarea.insert(1.0,f.read())   #It will insert the content of file from 1 row and 0th column to till the last character of file
        f.close()   #It will close the file
    

def savefile():
    global file
    if file==None:
        file=fd.asksaveasfilename(initialfile='Untitled.txt',defaultextension='.txt',filetypes=[('All Files','*.*'),('Text Documents','*.txt')])

        if file=='': #It means if no file is selected than,
            file=None
        else:
            #Save as a new file
            f = open(file,'w')
            f.write(textarea.get(1.0,END))  #It will write all the content from starting to the end
            f.close()

            root.title(os.path.basename(file)+' - Notepad')

    else:
        #Save the file
        f = open(file,'w')
        f.write(textarea.get(1.0,END))  #It will write all the content from starting to the end
        f.close()
            

def cutcontent():
    textarea.event_generate('<<Cut>>')

def copycontent():
    textarea.event_generate('<<Copy>>')

def pastecontent():
    textarea.event_generate('<<Paste>>')

def about():
    tmsg.showinfo('Notepad','Notepad by Logical Coder')

root=Tk()
root.geometry('800x550')
root.wm_iconbitmap('Image/2.ico')
root.title('Untitled - Notepad (Logical Coder)')

'''Menus of Notepad'''

mainmenu=Menu(root)
#File Menu
filemenu=Menu(mainmenu,tearoff=0)
filemenu.add_command(label='New',command=newfile)
filemenu.add_command(label='Open',command=openfile)
filemenu.add_command(label='Save',command=savefile)
filemenu.add_separator()
filemenu.add_command(label='Exit',command=root.destroy)
mainmenu.add_cascade(label='File',menu=filemenu)

#Edit Menu
editmenu=Menu(mainmenu,tearoff=0)
editmenu.add_command(label='Cut',command=cutcontent)
editmenu.add_command(label='Copy',command=copycontent)
editmenu.add_command(label='Paste',command=pastecontent)
mainmenu.add_cascade(label='Edit',menu=editmenu)

#Help Menu
helpmenu=Menu(mainmenu,tearoff=0)
helpmenu.add_command(label='About Notepad',command=about)
mainmenu.add_cascade(label='About',menu=helpmenu)

root.config(menu=mainmenu)

'''Scroll Bar'''
#Vertical Scrollbar
scroll=Scrollbar(root)
scroll.pack(side=RIGHT,fill=Y)


#Status Bar
status_text=StringVar()
status_text.set('By Logical Code')
sbar=Label(textvar=status_text,relief=SUNKEN,anchor='w',padx=5)
sbar.pack(side=BOTTOM,fill=X)


'''Text Area'''
textarea=Text(root,yscrollcommand=scroll.set,font='lucida 14 ')
textarea.pack(expand=True,fill=BOTH)#Expand equals to true means, the textarea will take the whole width and height of parent i.e. root means complete window of GUI. 
file=None


scroll.config(command=textarea.yview)






root.mainloop()
