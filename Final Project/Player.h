#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Leaderboard.h"

using namespace std;

class Player {
public:
    void Register(string u, string p) {
        if (u.empty() || p.empty()) {
            cout << "Username and password cannot be empty!" << endl;
            return;
        }

        int check = 0;
        ifstream MyFile("Authentication.txt");
        if (MyFile.is_open()) {
            string line;
            while (getline(MyFile, line)) {
                if (line == u) {
                    check = 1;
                    break;
                }
            }
        }
        MyFile.close();

        if (check == 0) {
            ofstream MyFile("Authentication.txt", ios::app);
            if (MyFile.is_open()) {
                MyFile << u << "\n" << p << endl;
                cout << "Username and password added successfully!" << endl;
            }
            else {
                cout << "Error opening file for registration!" << endl;
            }
            MyFile.close();
        }
        else {
            cout << "User already exists. Please try a different username." << endl;
        }
    }

    void Login(string u, string p) {
        if (u.empty() || p.empty()) {
            cout << "Username and password cannot be empty!" << endl;
            return;
        }

        ifstream MyFile("Authentication.txt");
        if (MyFile.is_open()) {
            string storedName, storedPass;
            bool loginSuccess = false;

            while (getline(MyFile, storedName) && getline(MyFile, storedPass)) {
                if (storedName == u && storedPass == p) {
                    loginSuccess = true;
                    username = u;
                    loadBadges(); // Load badges for this user
                    break;
                }
            }

            if (loginSuccess) {
                cout << "You are successfully logged in!" << endl;
            }
            else {
                cout << "Username or password is incorrect. Try again!" << endl;
            }
        }
        else {
            cout << "Error opening authentication file!" << endl;
        }
        MyFile.close();
    }

    void logout() {
        username.clear();
        password.clear();
        badges.clear();
        cout << "You have been logged out." << endl;
    }

    void addBadge(const string& badge, Leaderboard& leaderboard) {
        if (find(badges.begin(), badges.end(), badge) == badges.end()) {
            badges.push_back(badge);
            cout << "Badge added: " << badge << endl;

            // Update the leaderboard
            leaderboard.updateLeaderboard(username);
        }
        else {
            cout << "Badge already exists: " << badge << endl;
        }
    }

    void viewBadges() {
        if (badges.empty()) {
            cout << "No badges earned yet!" << endl;
        }
        else {
            cout << "Your Badges:" << endl;
            for (const auto& badge : badges) {
                cout << "- " << badge << endl;
            }
        }
    }

    void saveBadges() {
        if (username.empty()) {
            cout << "No logged-in user to save badges for!" << endl;
            return;
        }

        ofstream badgeFile(username + "_badges.txt");
        if (badgeFile.is_open()) {
            for (const auto& badge : badges) {
                badgeFile << badge << "\n";
            }
            cout << "Badges saved successfully!" << endl;
        }
        else {
            cout << "Error saving badges!" << endl;
        }
    }

    void loadBadges() {
        if (username.empty()) {
            cout << "No logged-in user to load badges for!" << endl;
            return;
        }

        ifstream badgeFile(username + "_badges.txt");
        if (badgeFile.is_open()) {
            badges.clear(); // Clear any existing badges
            string badge;
            while (getline(badgeFile, badge)) {
                badges.push_back(badge);
            }
            cout << "Badges loaded successfully!" << endl;
        }
        else {
            cout << "No badges file found. Starting fresh." << endl;
        }
    }

private:
    string username;
    string password;
    vector<string> badges;
};
