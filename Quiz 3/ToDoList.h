#pragma once
#include<string>
#include<iostream>
using namespace std;

class ToDoList
{
public:
	/*The ToDoList class will have an Owner(use aggregation)[1], and a string
		pointer named item_list that will be assigned dynamically allocated memory in
		the constructor for ToDoList(string * item_list)[1] as per the user’s request or
		10 by default.To manage the list of strings, it should also have
		? an int variable to hold capacity[1]
		? an variable to hold the current number_of_tasks(intitialize to zero at start
			and then increment every time you add a task to the list)[1]*/
	
			//ToDoList should also have
		//? A fully parameterized construtor with a default value of 10 for the list size,
		//the memory for the list should be allocated dynamically[1]
		//? It should also have a copy constructor[2]
		//? It should have an addItem(string), if the list of items is maxed out, you
		//should just print out “List is full”[1]
		//? It should have print function which will show the owner’s name followed
		//by the task list[1]
		//? A destructor that deallocate the list memory[1]

	//complete my code according to above requirements

ToDoList(int c=10)
{
	capacity = c;
	item_list = new string[c];
	number_of_tasks++;
}
ToDoList(const ToDoList& other) {
	capacity = c;
	item_list = new string[c];
	number_of_tasks++;
	
}




	

	//do above things
	// ToDoList()


	//ToDoList() {
	//	number_of_tasks++;
	//}
	//ToDoList(int c = 10) {
	//	number_of_tasks++;
	//	//capacity* = new int[c];

	//}
	ToDoList(const ToDoList& other) {
		number_of_tasks++;
		capacity = other.capacity;
	}

	//~ToDoList() {
	//	number_of_tasks--;
	//}

	string* item_list;
private:
	int capacity;
	static int number_of_tasks;
};

