#ifndef GAME_APP_H
#define GAME_APP_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include "Player.h" // Include the Player class
#include "Game.h"
#include "MathChallenge.h"
#include "Anagrams.h"
#include "NumberGuessing.h"
#include "MissingNumber.h"
#include "RockPaperScissors.h"

using namespace std;

class GameApp {
    vector<Player> players;
    Player* currentPlayer = nullptr;
    Game* games[5];
    const string dataFile = "players.txt";

public:
    GameApp();
    ~GameApp();

    void signUp();
    void signIn();
    void playGame();
    void viewBadges();
    void leaderboard();
    void menu();

private:
    Player* findPlayer(const string& username);
    void loadPlayers();
    void savePlayers();
};

#endif // GAME_APP_H
