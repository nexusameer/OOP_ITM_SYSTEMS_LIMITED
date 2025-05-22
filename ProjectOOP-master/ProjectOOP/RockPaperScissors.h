#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

#include "Game.h"

class RockPaperScissors : public Game {
public:
    RockPaperScissors();
    bool play() override;

private:
    string getComputerChoice();
    string getResult(const string& playerChoice, const string& computerChoice);
};

#endif // ROCKPAPERSCISSORS_H
