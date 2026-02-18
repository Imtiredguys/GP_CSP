#GP, Loops

"""start = 0

while start < 11:
    print(start)
    start += 1"""

"""import random
count = 1
goose = random.randint(1,10)

while count != goose:
    print("Duck")
    count += 1
print("GOOSE!")"""


"""import random

number = random.randint(1,25)

while True:
    guess = int(input("Guess a number between 1 and 25: "))

    if guess == number:
        print(f"Yes the number was {number}. You won!")
        break
    elif guess > 25:
        print("Dude what? i said between 1 and 25 sooo the number needs to be LESS  than 25")
    elif guess > number:
        print("lower")
    else:
        print("higher")"""
