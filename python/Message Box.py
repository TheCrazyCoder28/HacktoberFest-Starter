from tkinter import *
import tkinter.messagebox as tmsg

root = Tk()
root.geometry("600x500")

def myfunc():
    print("Pressed")

# #Use these to create a non dropdown menu
# mymenu = Menu(root)
# mymenu.add_command(label="File", command=myfunc)
# mymenu.add_command(label="Exit", command=quit)
# root.config(menu=mymenu)

def help():
    print("I will Helo")
    a = tmsg.showinfo("Help","I will Help you")

def rate():
    b = tmsg.askquestion("Rate us", "Is your Experience good")


mainmenu = Menu(root)
m1 = Menu(mainmenu)
m1.add_command(label="New Project",command=myfunc)

m1 = Menu(mainmenu, tearoff=0)
m1.add_command(label="New project", command=myfunc)
m1.add_command(label="Save", command=myfunc)
m1.add_separator()
m1.add_command(label="Save As", command=myfunc)
m1.add_command(label="Print", command=myfunc)

m2 = Menu(mainmenu, tearoff=0)
m2.add_command(label="Cut", command=myfunc)
m2.add_command(label="Copy", command=myfunc)
m2.add_separator()
m2.add_command(label="Paste", command=myfunc)
m2.add_command(label="Find", command=myfunc)
root.config(menu=mainmenu)
mainmenu.add_cascade(label="Edit", menu=m2)

m3 = Menu(mainmenu, tearoff=0)
m3.add_command(label = "Help", command=help)
m3.add_command(label = "Rate us", command=rate)
mainmenu.add_cascade(label="Help", menu=m3)
root.config(menu=mainmenu)

root.config(menu=mainmenu)
mainmenu.add_cascade(label="File", menu=m1)

root.mainloop()