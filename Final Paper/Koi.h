#pragma once
#include <iostream>

class Koi {
protected:
    int id;
    int health;

public:
    Koi() {
        static int counter = 0;
        id = counter++;
        health = 0;
    }

    virtual ~Koi() {}

    int getId() const { return id; }

    virtual void display() = 0;
    virtual void viraAttack() = 0;

    void feed() {
        health++;
    }
};