#include "Cat.h"
#include <string>
#include <iostream>
using namespace std;

Cat::Cat() {
    name = "nameless";
    age = 0;
}

Cat::Cat(std::string n) {
    name = n;
    age = 0;
}

Cat::Cat(std::string n, int a) {
    name = n;
    age = a;
}

string Cat::displayDetails() {
    return name + " " + to_string(age);
}
