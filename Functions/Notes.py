#Eve Richardson functions notes python

#def add():
#    numOne = int(input("Give me a number:\n"))
#    numTwo = int(input("Give me a number:\n"))
#    print(numOne+numTwo)

#number = int(input("Give me a number:\n"))

#add()

def user(word):
   return input(f"Tell me a {word}:\n")

name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} and somehow got to {place}")

#If the information is the same every time you don't need parameters