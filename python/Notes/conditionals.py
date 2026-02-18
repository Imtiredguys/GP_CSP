#GP, Conditions

"""number = 2

if  abs(number) < 10:
    print(f"{number} is a single digit number")

elif abs(number) < 100:
    print(f"{number} is a two digit number")

else: 
    print(f"{number} is too big, make it smaller")"""

name = input("What is your name? ").strip().capitalize()

if name == "Xavier" or name == "Jake":
    print("I love your hair. How often do you dye it???")
    often = input("In months how often do you dye your hair?")
    if int(often) < 3:
        print("Wow that's dedication!!")
    
    elif int(often) == 0:
        print("Oh I thought you dyed it...")

    else:
        print("Cool!")

else:
    print(f"hello {name}!")

