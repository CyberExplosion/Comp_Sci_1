#include <iostream>
#include <iomanip>
using namespace std;

int main_done8() {
	int days,
		total=0;

	cout << "Number of days the employee worked during the month: ";
	cin >> days;
	while (days > 31 && days < 1) {
		cout << "Please enter a valid number between 1 and 31: ";
		cin >> days;
	}
	cout << "Days worked \t\t Salary\n";
	cout << "-----------------------------------\n";

	for (int i = 0; i < days; i++) {
		cout << i + 1 << "\t\t" << 2 * (i + 1) << endl;
		total += 2 * (i + 1);
	}

	cout << showpoint << fixed << setprecision(2);
	cout << "The total money makes in this month is: " << total / 100.0 << endl;

	return 0;
}