#include <iostream>
using namespace std;

int main_done4() {
	float charge = 44.50,
		tax = 6.75 / 100,
		tip = 15.0 / 100;
	
	cout << "Meal cost: $" << charge << endl;
	cout << "Tax amount: $" << tax * charge << endl;
	cout << "Tip amount: $" << tip * (charge+(charge*tax)) << endl;
	cout << "Total Bill: $" << charge + (tax*charge) + (tip*(charge + (charge*tax))) << endl;
	return 0;
}