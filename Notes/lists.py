#GP, Lists

ages = [22, 23, 25, 28, 34, 36, 38, 39]

names = ["Kohnai", "Kenzen", "Bayen", "Rosi", "Seiya", "Dreni", "Maeora", "Nemphirel", "Mendekk"]

print(names [4])
print(len(names))
print (names)
names[0] = "Rosi-Ayuuri"
names.append("Shaea")
index = names.index("Rosi")
names.pop(index)
print(names)

for name in names:
    print (f"Hello {name}")

for number in ages:
    print(f"{number} squared is {number**2}")

for i in range(20):
    print(f"It is the {i}th iteration of this loop")