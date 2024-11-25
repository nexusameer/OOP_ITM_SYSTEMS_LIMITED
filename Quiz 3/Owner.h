#pragma once
#include<string>
#include<iostream>
using namespace std;

class Owner
{
public:
	Owner(string first, string last) : first_name(first), last_name(last) {
	}
	void setName(string first, string last) {
		first_name = first;
		last_name = last;
	}
private:
	string first_name;
	string last_name;
};

