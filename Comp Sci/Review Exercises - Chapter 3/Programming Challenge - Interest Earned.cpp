#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main_done20() {
	double principal,
		interest_rate,
		interest_earned,
		total_balance;

	int times_compound;

	cout << "Enter the principal: ";
	cin >> principal;
	cout << "Enter the interest rate: ";
	cin >> interest_rate;
	cout << "Enter the numbers of times the interest is compounded: ";
	cin >> times_compound;
	

	total_balance = principal * pow((1 + (interest_rate/100.0) / times_compound), times_compound);
	interest_earned = total_balance - principal;

	cout << showpoint << fixed << setprecision(2);
	cout << "Interest Rate: " << setw(9) << interest_rate << "%\n"
		<< "Times Compounded: " << setw(7) << times_compound << endl
		<< "Principal: " << setw(5) << "$" << setw(9) << principal << endl
		<< "Interest: " << setw(6) << "$" << setw(9) << interest_earned << endl
		<< "Final balance: " << setw(1) << "$" << setw(9) << total_balance << endl;

	return 0;
}