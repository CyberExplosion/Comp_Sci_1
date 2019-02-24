/* This program illustrates what can happen when a floating-point number is entered for an integer vaiable.
*/

#include <iostream>
using namespace std;

int main_done2() {
	int int_number;
	double float_number;

	cout << "Input a number: ";
	cin >> int_number;
	cout << "Input a second number: \n";
	cin >> float_number; // it doesn't let me input my float number because the input buffer still store my decimal number back when i input the first value
	cout << "You enter: " << int_number << " and " << float_number << endl; // if enter any float value, for example 12.3, the program won't let me input the second variable value.
	return 0;
}