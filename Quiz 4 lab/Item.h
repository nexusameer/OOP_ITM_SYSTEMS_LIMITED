#pragma once
#include<iostream>
#include<string>
using namespace std;
class Item
{
public:
	Item() {
		name = "";
		price = 10;
	}
	Item(string name, int price) {
		this->name = name;
		this->price = price;
	}
	//A print function that prints the name and the price[1]
	void PrintBill() {
		cout << name << endl;
		cout << price << endl;
	}
private:
	string name;
	int price;
};

