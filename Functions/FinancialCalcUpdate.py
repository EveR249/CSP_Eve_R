# Eve Richardson Financial Calculator Update Python

def info(income, amount, type):
    typepc = amount/income*100
    print(f"You spend ${amount:.2f} on {type} and that is {typepc:.2}% of your income.")

def ask(type):
    return input(f"What is your monthly {type}:\n")

print("Hello, welcome to my budget calculator.\n")

income = float(ask("income"))
rent = float(ask("rent"))
utilities = float(ask("utilities spending"))
groceries = float(ask("groceries spending"))
transpo = float(ask("transportation spending"))

savings = float(income/10)
spending = float(income-(rent+utilities+transpo+groceries+savings))
spendingpc = float(spending/income)*100

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transpo, "transpo")
print(f"You should save ${savings:.2f} and that is 10% of your income.")
print(f"You have ${spending:.2f} left to spend and that is {spendingpc:.2f}% of your income.")