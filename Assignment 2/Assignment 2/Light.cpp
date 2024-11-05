#include "Light.h"
#include <iostream>
using namespace std;

Light::Light()
{
	state = 0;
	brightness = 5;
}

Light::Light(char s)
{
	shape = s;
	state = 0;
	brightness = 5;
}

Light::Light(char s, int b)
{
	shape = s;
	state = 0;
	brightness = b;

}
void Light::turnOn() {
	state = 1;
}
void Light::turnOff() {
	state = 0;
}
void Light::brighten() {
	if (brightness < 10) {
		brightness += 1;
	}
}
void Light::dim() {
	if (brightness > 0) {
		brightness -= 1;
	}
}

void Light::display() {
	if(state == 1) {
		cout<<"light is on: "<<endl;
		for(int i=0; i<brightness; i++) {
			cout << shape;
		}
		cout << endl;
		cout<<"brightness : "<<brightness<<endl;
	}
	else {
		cout << "Light is off" << endl;
	}
}

Light::~Light()
{
	turnOff();
	cout << "The light with shape '" << shape << "' has been destroyed.\n";
}

void Light::setShape(char s) {
	shape = s;
}

char Light::getShape() {
	return shape;
}

void Light::setBrightness(int b) {
	brightness = b;
}

int Light::getBrightness() {
	return brightness;
}

void Light::setState(bool s) {
	state = s;
}

int Light::getState() {
	return state;
}
