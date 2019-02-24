/*Pseudo Code
Input Phase:
	Display: Customer's current balance?
	Input: balance
	Display: Total dollar ammount of deposits made by the customer?
	Input: dollar_deposits
	Display: Total dollar amount of withdrawals made by the customer?
	Input: dollar_withdrawals
Processing Phase:
	balance += dollar_deposits - dollar_withdrawals
Output Phase:
	Display: Your current balance is "balance"
end

-- Variable used: double starting_balance, dollar_deposits, dollar_withdrawals;
*/

#include <iostream>
using namespace std;

int done2() {
	double balance, dollar_deposits, dollar_withdrawals;
	//Input
	cout << "Customer's current balance: ";
	cin >> balance;
	cout << endl;
	cout << "Total dollar amount of deposits made by the customer: ";
	cin >> dollar_deposits;
	cout << endl;
	cout << "Total dollar amount of withdrawals made by the customer: ";
	cin >> dollar_withdrawals;
	//Processing
	balance += dollar_deposits - dollar_withdrawals;
	//Output
	cout << endl << "Your current balance is: " << balance << endl;
	return 0;
}