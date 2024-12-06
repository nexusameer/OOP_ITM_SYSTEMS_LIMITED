#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
private:
    float price;
    int id;
    int quantity;
    int item_sell_per_day;
    string name;

public:
    Item() : price(0), id(0), quantity(0), item_sell_per_day(0), name("") {}
    Item(float price, int id, int quantity, int item_sell_per_day, string name) {
        this->price = price;
        this->id = id;
        this->quantity = quantity;
        this->item_sell_per_day = item_sell_per_day;
        this->name = name;
    }

    int getItemSellPerDay() const {
        return item_sell_per_day;
    }

    string getName() const {
        return name;
    }
    void setPrice(float price) {
		this->price = price;
	}
    float getPrice() const {
		return price;
	}


    static string most_frequent_item(Item items[], int size) {
        if (size == 0) return "";

        Item* mostFrequent = &items[0];
        for (int i = 1; i < size; ++i) {
            if (items[i].getItemSellPerDay() > mostFrequent->getItemSellPerDay()) {
                mostFrequent = &items[i];
            }
        }
        return mostFrequent->getName();
    }
};
