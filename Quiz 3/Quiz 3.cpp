// Quiz 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Owner.h"
#include "ToDoList.h"

int main()
{

	ToDoList A("Huda", "Sarfraz", 20);
	A.addTasks[1]("prepare lecture");
	A.addTasks[2]("Make exam");
	A.addTasks[3]("Grade exam");
	ToDoList B(A)[1];
	A.addTasks[2]("Invigilate exam");
	A.addTasks[3]("Attend meeting");

}
