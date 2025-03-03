#Eve Richardson Loops notes python

# What is a loop? 
    # A section of code that repeats

# What are the two types of loops?
    # While loop
x=0
while x < 10:
    print("Hello\n", x)
    x +=1

    # For loop
nums = [3,5,7,2,8]
for num in nums:
    print(num)

# What is iteration
    # The act of repeating

# What are lists? 
    # A bunch of values in the same variable
siblings = ["Kimberley", "Asher", "Oliver", "Eve", "Bob", "Jerry", "Alex", "Jimmy", "Poppy"]
# Print one item in the list
print(siblings[3])
# Chnage item in a list
siblings[7] = "Jim"
# Remove item from the list
siblings.pop(5)

print(siblings)

# How do you make lists in python? 
    # You do the brackets and write your individual items with commas in between [x,y,z]
    # List items must be proper data types

# How do you make for loops in python? 
    # Proper list printing with a for loop
for sibling in siblings:
    print(sibling, "Richardson")
num = 1
print(f"{num}. {sibling} Richardson")
num +=1

for num in range (1,11, 2):  # The 2 is saying what we are counting by, 1-11 means we count to 10
    print(num)

# How do you make while loops in python?
num = 1

while num < 21:
    print(f"The number is {num}!")
    num +=1

import random

number = 1
rand = random.randint(1,20)
while number < 21:
    if number == rand:
        print("Goose!")
        break # Tells the loop to be done, instead of break we can put continue and it makes you go back to the top.
    else:
        print("Duck")
    number +=1