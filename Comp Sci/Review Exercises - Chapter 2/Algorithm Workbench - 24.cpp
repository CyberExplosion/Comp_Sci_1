#include <iostream>
using namespace std;

int main_done24() {
	/*Pseudo Code
	Input:
		miles traveled
		gallons of gas used
	Processing:
		miles per gallon = miles / gallon
	Output:
		miles per gallon
	*/
	float miles,
		gallons,
		miles_per_gallon;

	cout << "Miles traveled: ";
	cin >> miles;
	cout << "Gallon of gas used: ";
	cin >> gallons;
	miles_per_gallon = miles / gallons;
	cout << "Miles per gallon: " << miles_per_gallon << endl;
	return 0;
}