#pragma once
#include "Koi.h"

class KoiTriColor : public Koi {
public:
    KoiTriColor() {
        health = 8;
    }

    ~KoiTriColor() {}

    void display() override {
        if (health > 0) {
            for (int i = 0; i < health; i++) {
                if (i % 3 == 0) {
                    std::cout << "~";
                }
                else if (i % 3 == 1) {
                    std::cout << "!";
                }
                else {
                    std::cout << "#";
                }
            }
        }
        else {
            std::cout << "xx";
        }
        std::cout << std::endl;
    }

    void viraAttack() override {
        health--;
        if (health < 0) health = 0;
    }
};