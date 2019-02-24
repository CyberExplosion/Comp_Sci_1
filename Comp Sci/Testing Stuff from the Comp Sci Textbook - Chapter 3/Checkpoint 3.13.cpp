#include <cmath>
#include <iostream>
using namespace std;

int main_donecheckpoint() {
	double volume,
		radius,
		height;

	cout << "This program will tell you the volume of\n";
	cout << "a cylinder-shaped fule tank.\n";
	cout << "How tall is the tank? ";
	cin >> height;
	cout << "What is the radius of the tank? ";
	cin >> radius;
	volume = 3.14159 * pow(radius, 2) * height;
	cout << "Volume of the tank is: " << volume << endl;
	return 0;
}