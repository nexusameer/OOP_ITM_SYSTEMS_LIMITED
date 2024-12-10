#include "Koi.h"
#include <iostream>
using namespace std;

class KoiTriColor : public Koi {
public:
    KoiTriColor() {
        health = 8;
    }

    ~KoiTriColor() {}

    void display() {
        if (health > 0) {
            for (int i = 0; i < health; i++) {
                if (i % 3 == 0) {
                    cout << "~";
                }
                else if (i % 3 == 1) {
                    cout << "!";
                }
                else {
                    cout << "#";
                }
            }
        }
        else {
            cout << "xx";
        }
        cout << endl;
    }

    void viraAttack() {
        health--;
    }
};