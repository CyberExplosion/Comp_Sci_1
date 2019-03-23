#include <iostream>
using namespace std;

int main_done23c() {
	double diameter,
		radius,
		pizza_area,
		slice_area_for_1,
		pizza_area_need;

	const double SLICE_AREA = 14.125,//square
		PI = 3.14;
	
	const int EACH_PERSON_NUM_SLICE = 4;

	int num_people,
		num_pizza;

	cout << "Enter the number of people: ";
	cin >> num_people;
	cout << "Enter the diameter of the pizza in inches: ";
	cin >> diameter;

	radius = diameter / 2.0;
	pizza_area = pow(radius, 2)*PI;
	
	slice_area_for_1 = 4 * SLICE_AREA;
	
	pizza_area_need = slice_area_for_1 * num_people;
	num_pizza = pizza_area_need / pizza_area;

	cout << "The number of pizza are: " << num_pizza << endl;




	return 0;
}