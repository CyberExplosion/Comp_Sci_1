#include <iostream>
using namespace std;

int main_done3() {
	float purschase = 95,
		state_tax = 6.5 / 100,
		county_tax = 2.0 / 100;

	cout << "Purschase Price: $" << purschase << endl;
	cout << "State Tax: $" << state_tax * purschase << endl;
	cout << "County Tax: $" << county_tax * purschase << endl;
	cout << "Total tax ammount: $" << (state_tax*purschase) + (county_tax*purschase) << endl;
	return 0;
}