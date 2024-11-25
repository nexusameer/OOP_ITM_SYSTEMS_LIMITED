#include <iostream>
using namespace std;
#include "Polygon.h"
#include "Point.h"

int main()
{
    cout << "Copy Constructor Driver Program: " << endl;
    Polygon p1(4);
    Polygon p2(p1);
    p1.print();
    p2.print();
    p1.pointer[0].setX(50);
    p1.pointer[0].setY(60);
    p2.pointer[0].setX(5);
    p2.pointer[0].setY(6);
    p1.print();
    p2.print();
}