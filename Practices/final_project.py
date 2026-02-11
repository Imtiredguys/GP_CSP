# GP & AG, Final Project; Hangman (Period 3)
import random
words = ("knights", "tradition", "ancient", "adieu", "wolverine", "vally", "radiance", "vision", "academy", "college", "america", "project", "python", "computer", "science", "principal", "supercalifragilisticexpialidocious", "hippopotomonstrosesquippedaliophobia", "password", "hangman", "arachibutyrophobia", "anatidaephobia", "aibohphobia", "mellifluous", "words", "apple", "kingdom", "games", "slay", "coding", "pepper", "school", "request", "minor", "major", "joyful", "sadness", "please", "help", "change", "grade", "today", "teamwork", "crazy", "rescue", "book", "necessary", "survival", "lost", "mind", "dance", "drawings", "holiday", "birthday", "halloween", "pumpkin", "possibilities", "middle", "beginning", "speak", "analysis", "announcement", "program", "abracadabra", "democracy", "communism", "understand", "school", "schedule", "analog", "digital", "chance", "gambit", "practice", "house", "learning", "experience", "dictionary", "thesaurus", "email", "statistics", "integer", "float", "focus", "invisible", "monster", "purple", "orange", "yellow", "lavander", "scarlet", "midnight", "blue", "television", "screenager", "generation", "popcorn", "recommend", "opera", "theater", "availible", "smart", "favorite", "clever", "information", "manager", "maximum", "sliver", "knowlegde", "philosophy", "today", "tomorrow", "yesterday", "powerful", "honor", "horror", "pickle", "country", "valentine", "tired", "testing", "january", "febuary", "march", "april", "august")
#Patterson

hangman_art= {0:"""
                   __
                  |  |
                  |   
                  |   
                  |   
                  |___""",
              1:"""
                   __
                  |  |
                  |  O 
                  |   
                  |   
                  |___""",
              2:"""
                   __
                  |  |
                  |  O 
                  |  |
                  |   
                  |___""",
              3:"""
                   __
                  |  |
                  |  O 
                  | /|
                  |   
                  |___""",
              4:"""
                   __
                  |  |
                  |  O 
                  | /|\\
                  |   
                  |___""",
              5:"""
                   __
                  |  |
                  |  O 
                  | /|\\
                  | / 
                  |___""",
              6:"""
                   __
                  |  |
                  |  O 
                  | /|\\
                  | / \\
                  |___""",}




wrong=0
#Azalea

guessed_letters = []

#Azalea
answer = random.choice(words)


#Patterson
while True:
    display = ""
    for guess in answer:
        if guess in guessed_letters:
            display+=guess
        else:
            display+="_"
        

    print(hangman_art[wrong])
    print(display)
    print(f" So far you've guessed: {guessed_letters}")
    guess = input("What letter are you guessing?: ").strip().lower()
    guessed_letters+=guess
    if guess not in answer:
        wrong+=1
    elif wrong==6:
        break and input("You have lost, start again? type 'yes' to restart: ")
    else:
        print(f" So far you've guessed: {guessed_letters}")



