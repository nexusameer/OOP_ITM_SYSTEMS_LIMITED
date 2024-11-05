#pragma once
#include <string>  // Include string header for std::string
using namespace std;

class Cat
{
public:
    // Constructors
    Cat();
    Cat(string);
    Cat(string, int);

    string displayDetails();

private:
    std::string name;
    int age;
};
