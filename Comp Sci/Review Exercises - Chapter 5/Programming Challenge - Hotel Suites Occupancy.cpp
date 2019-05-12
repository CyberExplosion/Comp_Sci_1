#include <iostream>
using namespace std;

int main_done19() {
	int suites=0,
		total_occupancy = 0;

	for (int i = 10; i <= 16; i++) {
		do {
			if (i == 13) {
				break;
			}
			cout << "Enter the number of suites on floor " << i << ": ";
			cin >> suites;
			if (suites < 0 && suites >= 20) {
				cout << "Wrong value, please enter the correct value\n\n";
			}
			else {
				if (i == 13) {
					// do nothing
				}
				else {
					total_occupancy += suites;
				}
			}

		} while (suites < 0 && suites >= 20);
	}
	cout << "Total occupancy is: " << total_occupancy << "\n";

	return 0;
}