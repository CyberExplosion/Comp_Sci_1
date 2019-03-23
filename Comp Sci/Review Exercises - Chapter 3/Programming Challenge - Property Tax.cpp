#include <iostream>
using namespace std;

int main_done17() {
	const double ASSERTED_VALUE_PERCENT = 60.0 / 100;

	double actual_value,
		current_tax_for_100,
		annual_property_tax;

	cout << "Enter the actual value of the property: $";
	cin >> actual_value;
	cout << "Enter the current tax rate for each $100 of asserted value: ";
	cin >> current_tax_for_100;

	annual_property_tax = ((actual_value*ASSERTED_VALUE_PERCENT) / 100.0)*current_tax_for_100;

	cout << "The annual property tax the homeowner will be charged fro this property is: $" << annual_property_tax << endl;

	return 0;
}