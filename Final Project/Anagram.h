#pragma once
#include "Game.h"
#include <algorithm>
#include <iostream>

class Anagram :
    public Game
{
public:
    Anagram(): Game("Anagram"){
    }
    void play() override {
        string words[] = { "apple", "banana", "thor", "spiderman", "avengers", "wonder", "captain", "falcon"};

        string selectwords = words[rand() % 4]; // Select random word
        string scramble = selectwords;

        random_shuffle(scramble.begin(), scramble.end());

        string userguess;

        cout << "Unscramble this word: " << scramble << endl;
        cin >> userguess;

        if (userguess == selectwords) {
            cout << "Correct! You unscrambled the word!. You win a badge" << endl;
        }
        else {
            cout << "Incorrect! The correct answer was: " << selectwords << endl;
        }

        // Replay option
        char choice;
        cout << "Would you like to play again? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            play();
        }
    }

};

