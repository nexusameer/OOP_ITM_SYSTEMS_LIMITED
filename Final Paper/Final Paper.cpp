#include <iostream>
#include <vector>
using namespace std;
#include "Koi.h"
#include "KoiBiColor.h"
#include "KoiTriColor.h"

int main() {
    vector<Koi*> pond;

    char choice;
    while (true) {
        cout << "Enter b to add a bicolor koi, t to add a tricolor koi, or e to stop: ";
        cin >> choice;
        if (choice == 'e') break;
        if (choice == 'b') {
            pond.push_back(new KoiBiColor());
        }
        else if (choice == 't') {
            pond.push_back(new KoiTriColor());
        }
    }

    cout << "Displaying pond in initial state:" << endl;
    for (int i = 0; i < pond.size(); i++) {
        cout << pond[i]->getId() << ": ";
        pond[i]->display();
    }


    char feedChoice;
    for (int i = 0; i < pond.size()+1; i++) {
        cout << "Would you like to feed your koi? (y/n): ";
        cin >> feedChoice;
        if (feedChoice == 'y') {
            pond[i]->feed();
        }
    }

    cout << "Displaying after feeding:" << endl;
    for (int i = 0; i < pond.size(); i++) {
        cout << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    for (int i = 0; i < pond.size(); i++) {
        pond[i]->viraAttack();
    }

    cout << "Displaying after viral attack:" << endl;
    for (int i = 0; i < pond.size(); i++) {
        cout << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    for (int i = 0; i < pond.size(); i++) {
        delete pond[i];
    }

    return 0;
}


