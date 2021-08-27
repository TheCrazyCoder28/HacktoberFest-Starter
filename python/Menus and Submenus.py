from tkinter import *

root = Tk()
root.geometry("600x500")

def myfunc():
    print("Pressed")

# #Use these to create a non dropdown menu
# mymenu = Menu(root)
# mymenu.add_command(label="File", command=myfunc)
# mymenu.add_command(label="Exit", command=quit)
# root.config(menu=mymenu)

mainmenu = Menu(root)
m1 = Menu(mainmenu)
m1.add_command(label="New Project",command=myfunc)

m1 = Menu(mainmenu, tearoff=0)
m1.add_command(label="New project", command=myfunc)
m1.add_command(label="Save", command=myfunc)
m1.add_separator()
m1.add_command(label="Save As", command=myfunc)
m1.add_command(label="Print", command=myfunc)

root.config(menu=mainmenu)
mainmenu.add_cascade(label="File", menu=m1)

root.mainloop()