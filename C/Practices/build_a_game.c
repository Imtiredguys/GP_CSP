// GP, LS Final Project: Build a Game: Hangman
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



int hangman(){
    char words[][100] = {"knights", "tradition", "ancient", "adieu", "wolverine", "vally", "radiance", "vision", "academy", "college", "america", "project", "python", "computer", "science", "principal", "supercalifragilisticexpialidocious", "hippopotomonstrosesquippedaliophobia", "password", "hangman", "arachibutyrophobia", "anatidaephobia", "aibohphobia", "mellifluous", "words", "apple", "kingdom", "games", "slay", "coding", "pepper", "school", "request", "minor", "major", "joyful", "sadness", "please", "help", "change", "grade", "today", "teamwork", "crazy", "rescue", "book", "necessary", "survival", "lost", "mind", "dance", "drawings", "holiday", "birthday", "halloween", "pumpkin", "possibilities", "middle", "beginning", "speak", "analysis", "announcement", "program", "abracadabra", "democracy", "communism", "understand", "school", "schedule", "analog", "digital", "chance", "gambit", "practice", "house", "learning", "experience", "dictionary", "thesaurus", "email", "statistics", "integer", "float", "focus", "invisible", "monster", "purple", "orange", "yellow", "lavander", "scarlet", "midnight", "blue", "television", "screenager", "generation", "popcorn", "recommend", "opera", "theater", "availible", "smart", "favorite", "clever", "information", "manager", "maximum", "sliver", "knowlegde", "philosophy", "today", "tomorrow", "yesterday", "powerful", "honor", "horror", "pickle", "country", "valentine", "tired", "testing", "january", "febuary", "march", "april", "august"};
    char answer = rand(words);
    int wrong = 0;
    char guessed_letters[][1] = {" "};
    char guess[1];
    printf("What is your guess? ");
    scanf("%s", guess);
    while(){
        char display = "";
        for(guess == answer);
            if (guess == guessed_letters){
                
            }else if(display + "_"){

            }else{
                display ++ "_";
            }
            return 0;
                
        //showing the user what letters they have already guessed

            if (wrong == 6){
                printf(hangman_art[wrong]); 
                printf("You have lost!");

            }
               
            if (start_again() == false){

                break;

            }
                    

            if (display == answer){
                printf(answer);
                printf("You have won!");

            }
            if (start_again() == false){
                break;

            }
                
        //what happens when they win

        printf(hangman_art[wrong]);   
        printf(display);
        printf("So far you've guessed: %s\n", guessed_letters);
        guess;
        printf("What letter are you guessing?: ");
        scanf("%s", &guess);
        guessed_letters+=guess;
        if (guess != answer){
            wrong ++ 1;
        }else{
            printf(hangman);
        }
    }
    
}

char start_again(){
    char yes_or_no[25];
    printf("Do you want to start again? type 'yes' to restart: ");
    scanf("%s", yes_or_no);
    if (yes_or_no != "yes"){
        return false;
        
    }else{
        hangman();

    }
    return 0;
}

int main(){
    char beginning[20];
    printf("Welcome to Hang-Man would you like to play?\n If so please type yes, if not please type no");
    scanf("%s", &beginning);

    return 0;
}