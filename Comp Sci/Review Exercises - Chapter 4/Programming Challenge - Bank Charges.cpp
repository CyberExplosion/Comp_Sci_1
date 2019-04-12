#include <iostream>
using namespace std;

int main_done11() {
	const int BANK_CHARGES = 15;
	
	bool error = false;

	int check;

	double fees;

	cout << "Enter the number of checks written during the past month: ";
	cin >> check;

	if (check < 20&&check>=0) {
		fees = 0.10;
	}
	else if (check >= 20 && check <= 39) {
		fees = 0.08;
	}
	else if (check >= 40 && check <= 59) {
		fees = 0.06;
	}
	else if (check >= 60) {
		fees = 0.04;
	}
	else error = true;

	if (error == true) {
		cout << "User input invalid\n";
	}
	else {
		cout << "The bank's fees for the month is: " << BANK_CHARGES + fees << endl;
	}

	return 0;
}