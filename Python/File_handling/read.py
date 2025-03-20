file  = open("sample.txt" , 'r') 

# content = file.read() 

# print("This content is print using read function")
# print(content) 

# print( "this content is print using readline function for printing line by line data ")
# i=0 
# for line in file: 
#         if i==0 :
#             print(line.strip())
#             break 


print("Printing file content using readlines function ")

content = file.readlines() 
print(content)
file.close()

