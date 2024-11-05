// Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Random.h"
using namespace std;
int main()
{
    Random r1;
    cout<<r1.getLentgh()<<endl;
    cout<<r1.getWidth()<<endl;
    cout<<r1.getHeight();

    cout<<"Next Object \n";
    Random r2(5);
    cout << r2.getLentgh() << endl;
    cout << r2.getWidth() << endl;
    cout << r2.getHeight();

    cout << "Next Object \n";
    Random r3(5,4,2);
    cout << r3.getLentgh() << endl;
    cout << r3.getWidth() << endl;
    cout << r3.getHeight();
}
