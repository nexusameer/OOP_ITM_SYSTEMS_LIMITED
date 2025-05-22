#include "RockPaperScissors.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

RockPaperScissors::RockPaperScissors() : Game("Rock Paper Scissors") {
    srand(time(0)); // Seed the random number generator
}

bool RockPaperScissors::play() {
    string playerChoice;
    cout << "Choose Rock, Paper, or Scissors: ";
    cin >> playerChoice;

    // Convert the input to lowercase for case-insensitive comparison
    transform(playerChoice.begin(), playerChoice.end(), playerChoice.begin(), ::tolower);

    if (playerChoice != "rock" && playerChoice != "paper" && playerChoice != "scissors") {
        cout << "Invalid choice. Please choose Rock, Paper, or Scissors.\n";
        return false;
    }

    string computerChoice = getComputerChoice();
    cout << "Computer chose: " << computerChoice << endl;

    string result = getResult(playerChoice, computerChoice);
    cout << result << endl;
    if (result == "You win!") {
		return true;
	}
	else {
		return false;
	}
}

string RockPaperScissors::getComputerChoice() {
    int choice = rand() % 3 + 1; // Generate a random number between 1 and 3
    switch (choice) {
    case 1: return "rock";
    case 2: return "paper";
    case 3: return "scissors";
    default: return "";
    }
}

string RockPaperScissors::getResult(const string& playerChoice, const string& computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    }
    else if ((playerChoice == "rock" && computerChoice == "scissors") ||
        (playerChoice == "scissors" && computerChoice == "paper") ||
        (playerChoice == "paper" && computerChoice == "rock")) {
        return "You win!";
    }
    else {
        return "Computer wins!";
    }
}
