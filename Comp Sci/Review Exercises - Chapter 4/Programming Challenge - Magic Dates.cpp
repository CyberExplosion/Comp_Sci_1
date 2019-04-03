#include <iostream>
using namespace std;

int main_done3() {
	short int date,
		month,
		year;

	cout << "Enter the date, month and year: ";
	cin >> date >> month >> year;
	if (date <= 31 && date > 0 && month <= 12 && month > 0) {
		cout << ((date*month == year) ? "The date is magic\n" : "The date is not magic");
	}
	else {
		cout << "The date or month you entered is not valid\n";
	}
	return 0;
}