#pragma once
#include "Base.h"
using namespace std;
class Derived :
    public Base
{
public:
	Derived();
	~Derived();

	void showMessage();
};

