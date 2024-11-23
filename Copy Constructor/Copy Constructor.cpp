#include <iostream>
#include "StudentTestScores.h"
using namespace std;

int main() {
    StudentTestScores ameer("Ameer", 3);
    ameer.setTestScore(88.5, 0);
    ameer.setTestScore(92.0, 1);
    ameer.setTestScore(79.3, 2);

    StudentTestScores hamza(ameer);
    hamza.setStudentName("Hamza");
    hamza.setTestScore(95.0, 0);
    hamza.setTestScore(5.0, 1);

    cout << "Ameer's Information:" << endl;
    cout << "Name: " << ameer.getStudentName() << endl;
    for (int i = 0; i < ameer.getNumTestScores(); i++) {
        cout << "Test " << (i + 1) << ": " << ameer.getTestScore(i) << endl;
    }

    cout << "\nHamza's Information:" << endl;
    cout << "Name: " << hamza.getStudentName() << endl;
    for (int i = 0; i < hamza.getNumTestScores(); i++) {
        cout << "Test " << (i + 1) << ": " << hamza.getTestScore(i) << endl;
    }

    return 0;
}
