#include <iostream>
using namespace std;

int main_done4() {

	double fahrenheit;

	cout << "Table of Fahrenheit \t\t Celsius\n";

	for (int i = 0; i < 30; i++) {
		fahrenheit = 9.0 / (5 * (i + 1)) + 32;
		cout << fahrenheit  << "\t\t" << i + 1 << endl;
	}

	return 0;
}