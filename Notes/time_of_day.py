#GP, Time of day

name = input("Hello what's your name? ").strip().capitalize()

time = int(input("What time is it in military time (ex. 13.35 = 1:35pm)? ")).strip()

if time >= 9 and time < 11:
    print(f"Good moring {name}!")
elif time >= 11 and time <= 13:
    print(f"On my lunch break rn pls come back later ty <3!!!")
elif time > 13 and time <= 17:
    print(f"Good afternoon {name}!!")
elif time >17 and time <20:
    print(f"Good evening {name}!!")
elif time >=20 and time <= 22:
    print(f"Hey, {name}, it's getting pretty late, you should probably get ready for bed.")
elif time >22 and time <= 24:
    print("T^T pls just go to bed {name}!!!")
elif time >24 and time <= 3:
    print("AHHHHHHHHH WHY ARE YOU STILL AWAKE????? GO TO BED ALREADY!!!")
elif time >3 and time >5:
    print("T^T why won't you sleep human???")
elif time >5 and time <9:
    print("Why are you awake????")
else: 
    print("...What? I don't understand. Pls choose something else ty <3!!!")