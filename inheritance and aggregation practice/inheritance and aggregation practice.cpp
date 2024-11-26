#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Bank.h"

int main()
{
    ifstream file("inputFile.txt");

    Bank bank;

	string line;
	while (getline(file, line))
	{
		bank.addAccount(line);
	}

}
