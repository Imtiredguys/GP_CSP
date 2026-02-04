#GP, Functions

def hello():
    print("Hello World")
hello()

def area(length, width):
    return length * width

side_one = 12
side_two = 8

print(f"The area of the rectangle with a side of 4 and a side of 3 is {area(4, 3)}.")

def hello_user(name):
    print(f"Hello {name}")
hello()
hello_user("Kohnai")
hello_user("Rohi")
hello_user(input("Tell me a name: "))

def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total

print(f"The factorial of 5 is {factorial(5)}")

