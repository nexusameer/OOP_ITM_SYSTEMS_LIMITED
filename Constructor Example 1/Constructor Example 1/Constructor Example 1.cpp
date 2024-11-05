#include <iostream>
#include "Cat.h"

using namespace std;
#include "Cat.h"
int main()
{
    Cat myCat;
    cout << myCat.displayDetails()<<endl;
    Cat myCat1("Ameer Hamza");
    cout << myCat1.displayDetails()<<endl;
    Cat myCat2("Kamboh", 23);
    cout<<myCat2.displayDetails();
}