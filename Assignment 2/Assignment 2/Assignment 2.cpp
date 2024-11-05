#include <iostream>
using namespace std;
#include "Light.h"

int main()
{
    int n;
    cout << "Enter the number of lights to create:"<<endl;
    cin >> n;
    Light* arr = new Light[n];



	for (int i = 0; i < n; i++) {
        char s;
        int b;
		cout<<"Set the shape of the light: "<< i+1 << " Light " << endl;
        cin>>s;
        arr[i].setShape(s);

		cout<<"Set the brightness of the light: "<< i+1 << " Light " << endl;
		cin>>b;
		arr[i].setBrightness(b);
	}

    for(int i=0; i<n; i++) {
		arr[i].turnOn();
	}

	for(int i=0; i<n; i++) {
        arr[i].display();
	}   

    for (int i = 0; i < n; i++) {
        arr[i].turnOff();
        cout << "Light " << i + 1 << " has been turned off." << endl;
    }
    delete[] arr;
    
    return 0;

}
