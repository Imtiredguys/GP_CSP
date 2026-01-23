#GP, Intergers and Floats
price = float(input("What is the cost of the Item: $"))
tax_rate = float(input("What is the tax percent in your state: %"))
tax_rate_decimal = tax_rate/100
total = round(price*(1 + tax_rate_decimal), 2)
print(round(total),2)

'''apples = int(50)
friends = 16
print("Each of my friends can have", int(apples)//friends, "and I will have", int(apples)%friends, "left over")'''
