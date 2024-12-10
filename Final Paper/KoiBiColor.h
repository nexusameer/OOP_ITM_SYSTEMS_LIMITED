#include "Koi.h"
#include <iostream>
using namespace std;

class KoiBiColor : public Koi {
public:
    KoiBiColor() {
        health = 10;
    }

    ~KoiBiColor() {}

    void display() {
        if (health > 0) {
            for (int i = 0; i < health/2; i++) {
                cout << "*^";
            }
        }
        else {
            cout << "xx";
        }
        cout << endl;
    }

    void viraAttack() {
        health = health - 2;
    }
};
