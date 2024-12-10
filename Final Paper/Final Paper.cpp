#include <iostream>
#include <vector>
#include "Koi.h"
#include "KoiBiColor.h"
#include "KoiTriColor.h"

using namespace std;

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

    // Display pond in initial state
    cout << "Displaying pond in initial state:" << endl;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    // Feed koi
    char feedChoice;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Would you like to feed your koi? (y/n): ";
        cin >> feedChoice;
        if (feedChoice == 'y') {
            pond[i]->feed();
        }
    }

    // Display pond after feeding
    cout << "Displaying pond after feeding:" << endl;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    // Simulate viral attack
    for (size_t i = 0; i < pond.size(); i++) {
        pond[i]->viraAttack();
    }

    // Display pond after viral attack
    cout << "Displaying pond after viral attack:" << endl;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    // Clean up
    for (size_t i = 0; i < pond.size(); i++) {
        delete pond[i];
    }

    return 0;
}