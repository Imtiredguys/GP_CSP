#GP, Floats and Integers Part 2; Finanical Calculator 

monthly_income = float(input("What is your monthly income? $"))

rent = float(input("What is the cost your monthly rent/mortgage? $"))

utilities = float(input("What is the cost of your monthly utilities? $"))

groceries = float(input("What is the cost of monthly groceries? $"))

transportation = float(input("What is the cost of monthly transportantion? $"))

savings = float(input("How much of your income are you saving? $"))

rent_percentage = (rent/monthly_income)*100

utilities_percentage = ((utilities/monthly_income)*100)

groceries_percentage = ((groceries/monthly_income)*100)

transportation_percentage = ((transportation/monthly_income)*100)

save_percentage = ((savings/monthly_income)*100)

rent_cost = (rent + rent_percentage)

utilities_cost = (utilities + utilities_percentage)

groceries_cost = (groceries + groceries_percentage)

transportation_cost = (transportation + transportation_percentage)

money_saved = (savings + save_percentage)

monthly_spending = (monthly_income - (money_saved + rent_cost + utilities_cost + groceries_cost + transportation_cost))

print("You have", monthly_spending, "left over for spending!")