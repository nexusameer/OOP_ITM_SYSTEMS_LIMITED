#ifndef OWNER_H
#define OWNER_H

#include <string>

class Owner {
private:
    std::string first_name;
    std::string last_name;

public:
    // Constructor
    Owner(const std::string& first, const std::string& last)
        : first_name(first), last_name(last) {}

    // Getter for full name
    std::string getFullName() const {
        return first_name + " " + last_name;
    }
};

#endif
