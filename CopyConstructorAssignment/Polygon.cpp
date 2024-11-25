#include "Polygon.h"

Polygon::Polygon(int n=4) {
	this->n = n;
	pointer = new Point[n];
}
void Polygon::print() {
	for (int i = 0; i < n; i++) {
		cout<<"("<<pointer[i].getX()<<","<< pointer[i].getY()<<")"<<endl;
	}
}
Polygon::~Polygon() {
	delete[] pointer;
}
Polygon::Polygon(const Polygon& other) {
	n = other.n;
	pointer = new Point[n];
	for (int i = 0; i < n; i++) {
		pointer[i] = other.pointer[i];
	}
}