#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Player
{
public:
	void Register(string u, string p) {
		ifstream MyFile("Authentication.txt");
		if (MyFile.is_open()) {
			while (getline(MyFile, line)) {
				cout << line << endl;
			}
		}
		ofstream MyFile("Authentication.txt", ios::app);
		if (MyFile.is_open()) {
			while (getline(MyFile, line)) {
				cout << line << endl;
			}
		}
		MyFile << u << "\n" << p << "\n" << endl;
		MyFile.close();
	}
private:
	string username;
	string password;
};

