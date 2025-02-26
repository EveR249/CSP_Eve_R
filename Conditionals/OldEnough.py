#Eve Richardson Old Enough Python

num = int(input("How old are you?\n"))

if num <4:
    print("You can not go to school yet.")
elif num >= 18:
    print("You can vote!")
elif num >= 16:
    print("You can drive!")
elif num >= 15:
    print("You can get your learners permit!")
else:
    print("You can go to school!")