#include <iostream>
using namespace std;

int main_done17() {
	int starting_number,
		number_of_day_multiply;
	double average_increase_rate;

	do {
		cout << "Enter the starting number: ";
		cin >> starting_number;
		cout << "Enter the number of days multiply: ";
		cin >> number_of_day_multiply;
		cout << "Enter the average increase rate: ";
		cin >> average_increase_rate;

		if (starting_number < 2 || average_increase_rate < 0 || number_of_day_multiply < 1) {
			cout << "Wrong value, please enter the correct value" << endl;
		}
		else {
			cout << "Size\t\tDays\n";
			for (int i = 0; i < number_of_day_multiply; i++) {
				cout << starting_number * pow((1 + (average_increase_rate / 100)), i) << "\t\t" << i+1 << endl;
			}
		}

	} while (starting_number < 2 || average_increase_rate < 0 || number_of_day_multiply < 1);

	return 0;
}