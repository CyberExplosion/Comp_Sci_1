#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
	string date,
		name;
	double amount;


	cout << "Enter the date: ";
	cin >> date;
	cin.ignore(100, '\n'); cin.clear(); cin.sync();
	cout << "Enter the payee's name: ";
	getline(cin, name);
	cout << "Enter the amount for the check: ";
	cin >> amount;

	cout << showpoint << fixed << setprecision(2);
	cout << left << setw(50) << "Date: " << date << endl;
	cout << endl;
	cout << right;
	cout << "Pay to the Order of: " << setw(20) << name << "$" << amount << endl << endl;
	return 0;
}