#include <iostream>
using namespace std;

int main_done34() {
	int number;

	do {
		cout << "Enter an even number: ";
		cin >> number;
	} while (number % 2 != 0);

	cout << "The number enter is: " << number << endl;

	return 0;
}