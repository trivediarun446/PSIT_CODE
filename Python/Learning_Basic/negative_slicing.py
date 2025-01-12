name = "arun"

print(name[-3:-1])
  #>>> ru

  
#it will print the run 
#we can also conver the negative slicing into the positive slicing 
print(name[1:3])
    #>>> ru

# Agar colon ke idhar udhar kuch nhi likha hai to iska mtlb hai ki vo start 0 se ho raha hai aur khtm length -1 par ho raha hai 
print(name[:])
    #>>> arun 

# Ab agar ek side likha hai aur dusri side nhi likha hai 
    #if left side is nothing 
print(name[:3])
    #>>> arun 

    #If right size is nothing 
print(name[1:])
     # >>> run