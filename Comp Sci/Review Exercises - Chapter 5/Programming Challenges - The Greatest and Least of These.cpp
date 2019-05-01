#include <iostream>
using namespace std;

int main_done14() {
	int input,
		largest=-9999,
		smallest=-9999;

	do {
		cout << "Enter the integer you want, enter -99 to end the loop: ";
		cin >> input;
		if (input != -99) {
			if (input < smallest || smallest == -9999) {
				smallest = input;
			}
			if (input > largest) {
				largest = input;
			}
		}
		else break;
	} while (input != -99);

	cout << "The largest number entered: " << largest << endl;
	cout << "The smallest number entered: " << smallest << endl;

	return 0;
}