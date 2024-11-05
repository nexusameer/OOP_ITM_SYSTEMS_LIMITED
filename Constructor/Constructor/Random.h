#include<iostream>
using namespace std;

#pragma once
class Random
{
public:
	Random(float=1, float=1, float =1);
	float getWidth();
	float getLentgh();
	float getHeight();
private:
	float length;
	float width;
	float height;
};
