#include <iostream>
using namespace std;

int main_done18() {
	/*Pseudo Code
	Input:
		actual value of a piece of property
		current tax rate for each $100 of assessed value
	Processing:
		annual property charged
			\
			charged rate for 100 x ((assessed value-5000)/100)
				\
				assessed value = (60 percent x real value)/100
		
		quarter value = 1/4.0 * annual
	*/
	const double ASSESSED_PERCENT = 60.0 / 100;

	double actual_value,
		cuurent_tax_value_of_100,
		annual_charge,
		quarter_charge,
		assessed_value;

	cout << "Enter the actual value of a piece of property: $";
	cin >> actual_value;
	cout << "Enter the current tax rate for each $100 of assessed value: ";
	cin >> cuurent_tax_value_of_100;
	
	assessed_value = (ASSESSED_PERCENT * actual_value);
	annual_charge = cuurent_tax_value_of_100 * ((assessed_value - 5000)/100.0);
	quarter_charge = annual_charge / 4;

	cout << "Annual property tax a senior homeowner will be charged: $" << annual_charge << endl
		<< "The quarterly bill will be: $" << quarter_charge << endl;

	return 0;
}