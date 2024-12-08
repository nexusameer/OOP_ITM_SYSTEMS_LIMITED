#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Player {
    string username;
    string password;
    vector<string> badges;

public:
    Player();
    Player(const string& user, const string& pass);

    const string& getUsername() const;
    bool authenticate(const string& pass) const;
    void addBadge(const string& badge);
    void viewBadges() const;
    int getBadgeCount() const;
    const vector<string>& getBadges() const;

    void loadFromData(const string& data);
    string toDataString() const;
};

#endif // PLAYER_H
