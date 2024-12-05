#include "Item.h";
class Cart
{
public:
	/*A constructor that sets the number_of_items to 0 and uses new to
		dynamically get memory for n items, where n will be received by the
		constructor from the user, and if not received, will be set to 10[1]*/
	Cart(int number_of_items = 10) {
		number_of_items = 0;
		item_list = new int[number_of_items];
	}

	/*An insert item function which takes an item object reference as parameter
		and inserts it into the list.Note that item itself does not use dynamically
		allocated memory so you can rely on the default memberwise copy to be
		able to produce a copy without issues[1]*/
	void AddItem(Item& item) {
		item_list[number_of_items++] = item;
	}
	/*A print bill function that prints out a list of the item names and their prices
		and then the total bill at the end[1]*/
	void PrintBill() {
		int total = 0;
		for (int i = 0; i < number_of_items; i++) {
			total += item_list[i].get_price();
			std::cout << item_list[i].get_name() << ": " << item_list[i].get_price() << std::endl;
		}
		cout << "Total: " << total << std::endl;
	}
	//A copy constructor that can be used to replicate the cart[1]
	Cart(const Cart& other) {
		number_of_items = other.number_of_items;
		item_list = new int[number_of_items];
		for (int i = 0; i < number_of_items; i++) {
			item_list[i] = other.item_list[i];
		}
	}

private:
	
	int Item* = item_list;

	int number_of_items;
};

