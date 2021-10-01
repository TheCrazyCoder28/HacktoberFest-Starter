#Modules 
import pandas as pd
import numpy as np
import mysql.connector as connc

#import sqlite3

global roll_no, name, subject, marks

global dbms, cur 


#cur.execute("create database prac;")
#cur.execute("create table ak (roll_no int(3) PRIMARY KEY, name char(25), subject char(20), marks int(3))")


def main():
    print("\t\t\tWelcome to Student Database Management System")
    global dbms, cur 
    while True:

        dbms = connc.connect(host="localhost", user='root', passwd='akki', database='prac')
        cur=dbms.cursor()

        print("\n1. Enter New Record")
        print("2. Update Old Record")
        print("3. Delete Any Record")
        print("4. Show Records")
        print("5. Exit\n")

        user_choice=int(input("Choose any option: "))
        if(user_choice==1):
            add_record()
        elif (user_choice==2):
            update_record()
        elif (user_choice==3):
            delete_record()
        elif (user_choice==4):
            show_record()
        elif user_choice==5:
            break
        else:
            print("Enter Valid Input")



def add_record():
    #conn = connc.connect(host="localhost", user="Anonymous", passwd="123")
    #print("Akki")
    '''conn.execute("""

                    create table students
                    (Roll_no INT PRIMARY KEY,
                    Name TEXT,
                    Class TEXT,
                    Subject TEXT,
                    Marks INT)
    
    """)

    print("Success")'''

    '''roll_no = int(input("Enter Roll no: "))
    name = input("Enter name: ")
    user_class = input("Enter class: ")
    subject = input("Enter subject: ")
    marks = int(input("Enter marks: "))'''

    global roll_no, name, subject, marks, cur, dbms
    print()
    roll_no = int(input("Enter your Roll No: "))
    name = input("Enter your name: ")
    subject = input("Enter your subject: ")
    marks = int(input("Enter your marks: "))

    command = "insert into ak values (%s, %s, %s, %s)"
    val = (roll_no, name, subject, marks)
    cur.execute(command,val)
    dbms.commit()
    cur.close()
    print("\n\t---Successfully Added---")
    #print("Enter Unique Roll No")



def update_record():
    global roll_no, name, subject, marks, cur, dbms

    print("\n\nUPDATE OLD RECORDS\n")

    print("Which record you wanna update?")
    update = int(input("Enter roll no of record that u wanna update: "))

    print("\n\nWhat do you wanna update in that particular record?")
    print("1. Update Roll No")
    print("2. Update Name")
    print("3. Update Subject")
    print("4. Update Marks\n")
    opt = int(input("Enter your choice: "))
    if opt==1:
        
        new_roll_no = int(input("Enter new roll no. :"))
        command = "update ak set roll_no=%s where roll_no=%s" 
        val = (new_roll_no,update)
        cur.execute(command,val)
        dbms.commit()
        print("\n\t---Successfully Updated---")


    elif opt==2:
        
        new_name = input("Enter new name :")
        command = "update ak set name=%s where roll_no=%s" 
        val = (new_name,update)
        cur.execute(command,val)
        dbms.commit()
        print("\n\t---Successfully Updated---")


    elif opt==3:

        new_subject = input("Enter new subject :")
        command = "update ak set subject=%s where roll_no=%s" 
        val = (new_subject,update)
        cur.execute(command,val)
        dbms.commit()
        print("\n\t---Successfully Updated---")


    elif opt==4:
        
        new_marks = input("Enter new marks :")
        command = "update ak set marks=%s where roll_no=%s" 
        val = (new_marks,update)
        cur.execute(command,val)
        dbms.commit()
        print("\n\t---Successfully Updated---")


    else:
        print("Chose Valid Option")

    




def delete_record():
    global roll_no, name, subject, marks, cur, dbms
    
    print("\n\nDELETE ANY RECORD:")
    
    roll_no_to_del = int(input("Enter Roll No. whose record u wanna delete: "))
    command="delete from ak where roll_no=%s"
    val = (roll_no_to_del, )
    try:
        cur.execute(command,val)
        dbms.commit()
        print("\n\t---Successfully Deleted---")
    except Exception:
        print("Enter valid roll no")    #It will not execute coz try and except are in a function
    


def show_record():
    global roll_no, name, subject, marks, cur, dbms
    print("\n\nRECORDS: ")

    print("1. See all the records")
    print("2. See any specific record")
    user_opt = int(input("Choose your option: "))
    print()
    if user_opt==1:
        cur.execute("select * from ak")
        all_record=cur.fetchall()
        for i in all_record:
            print(i)
    
    elif user_opt==2:
        roll_no_to_show = int(input("Enter roll no whose record you wanna see: "))
        command= "select * from ak where roll_no=%s"
        val = (roll_no_to_show, )
        cur.execute(command,val)
        show = cur.fetchone()
        #print(show)
        x=1
        print()
        for i in show:
            if x==1:
                print("Roll No: ",i)
            elif x==2:
                print("Name :", i)
            elif x==3:
                print("Subject: ",i)
            elif x==4:
                print("Marks: ",i)
            x+=1
    else:
        print("Choose valid option")
    
    #print(f"Roll No. {roll_no} whose name is {name} got {marks} marks in {subject}.")
    #print("Roll No. %d whose name is %s got %d marks in %s." % (roll_no, name, marks, subject))

    

main()

