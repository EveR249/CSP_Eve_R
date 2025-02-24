#Eve Richardson Conditionals Notes Python

#print("Hello. welcome to my program that will sort you into a catagory.\n")

#name = input("What is your name:\n")

#if name == "Vienna":
    #print("Oh you're the teacher... never mind.")
#else:
    #print("You are a student, welcome to class.")



#num = 8

#if num == 1:
    #print("You have asked for an item")
#elif num <= 3:
    #print("You have asked for a couple of the item")
#elif num <= 5:
    #print("You have asked for a few of the item")
#else:
    #print("You have asked for some of the item.")



#num = int(input("How many would you like? (Number above 0)\n")) #Have to have int to convert string to integer

#if num != 1:
    #print("You have asked for some of the item.")
#else:
    #print("You have asked for one of the item.")



name = "Eve"

if "a" in name:
    print("Your name has the letter A!")
else:
    print("Your name doesn't have an A :(")



name2 = "Eve"

if "a" in name or "e" in name or "i" in name or "o" in name or "u" in name:
    print("Your name has a vowel!")
else:
    print("Your name doesn't have an vowel :(")