#pragma once
#include "Koi.h"

class KoiBiColor : public Koi {
public:
    KoiBiColor() {
        health = 10;
    }

    ~KoiBiColor() {}

    void display() override {
        if (health > 0) {
            for (int i = 0; i < health; i++) {
                std::cout << "*^";
            }
        }
        else {
            std::cout << "xx";
        }
        std::cout << std::endl;
    }

    void viraAttack() override {
        health -= 2;
        if (health < 0) health = 0;
    }
};