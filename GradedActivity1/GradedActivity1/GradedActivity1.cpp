// GradedActivity1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "FinalExam.h"

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int questions; // Number of questions on the exam
    int missed;    // Number of questions missed by the student

    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Define a FinalExam object and initialize it with
    // the values entered.
    FinalExam test(questions, missed);

    // Display the test results.
    cout << setprecision(2);
    cout << "\nEach question counts " << test.getPointsEach()
        << " points.\n";
    cout << "The exam score is " << test.getScore() << endl;
    cout << "The exam grade is " << test.getLetterGrade() << endl;

    return 0;
}
/* To test base class only
int main()
{
    double testScore;  // To hold a test score

    // Create a GradedActivity object for the test.
    GradedActivity test;

    // Get a numeric test score from the user.
    cout << "Enter your numeric test score: ";
    cin >> testScore;

    // Store the numeric score in the test object.
    test.setScore(testScore);

    // Display the letter grade for the test.
    cout << "The grade for that test is "
        << test.getLetterGrade() << endl;

    return 0;
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
