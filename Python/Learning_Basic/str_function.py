name="my name is arun trivedi"

#length function determine the length of the string 
print(len(name))
# >>>19

#endswith(" ") this give boolean function we you are entered correct ending character this is also case sensitive  
print(name.endswith("edi"))
# >>>true 

#startswith(" ") This is also similar with endswith (" ")
print(name.startswith("mya"))
# >>> true 

#capitalize () : This fucntion will capitalised the starting character of the string 
print(name.capitalize())
# >>> Mynameisaruntrivedi

# str.casefold(): Converts the string to lowercase, more aggressive than lower(), useful for case-insensitive comparisons.

"HELLO".casefold()  # Output: 'hello'

# str.title(): Converts the first character of each word to uppercase and the rest to lowercase.
"hello world".title()  # Output: 'Hello World'


# find() This function find the word and return the index of that word 

index=name.find("arun")
print(index)

#replace() This function is used for the replace the word 
replace_word= name.replace("arun", "sakshi")
print(replace_word)