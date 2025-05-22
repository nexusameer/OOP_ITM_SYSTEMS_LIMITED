#include "MissingNumber.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

MissingNumber::MissingNumber() : Game("Missing Number Challenge") {
    srand(time(0)); // Seed random number generator
}

bool MissingNumber::play() {
    vector<int> sequence = generateSequence(10); // Generate a sequence of 10 numbers
    int missingIndex = rand() % sequence.size();
    int missingNumber = sequence[missingIndex];
    sequence[missingIndex] = 0; // Set a random number to zero

    cout << "Find the missing number in this sequence: ";
    for (int num : sequence) {
        if (num == 0) cout << "_ ";
        else cout << num << " ";
    }
    cout << endl;

    int answer;
    cout << "Your guess: ";
    cin >> answer;

    if (answer == missingNumber) {
        cout << "Correct! You earned a Missing Number Badge.\n";

        return true;
    }
    else {
        cout << "Incorrect. The missing number was: " << missingNumber << "\n";
        return false;
    }
}

vector<int> MissingNumber::generateSequence(int size) {
    vector<int> sequence;
    int start = rand() % 50 + 1; // Random start point between 1 and 50
    for (int i = 0; i < size; ++i) {
        sequence.push_back(start + i);
    }
    return sequence;
}
