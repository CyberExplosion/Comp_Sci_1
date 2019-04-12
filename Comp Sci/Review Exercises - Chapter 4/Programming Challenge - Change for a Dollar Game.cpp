#include <iostream>
using namespace std;

int main_done6() {
	const int PENNY = 1,
		NICKEL = 5,
		DIME = 10,
		QUARTER = 25;
	int numbers_of_penny,
		numbers_of_nickel,
		numbers_of_dime,
		numbers_of_quater;

	cout << "Enter the number of pennies, nickels, dimes and quarters: ";
	cin >> numbers_of_penny >> numbers_of_nickel >> numbers_of_dime >> numbers_of_quater;

	if ((numbers_of_penny*PENNY + numbers_of_nickel * NICKEL + numbers_of_dime * DIME + numbers_of_quater * QUARTER) == 100) {
		cout << "Congrats for winning the game\n";
	}
	else if ((numbers_of_penny*PENNY + numbers_of_nickel * NICKEL + numbers_of_dime * DIME + numbers_of_quater * QUARTER) > 100) {
		cout << "The money is more than one dollar" << endl;
		}
	else if ((numbers_of_penny*PENNY + numbers_of_nickel * NICKEL + numbers_of_dime * DIME + numbers_of_quater * QUARTER) < 100) {
		cout << "The money is less than one dollar\n";
	}


	return 0;
}