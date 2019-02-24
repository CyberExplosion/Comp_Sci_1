#include <cmath>
#include <iostream>
using namespace std;

int main_done6() {
	double area,
		radius;

	cout << "This program calculates the area of a circle.\n";
	cout << "What is the radius of the circle? ";
	cin >> radius;
	area = 3.14159*pow(radius, 2);
	cout << "The area is " << area << endl;
	return 0;
}