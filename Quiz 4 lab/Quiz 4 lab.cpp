
#include <iostream>
using namespace std;
#include "Cart.h"

int main() {
    Cart mycart;

    Item item1("Apple", 30);
    Item item2("Banana", 20);
    Item item3("Orange", 50);
    mycart.insertItem(item1);
    mycart.insertItem(item2);
    mycart.insertItem(item3);

    cout << "Bill for my cart:" << endl;
    mycart.printBill();

    Cart another_cart = mycart;

    Item item4("Mango", 40);
    another_cart.insertItem(item4);

    cout << "\nBill for another_cart:" << endl;
    another_cart.printBill();

    cout << "\nBill for my cart after modification:" << endl;
    mycart.printBill();

    return 0;
}


