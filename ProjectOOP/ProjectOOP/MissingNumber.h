#ifndef MISSING_NUMBER_H
#define MISSING_NUMBER_H

#include <iostream>
#include <vector>
#include "Game.h"

class MissingNumber : public Game {
public:
    MissingNumber();
    void play() override;

private:
    std::vector<int> generateSequence(int size);
};

#endif // MISSING_NUMBER_H
