#include <iostream>
using namespace std;

#include "Base.h"
#include "Derived.h"

int main()
{
    Derived d;
    d.showMessage();

    Base b;
	b.showMessage();

	return 0;
}