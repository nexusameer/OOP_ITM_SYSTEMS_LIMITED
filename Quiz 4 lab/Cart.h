#ifndef CART_H
#define CART_H

#include "Item.h"

class Cart {
private:
    Item* item_list;
    int number_of_items;
    int capacity;

public:
    Cart(int n = 10) : capacity(n), number_of_items(0) {
        item_list = new Item[capacity];
    }
    Cart(const Cart& other) : capacity(other.capacity), number_of_items(other.number_of_items) {
        item_list = new Item[capacity];
        for (int i = 0; i < number_of_items; i++) {
            item_list[i] = other.item_list[i];
        }
    }

    void insertItem(const Item& item) {
        if (number_of_items < capacity) {
            item_list[number_of_items++] = item;
        }
        else {
            cout << "Cart is full!" << endl;
        }
    }
    void printBill() const {
        int total = 0;
        cout << "Cart Items:" << endl;
        for (int i = 0; i < number_of_items; i++) {
            cout << i + 1 << ". ";
            item_list[i].print();
            total += item_list[i].getPrice();
        }
        cout << "Total Bill: " << total << endl;
    }
};

#endif
