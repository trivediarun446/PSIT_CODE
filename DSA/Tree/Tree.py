from collections import deque 

class node :
    def __init__(self , x):
       self.val = x 
       self.left = None 
       self.right = None 

q = deque() 

rootval = int(input("Enter root value")) 

root = node(rootval)
q.append(root) 
while q :
    temp = q.popleft() 
    leftval = int(input("enter the left node value "))
    if leftval != -1 :
        temp.left = node(leftval) 
        q.append(temp.left) 
    rightval = int(input("Enter the right node value "))
    if rightval != -1 : 
        temp.right = node(rightval) 
        q.append(temp.right) 
print("Done")