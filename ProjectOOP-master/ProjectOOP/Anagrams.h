#ifndef ANAGRAMS_H
#define ANAGRAMS_H

#include <iostream>
#include <vector>
#include "Game.h"

class Anagrams : public Game {
public:
    Anagrams();
    bool play() override;

private:
    std::vector<std::string> wordList;

    void initializeWordList();
    std::string getRandomWord();
};

#endif // ANAGRAMS_H
