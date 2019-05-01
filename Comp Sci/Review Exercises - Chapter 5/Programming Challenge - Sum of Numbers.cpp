#include <iostream>
using namespace std;

int main_done2() {
	int integer,
		sum = 0;

	do {
		cout << "Please enter a positive integer: ";
		cin >> integer;
	} while (integer < 0);

	for (int i = 1; i <= integer; i++) {
		sum += i;
	}

	cout << "The sum from 1 to the entered integer is: " << sum << endl;

	return 0;
}