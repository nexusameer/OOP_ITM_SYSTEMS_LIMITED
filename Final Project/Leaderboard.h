#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Leaderboard {
private:
    vector<pair<string, int>> leaderboard; // Stores username and badge count

public:
    // Update the leaderboard with a player's new badge
    void updateLeaderboard(const string& username) {
        bool playerFound = false;

        for (auto& entry : leaderboard) {
            if (entry.first == username) {
                entry.second++; // Increment badge count
                playerFound = true;
                break;
            }
        }

        if (!playerFound) {
            leaderboard.push_back({ username, 1 }); // Add new player with 1 badge
        }

        sortLeaderboard(); // Ensure leaderboard is sorted
    }

    // Sort the leaderboard by badge count
    void sortLeaderboard() {
        sort(leaderboard.begin(), leaderboard.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second; // Descending order of badge count
            });
    }

    // Display the leaderboard
    void displayLeaderboard() const {
        if (leaderboard.empty()) {
            cout << "Leaderboard is empty!" << endl;
            return;
        }

        cout << "Leaderboard:" << endl;
        for (const auto& entry : leaderboard) {
            cout << entry.first << " - " << entry.second << " badges" << endl;
        }
    }
};
