#GP, FizzBuzz

start = 0

while start <= 50:
    print(start)
    start += 1
    if start%3 == 0:
        print("Fizz")
    if start%5 == 0:
        print("Buzz")
    if start%5 == 0 and start%3 == 0:
        print("FizzBuzz")