#include <iostream>
#include <string>
using namespace std;

int main_dpne7() {
	string month1,
		month2,
		month3;
	double rain_amount;

	cout << "Enter the name of three month with a white space between each of them: ";
	cin >> month1 >> month2 >> month3;
	cout << "Enter the amount of rain (in inches) that fell that month: ";
	cin >> rain_amount;
	cout << endl;

	cout << "The average monthly rain fall for " << month1 << ", " << month2 << ", and " << month3 << " was " << rain_amount << " inches.\n";

	return 0;
}