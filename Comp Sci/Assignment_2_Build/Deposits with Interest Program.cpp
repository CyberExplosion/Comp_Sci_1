//Khoi Nguyen
//CS 1, Section #0109
//Assignment #2, Problem: Deposits with Interests Program
//A program that takes in the amount of money on deposit and a number of years it has been on deposit. It will calculate the interest to be paid on the deposits based on a predetermined schedule. It then will display the original deposits, the interest earned and the new balance.

#include <iostream>
#include <iomanip>
using namespace std;

int main_done2() {
	/*Pseudo Code
	Input:
		an amount of money on deposits
		number of years it has been on deposits (decimals)
	Processing:
		- year >= 5
				\
				rate = 4.5%
		- 4 <= year < 5
					\
					rate = 4%
		- 3 <= year < 4
					\
					rate = 3.5%
		- 2 <= year <	3
					\
					rate = 2.5%
		- 1 <= year < 2
					\
					rate = 2%
		- year < 1
				\
				rate = 1.5%
		interest = deposit * interest_rate * years
	Output:
		original deposit
		interest earned
		new balance (with interested added to the deposit)
end
	*/
	double deposit_amount,
		years_passed_deposit,
		interest_rate,
		interest_earned,
		new_balance;

	cout << "Deposits with Interest Program\n\n"
		<< "Please enter the amount deposited today: ";
	cin >> deposit_amount;
	cout << endl;
	cout << "Please enter the number of years it has been on deposit: ";
	cin >> years_passed_deposit;
	cout << endl << endl;

/*---- THIS BLOCK OF CODE DOESN'T WORK ----
	switch (true) {
	case (years_passed_deposit >= 5):
		interest_rate = 4.5 / 100;
		break;
	case (years_passed_deposit >= 4 && years_passed_deposit < 5):
		interest_rate = 4 / 100;
		break;
	case (years_passed_deposit >=3 && years_passed_deposit < 4):
		interest_rate = 3.5 / 100;
		break;
	case (years_passed_deposit >= 2 && years_passed_deposit < 3):
		interest_rate = 2.5 / 100;
		break;
	case (years_passed_deposit >=1 && years_passed_deposit < 2):
		interest_rate = 2 / 100;
		break;
	default:
		interest_rate = 1.5 / 100;
	}
*/
	// switch-case only allows constant value, it won't accept any variable that can possibly change value while the program is running. What a waste of time, if only I know this sooner ;_;. Well lesson learned. Now I know why switch-case kinda suck. People creating C++, why would you make the switch-case like this >:(

	if (years_passed_deposit >= 5) {
		interest_rate = 4.5 / 100;
	}
	else if (years_passed_deposit < 5 && 4 <= years_passed_deposit) {
		interest_rate = 4.0 / 100;
	}
	else if (years_passed_deposit < 4 && 3 <= years_passed_deposit) {
		interest_rate = 3.5 / 100;
	}
	else if (years_passed_deposit < 3 && 2 <= years_passed_deposit) {
		interest_rate = 2.5 / 100;
	}
	else if (years_passed_deposit < 2 && 1 <= years_passed_deposit) {
		interest_rate = 2.0 / 100;
	}
	else {
		interest_rate = 1.5 / 100;
	}

	interest_earned = deposit_amount * interest_rate * years_passed_deposit;
	new_balance = deposit_amount + interest_earned;

	cout << showpoint << fixed << setprecision(2);
	cout << "Your original deposit was $" << deposit_amount << endl
		<< "Your interest earned in " << years_passed_deposit << " is $" << interest_earned << endl
		<< "Your new balance is $" << new_balance << endl;

	return 0;
}