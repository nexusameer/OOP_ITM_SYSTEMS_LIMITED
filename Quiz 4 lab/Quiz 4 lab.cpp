// Quiz 4 lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Cart.h"
#include "Item.h"
int main()
{
	Cart mycart;
	Item item1;
	Item item2;
	Item item3;

	mycart.AddItem(item1);
	mycart.AddItem(item2);
	mycart.AddItem(item3);

	mycart.PrintBill();

	Cart another_cart(mycart);

	another_cart.PrintBill();

	another_cart.AddItem(item3);
	

	mycart.PrintBill();





      

}

