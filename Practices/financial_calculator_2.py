#GP, Finalncial Calculator 2.0

"""monthly_income = float(input("What is your monthly income? $"))

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

print("You have", monthly_spending, "left over for spending!")"""


def money_info(spending_area):
    return input(f"What is your monthly {spending_area}? ")

income = print(money_info("income"))
rent = print(money_info("rent"))
utilities = print(money_info("utilities"))
groceries = print(money_info("groceries"))
transportation = print(money_info("transportation"))
savings = print(money_info("savings"))

def percentage(variable):
    return (({variable}/income)*100)

rent_percent = percentage(rent)
utilities_percent = percentage(utilities)
groceries_percent = percentage(groceries)
transportation_percent = percentage(transportation)
savings_percent = percentage(savings)