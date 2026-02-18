#GP, Strings

color = input("What is your favorite color? ").strip().upper()

print(color, "is a really cool color!")

alphabet = "abcdefghijklmnopqrstuvwxyz"

sentence = "The quick brown fox jumps over the lazy dog"

print(alphabet[4:8])
word = input("What word do you want to change? ").strip()
new = input('What new word will be?' )
start = sentence.find(word)
print('('+sentence[start:start+len(word)]+')')

print(sentence)

sentence = sentence.replace(word, new)

print(sentence)

"""number = int(input("Give me a base 10 number: "))
print(number/5)"""
