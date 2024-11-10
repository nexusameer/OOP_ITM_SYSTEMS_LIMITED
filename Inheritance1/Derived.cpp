#include "Derived.h"

Derived::Derived()
{
	cout << "Derived constructor" << endl;
}

Derived::~Derived()
{
	cout << "Derived destructor" << endl;
}


void Derived::showMessage()
{
	cout << "Derived message" << endl;
}
