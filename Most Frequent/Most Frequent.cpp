// Most Frequent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Item.h";
int main() {
    Item items[] = {
        Item(10.5, 1, 100, 20, "Apples"),
        Item(15.0, 2, 50, 25, "Bananas"),
        Item(7.0, 3, 200, 10, "Oranges"),
        Item(12.5, 4, 150, 35, "Grapes")
    };
    int size = sizeof(items) / sizeof(items[0]);

    cout << "Most frequent item: " << Item::most_frequent_item(items, size) << endl;

    return 0;
}


