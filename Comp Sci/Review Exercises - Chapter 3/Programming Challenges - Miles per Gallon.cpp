#include <iostream>
using namespace std;

int main_done1() {
	/*Pseudo Code
	Input:
		gallon of gas car can hold
		number of miles it can be drive on full tank
	Processing:
		miles per gallon = miles / gallon
	Output: 
		number of miles per gallon the car gets
end
	*/
	double max_gallon,
		miles_on_max_gallon;

	cout << "Enter the number of gallon of gas the car can hold: ";
	cin >> max_gallon;
	cout << "Enter the number of miles it can be driven on a full tank: ";
	cin >> miles_on_max_gallon;

	miles_on_max_gallon /= max_gallon;

	cout << "Number of miles per gallon the car gets: " << miles_on_max_gallon << endl;

	return 0;
}