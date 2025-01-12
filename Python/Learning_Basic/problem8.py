# write a programe in python to find biggest of given 3 numbers from the command 
num1 = int(input("Enter the number 1:"))
num2=int(input("enter the number 2:"))
num3=int(input("enter the number 3:"))
if(num1>num2 and num1>num3):
    print(f"{num1} is grater than {num2} and {num3}")
elif(num2>{num1} and num2>num3):
    print(f"{num2} is grater than {num1} and {num3}")
else: 
    print(f"{num3} is grater than {num1} and {num2}")