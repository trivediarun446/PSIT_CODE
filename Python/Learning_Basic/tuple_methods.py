# count function : this function is for counting the number element come in tuple 
a=(False, "arun",343 , 45, 467.43) 
num = a.count(45)
# >>> it will return the occurence of 45 in tuple 
print(num)

# We can concatenate the two tuple by using + operator. but for concetination we always make a new tuple because tuple is immutable so we can not add two tuple into onw tuple 

b =(False, "arun",343 , 45, 467.43)
c=(True, "tiwari ji",34 , 90, 4637.3) 
concatenate= b+c 
print(concatenate)

# index function is used for the returning  the index of given value 
i = a.index(467)
# index function never move forward if it will one's find the element 
print(i)

# Tuple Unpacking: A great feature of tuples is that you can unpack their values into variables.
my_tuple = (1, 2, 3, 'apple')

a, b, c = (1, 2, 3)
print(a, b, c)  # Output: 1 2 3


# Membership Testing: You can check whether an element exists in a tuple: