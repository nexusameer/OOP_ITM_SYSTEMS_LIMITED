#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    int price;

public:
    Item() : name(""), price(0) {}
    Item(string name, int price) : name(name), price(price) {}
    void print() const {
        cout << "Item: " << name << ", Price: " << price << endl;
    }
    string getName() const { return name; }
    int getPrice() const { return price; }
};

#endif
