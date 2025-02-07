# Eve Richardson Financial Calculator Python

# Write a print statement telling the user what the program is (budget calculator)
print("Hello, welcome to my budget calculator.\n")
# Ask for their monthly income (user input)
income = float(input("What is your monthly income?\n"))
# Ask for monthly rent amount (user input)
rent = float(input("What is your monthly rent?\n"))
# Ask for utilities amount (user input)
utilities = float(input("What is your monthly utilities spending?\n"))
# Ask for groceries amount (user input)
groceries = float(input("What is your monthly groceries spending?\n"))
# ask for transportation amount (user input)
transpo = float(input("What is your monthly transportation spending?\n"))
# Calculate savings as 10% of income (variable)
savings = float(income/10)
# Calculate spending money income - (rent+utilities+transpo+groceries+savings) (variable)
spending = float(income-(rent+utilities+transpo+groceries+savings))
# Calculate percent of rent (rent/income)*100 (variable)
rentpc = float(rent/income)*100
# Calculate percent of utilities (utilities/income) (variable)
utilitiespc = float(utilities/income)*100
# Calculate percent of groceries (groceries/income) (variable)
groceriespc = float(groceries/income)*100
# Calculate percent of transportation (transportation/income) (variable)
transpopc = float(transpo/income)*100
# Calculate percent of spending 
spendingpc = float(spending/income)*100
# tell user catagory spending amount AND percent for rent ("You spend $XX.XX on rent and that is XX% of your income")
print(f"You spend ${rent} on rent and that is {rentpc: .2}% of your income.")
# tell user catagory spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income")
print(f"You spend ${utilities} on utilities and that is {utilitiespc: .2}% of your income.")
# tell user catagory spending amount AND percent for groceries ("You groceries $XX.XX on rent and that is XX% of your income")
print(f"You spend ${groceries} on groceries and that is {groceriespc: .2}% of your income.")
# tell user catagory spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income")
print(f"You spend ${transpo} on transportation and that is {transpopc: .2}% of your income.")
# tell user catagory spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income")
print(f"You have ${spending} left to spend and that is {spendingpc: .2}% of your income.")
# tell user catagory spending amount AND percent for saving ("You should save $XX.XX and that is 10% of your income")
print(f"You should save 10% of your income and that is {savings: .2}.")
print("Thank you for using my budget calculator.")