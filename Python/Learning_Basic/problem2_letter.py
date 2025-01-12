# Write a programe to write a letter and take the user input 
name=input("Enter your name here :")
date = input("enter todays date :")
letter=''' Hlw name 
         Your are selected
         on date '''
print(letter.replace("name",name).replace("date",date))