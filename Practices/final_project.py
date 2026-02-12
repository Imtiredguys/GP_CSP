# GP & AG, Final Project; Hangman (Period 3)
import random
words = ("knights", "tradition", "ancient", "adieu", "wolverine", "vally", "radiance", "vision", "academy", "college", "america", "project", "python", "computer", "science", "principal", "supercalifragilisticexpialidocious", "hippopotomonstrosesquippedaliophobia", "password", "hangman", "arachibutyrophobia", "anatidaephobia", "aibohphobia", "mellifluous", "words", "apple", "kingdom", "games", "slay", "coding", "pepper", "school", "request", "minor", "major", "joyful", "sadness", "please", "help", "change", "grade", "today", "teamwork", "crazy", "rescue", "book", "necessary", "survival", "lost", "mind", "dance", "drawings", "holiday", "birthday", "halloween", "pumpkin", "possibilities", "middle", "beginning", "speak", "analysis", "announcement", "program", "abracadabra", "democracy", "communism", "understand", "school", "schedule", "analog", "digital", "chance", "gambit", "practice", "house", "learning", "experience", "dictionary", "thesaurus", "email", "statistics", "integer", "float", "focus", "invisible", "monster", "purple", "orange", "yellow", "lavander", "scarlet", "midnight", "blue", "television", "screenager", "generation", "popcorn", "recommend", "opera", "theater", "availible", "smart", "favorite", "clever", "information", "manager", "maximum", "sliver", "knowlegde", "philosophy", "today", "tomorrow", "yesterday", "powerful", "honor", "horror", "pickle", "country", "valentine", "tired", "testing", "january", "febuary", "march", "april", "august")
#This is creating a list of possible words that can be the hangman word.

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
#This is our hangman art that allows the hangman design be printed and updated

def start_again():
    yes_or_no = input("Do you want to start again? type 'yes' to restart: ").strip().lower()
    if yes_or_no != "yes":
        return False
    else:
        hangman()
#Giving the user an option to play the game again
def hangman():
    answer = random.choice(words)
    wrong = 0
    guessed_letters = []
    while True:
        display = ""
        for guess in answer:
            if guess in guessed_letters:
                display+=guess
            else:
                display+="_"
        #showing the user what letters they have already guessed

            if wrong==6:
                print(hangman_art[wrong])  
                print("You have lost!")
                if start_again() == False:
                    break
#what happens when they lose
            if display==answer:
                print(answer)
                print("You have won!")
                if start_again() == False:
                    break
#what happens when they win

        print(hangman_art[wrong])   
        print(display)
        print(f" So far you've guessed: {guessed_letters}")
        guess = input("What letter are you guessing?: ").strip().lower()
        guessed_letters+=guess
        if guess not in answer:
            wrong+=1
#the set up for the hangman art and display and guessed_letters stuff
hangman()    
#Our function (runs the entire game) is called

#Yay!!! we're finally done and it actually works :D


