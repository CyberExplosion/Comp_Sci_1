#include <iostream>
using namespace std;

int main_done30() {
	double input,
		accumulator = 0.0;


	for (int i = 0; i < 10; i++) {
		cout << "Enter the " << i + 1 << " number: ";
		cin >> input;
		accumulator += input;
	}
	cout << "The total of all is: " << accumulator << endl;

	return 0;
}