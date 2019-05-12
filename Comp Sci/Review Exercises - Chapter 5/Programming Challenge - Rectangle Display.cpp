#include <iostream>
using namespace std;

int main_done20() {
	double length,
		width,
		value_1,
		value_2;

	cout << "Enter 2 positive integers: ";
	cin >> value_1 >> value_2;
	if (value_1 > value_2) {
		length = value_1;
		width = value_2;
	}
	else {
		length = value_2;
		width = value_1;
	}

	for (int i = 0; i < width; i++) {
		for (int k = 0; k < length; k++) {
			cout << "X";
		}
		cout << endl;
	}

	return 0;
}