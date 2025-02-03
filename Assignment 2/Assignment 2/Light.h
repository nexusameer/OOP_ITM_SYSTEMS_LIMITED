#pragma once
class Light
{
private:
	char shape;
	bool state;
	int brightness;
public:
	Light();
	Light(char);
	Light(char, int);
	~Light();

	void turnOn();
	void turnOff();
	void brighten();
	void dim();
	void display();


	int getBrightness();
	void setBrightness(int);
	char getShape();
	void setShape(char);
	int getState();
	void setState(bool);
};

