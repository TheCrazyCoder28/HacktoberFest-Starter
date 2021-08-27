from tkinter import *

root = Tk()

canvas_width = 800
canvas_height = 400

root.geometry(f"{canvas_width}x{canvas_height}")

can_widget = Canvas(root,width = canvas_width,height = canvas_height)
can_widget.pack()

can_widget.create_line(50,400,800,8, fill = "red")
# Rectangle
can_widget.create_rectangle(30,50,750,350)
# Text
can_widget.create_text(200,200, text="hello")
# Oval
can_widget.create_oval(30,50,750,350)
root.mainloop()