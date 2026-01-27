#GP, Floats and Integers Part 2; Finanical Calculator 

monthly_income =float(imput("What is your monthly income? $"))

rent = float(imput("What is the cost your monthly rent/mortgage? $")

utilities = print("What is the cost of your monthly utilities? $")

groceries = print("What is the cost of monthly groceries? $")

transportation = print("What is the cost of monthly transportantion? $")

savings = print("How much of your income should you save? $")

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

monthly_spending = (money_saved + rent_cost + utilities_cost + groceries_cost + transportation_cost)