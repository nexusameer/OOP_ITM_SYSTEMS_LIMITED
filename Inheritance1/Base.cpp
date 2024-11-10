#include "Base.h"

Base::Base()
{
	cout << "Base constructor" << endl;
}

Base::~Base()
{
	cout << "Base destructor" << endl;
}

void Base::showMessage()
{
	cout<<"Base message"<<endl;
}
