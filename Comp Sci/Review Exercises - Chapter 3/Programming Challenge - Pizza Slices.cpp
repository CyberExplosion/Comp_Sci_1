#include <iostream>
using namespace std;

int main_done22c() {
	double diameter,
		radius,
		pizza_area;

	const double SLICE_AREA = 14.125,//square
		PI = 3.14;
	
	int num_slices;

	cout << "Enter the diameter of the pizza in inches: ";
	cin >> diameter;

	radius = diameter / 2.0;

	pizza_area = pow(radius, 2)*PI;
	num_slices = pizza_area / SLICE_AREA;

	cout << "The number of slices are: " << num_slices << endl;


	return 0;
}