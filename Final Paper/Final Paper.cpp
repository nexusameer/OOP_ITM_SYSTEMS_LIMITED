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
        cout << "Enter b to add a bicolor, t to add a tricolor, or e to stop: ";
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
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    char feedChoice;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Would you like to feed your koi? (y/n): ";
        cin >> feedChoice;
        if (feedChoice == 'y') {
            pond[i]->feed();
        }
    }

    cout << "Displaying pond after feeding:" << endl;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    for (size_t i = 0; i < pond.size(); i++) {
        pond[i]->viralAttack();
    }

    cout << "Displaying pond after viral attack:" << endl;
    for (size_t i = 0; i < pond.size(); i++) {
        cout << "Koi " << pond[i]->getId() << ": ";
        pond[i]->display();
    }

    for (size_t i = 0; i < pond.size(); i++) {
        delete pond[i];
    }

    return 0;
}