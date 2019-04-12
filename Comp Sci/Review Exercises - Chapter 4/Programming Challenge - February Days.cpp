#include <iostream>
using namespace std;

int main_done15c() {
	bool leap_or_not = false;
	int input;

	cout << "Enter the year number: ";
	cin >> input;

	leap_or_not = input % 100 == 0 ? (input % 400 == 0 ? true : false) : (input % 4 == 0 ? true : false);

	if (leap_or_not) {
		cout << "In " << input << " February has 29 days.\n";
	}
	else {
		cout << input << " is not a leap year. February has 28 days.\n";
	}

	return 0;
}