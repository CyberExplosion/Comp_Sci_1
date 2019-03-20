#include <iostream>
using namespace std;

int main_done14() {
	double celcius,
		farenheit;

	cout << "Enter the Celsius temperature: ";
	cin >> celcius;

	farenheit = ((9.0 / 5.0)*celcius) + 32;

	cout << "The Fahrenheit temperature is: " << farenheit << endl;

	return 0;
}