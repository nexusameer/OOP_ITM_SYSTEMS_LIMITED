#include "Anagrams.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Anagrams::Anagrams() : Game("Anagrams") {
    srand(time(0)); // Seed the random number generator
    initializeWordList(); // Populate the word list
}

void Anagrams::play() {
    string word = getRandomWord();
    string scrambled = word;
    random_shuffle(scrambled.begin(), scrambled.end());
    cout << "Unscramble this word: " << scrambled << endl;

    string answer;
    cout << "Your guess: ";
    cin >> answer;

    if (answer == word) {
        cout << "Correct! You earned an Anagram Badge.\n";
    }
    else {
        cout << "Incorrect. The correct word was: " << word << endl;
    }
}

void Anagrams::initializeWordList() {
    wordList = {
        "apple", "banana", "cherry", "dragon", "eagle", "flower",
        "garden", "honey", "island", "jungle", "kitten", "lemon",
        "monkey", "nature", "orange", "peach", "quartz", "rainbow",
        "sunset", "tulip", "unicorn", "violet", "water", "xenon",
        "yellow", "zebra", "cloud", "dance", "energy", "forest",
        "giant", "happy", "indigo", "jolly", "kind", "light",
        "magic", "night", "ocean", "peace"
    };
}

string Anagrams::getRandomWord() {
    int index = rand() % wordList.size(); // Pick a random word
    return wordList[index];
}
