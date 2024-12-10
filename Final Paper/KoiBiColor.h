#include "Koi.h"
#include <iostream>
using namespace std;

class KoiBiColor : public Koi {
public:
    KoiBiColor() {
        health = 5; // Default health for bicolor koi
    }

    ~KoiBiColor() {}

    void display() override {
        if (health > 0) {
            for (int i = 0; i < health; i++) {
                cout << "*^";
            }
        }
        else {
            cout << "xx";
        }
        cout << endl;
    }

    void viraAttack() override {
        health -= 1;
        if (health < 0) health = 0; // Ensure health does not go below 0
    }
};
