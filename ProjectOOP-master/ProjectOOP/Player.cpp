#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {}

Player::Player(const string& user, const string& pass) : username(user), password(pass) {}

const string& Player::getUsername() const {
    return username;
}

bool Player::authenticate(const string& pass) const {
    return password == pass;
}

void Player::addBadge(const string& badge) {
    badges.push_back(badge);
}

void Player::viewBadges() const {
    cout << "Badges: ";
    for (size_t i = 0; i < badges.size(); ++i) {
        cout << badges[i];
        if (i < badges.size() - 1) cout << ", ";
    }
    cout << endl;
}

int Player::getBadgeCount() const {
    return badges.size();
}

const vector<string>& Player::getBadges() const {
    return badges;
}

void Player::loadFromData(const string& data) {
    istringstream ss(data);
    string token;

    getline(ss, username, ',');
    getline(ss, password, ',');

    int badgeCount;
    getline(ss, token, ',');
    badgeCount = stoi(token);

    badges.clear();
    for (int i = 0; i < badgeCount; ++i) {
        if (getline(ss, token, ',')) {
            badges.push_back(token);
        }
    }
}

string Player::toDataString() const {
    ostringstream ss;
    ss << username << "," << password << "," << badges.size();
    for (const string& badge : badges) {
        ss << "," << badge;
    }
    return ss.str();
}
