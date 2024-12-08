#include "NumberGuessing.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

NumberGuessing::NumberGuessing() : Game("Number Guessing Game") {
    srand(time(0)); // Seed the random number generator
}

void NumberGuessing::play() {
    int min = 1, max = 100;
    int correctNumber = generateRandomNumber(min, max);
    int guess;
    int attempts = 10;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Guess a number between " << min << " and " << max << ". You have " << attempts << " attempts.\n";

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == correctNumber) {
            cout << "Congratulations! You guessed the correct number: " << correctNumber << endl;
            cout << "You earned a Number Guessing Badge!\n";
            return;
        }
        else {
            giveHint(guess, correctNumber);
            --attempts;
            cout << "You have " << attempts << " attempts left.\n";
        }
    }

    cout << "Sorry, you've run out of attempts. The correct number was: " << correctNumber << endl;
}

int NumberGuessing::generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min; // Generate random number within the range
}

void NumberGuessing::giveHint(int guess, int correctNumber) {
    if (guess < correctNumber) {
        cout << "Too low! Try a higher number.\n";
    }
    else {
        cout << "Too high! Try a lower number.\n";
    }
}
