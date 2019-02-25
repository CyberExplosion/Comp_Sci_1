#include <iostream>
using namespace std;

int main_donecheckpoint18() {
	const double CONVERSION = 1.467;
	double miles_per_hour,
		feet_per_second;

	cout << "This program converts miles per hour to\n" << "feet per second.\n";
	cout << "Enter a speed in MPH: ";
	cin >> miles_per_hour;

	feet_per_second = miles_per_hour * CONVERSION;
	cout << "That is " << feet_per_second << " feet per second. \n";
	return 0;
}