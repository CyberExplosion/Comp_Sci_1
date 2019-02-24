#include <iostream>
using namespace std;

int main_done8() {
	float arce=0.5,
		meter,
		feet;

	feet = arce * 43560;
	meter = 10.7639 * feet;
	cout << "The number of square feet: " << feet << " ft^2.\n";
	cout << "The number of sqaure meter: " << meter << " m^2.\n";
	return 0;
}