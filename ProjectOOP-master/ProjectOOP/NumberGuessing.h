#ifndef NUMBERGUESSING_H
#define NUMBERGUESSING_H

#include "Game.h"

class NumberGuessing : public Game {
public:
    NumberGuessing();
    bool play() override;

private:
    int generateRandomNumber(int min, int max);
    void giveHint(int guess, int correctNumber);
};

#endif // NUMBERGUESSING_H
