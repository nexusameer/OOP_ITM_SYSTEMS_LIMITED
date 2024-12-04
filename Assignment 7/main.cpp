#include <iostream>
using namespace std;

// Point class definition
class Point {
private:
    int x, y; // Private member variables for coordinates

public:
    // Fully parameterized constructor with default values
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Getter for x
    int getX() const {
        return x;
    }

    // Setter for x
    void setX(int value) {
        x = value;
    }

    // Getter for y
    int getY() const {
        return y;
    }

    // Setter for y
    void setY(int value) {
        y = value;
    }

    // Function to display the point
    void print() const {
        cout << "(" << x << "," << y << ")";
    }
};

// Polygon class definition
class Polygon {
public:
    Point* points; // Pointer to dynamically allocated Point array
    int n;         // Number of points in the polygon

    // Constructor
    Polygon(int n = 4) : n(n) {
        points = new Point[n]; // Dynamically allocate memory for points
    }

    // Copy constructor
    Polygon(const Polygon& other) : n(other.n) {
        points = new Point[n]; // Allocate new memory for the points
        for (int i = 0; i < n; i++) {
            points[i] = other.points[i]; // Copy each point
        }
    }

    // Destructor
    ~Polygon() {
        delete[] points; // Deallocate the dynamically allocated memory
    }

    // Print function
    void print() const {
        for (int i = 0; i < n; i++) {
            points[i].print(); // Print each point
            if (i < n - 1) {
                cout << " "; // Add space between points
            }
        }
        cout << endl;
    }
};

// Driver program
int main() {
    // Create polygon p1 and set its four points
    Polygon p1;
    p1.points[0] = Point(2, 3);
    p1.points[1] = Point(6, 1);
    p1.points[2] = Point(12, 9);
    p1.points[3] = Point(18, 12);

    // Create polygon p2 using copy constructor
    Polygon p2(p1);

    // Print the initial state of both polygons
    cout << "Initial state of p1: ";
    p1.print();

    cout << "Initial state of p2: ";
    p2.print();

    // Modify one point in p1 and one point in p2
    p1.points[0].setX(5);
    p1.points[0].setY(7);

    p2.points[1].setX(10);
    p2.points[1].setY(15);

    // Print the updated state of both polygons
    cout << "Updated state of p1: ";
    p1.print();

    cout << "Updated state of p2: ";
    p2.print();

    return 0;
}
