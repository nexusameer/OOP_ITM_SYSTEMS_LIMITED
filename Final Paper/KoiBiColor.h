#include "Koi.h"
#include <iostream>
using namespace std;

class KoiBiColor : public Koi {
public:
    KoiBiColor() {
        health = 5;
    }

    ~KoiBiColor() {}

    void display() override {
        for (int i = 0; i < health; i++) {
            cout << "*^";
        }
        if (health == 0) {
            cout << "xx";
        }
        cout << endl;
    }

    void viralAttack() override {
        health--;
        if (health < 0) health = 0;
    }
};