# GP & AG, Final Project; Hangman (Period 3)
from ast import For
import random
words = ("knights", "tradition", "ancient", "adieu", "wolverine", "vally", "radiance", "vision", "academy", "college", "america", "project", "python", "computer", "science", "principal", "supercalifragilisticexpialidocious", "hippopotomonstrosesquippedaliophobia", "password", "hangman", "arachibutyrophobia", "anatidaephobia", "aibohphobia", "mellifluous", "words", "apple", "kingdom", "games", "slay", "coding", "pepper", "school", "request", "minor", "major", "joyful", "sadness", "please", "help", "change", "grade", "today", "teamwork", "crazy", "rescue", "book", "necessary", "survival", "lost", "mind", "dance", "drawings", "holiday", "birthday", "halloween", "pumpkin", "possibilities", "middle", "beginning", "speak", "analysis", "announcement", "program", "abracadabra", "democracy", "communism", "understand", "school", "schedule", "analog", "digital", "chance", "gambit", "practice", "house", "learning", "experience", "dictionary", "thesaurus", "email", "statistics", "integer", "float", "focus", "invisible", "monster", "purple", "orange", "yellow", "lavander", "scarlet", "midnight", "blue", "television", "screenager", "generation", "popcorn", "recommend", "opera", "theater", "availible", "smart", "favorite", "clever", "information", "manager", "maximum", "sliver", "knowlegde", "philosophy", "today", "tomorrow", "yesterday", "powerful", "honor", "horror", "pickle", "country", "valentine", "tired", "testing", "january", "febuary", "march", "april", "august")
#Patterson

hangman_art= {0:"""__
                  |  |
                  |   
                  |   
                  |   
                  |___""",}

hangman_art= {1:"""__
                  |  |
                  |  O 
                  |   
                  |   
                  |___""",}

hangman_art= {2:"""__
                  |  |
                  |  O 
                  |  |
                  |   
                  |___""",}

hangman_art= {3:"""__
                  |  |
                  |  O 
                  | /|
                  |   
                  |___""",}

hangman_art= {4:"""__
                  |  |
                  |  O 
                  | /|\\
                  |   
                  |___""",}

hangman_art= {5:"""__
                  |  |
                  |  O 
                  | /|\\
                  | / 
                  |___""",}
                  
hangman_art= {6:"""__
                  |  |
                  |  O 
                  | /|\\
                  | / \\
                  |___""",}



#Azalea
answer = random.choice(words)
word_length = ["_"] * len(answer)
print(word_length)
guess = input(print("What letter are you guessing?: ")).strip().lower()
#Patterson
hangman_art={0}
while guess in answer:
    print(hangman_art)
hangman_art+=1

#Azalea

guessed_letters = answer
display = ""

for letter in words:
    print(letter)
    if guess in guessed_letters:
        print(guess) in display
    else:
        print("_") in display
        
    
#Patterson



"""if guess is False:
    print(hangman_art[1]) and input(print("Guess another letter: "))
def display(answer_word, number_of_letters):
    print("_")

display(answer, )
{0: ("   ",
                  "   ",
                  "   ",), 
              1: (" O ",
                  "   ",
                  "   ",), 
              2: (" O ",
                  " | ",
                  "   ",), 
              3: (" O ",
                  " |\ ",
                  "   ",), 
              4: (" O ",
                  "/|\ ",
                  "   ",), 
              5: (" O ",
                  "/|\ ",
                  "   ",), 
              6: (" O",
                  "/|\ ",
                  "/ \  ",)}
                  
                  
def display_man(wrong_guesses):
    pass
def display_hint(hint):
    pass
def display_answer (answer):
    pass
def main():
    answer = random.choice(words)
    hint = ["_"] * len(answer)
    wrong_guesses=0
    guessed_letters=set()
    is_running= True
    
if __name__=="__main__":
    main()"""