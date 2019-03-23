#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main_done16() {
	int year;

	string month;

	double total_amount_collected,
		product_sale,
		county_tax_amount,
		state_tax_amount,
		total_tax;

	const double STATE_TAX = 4.0 / 100,
		COUNTY_TAX = 2.0 / 100,
		TOTAL_TAX = 6.0 / 100;

	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the amount collected: ";
	cin >> total_amount_collected;
	cout << endl << endl;

	product_sale = total_amount_collected / 1.06;
	county_tax_amount = COUNTY_TAX * total_amount_collected;
	state_tax_amount = STATE_TAX * total_amount_collected;
	total_tax = total_amount_collected * TOTAL_TAX;

	cout << "Month: " << month << " " << year << endl
		<< "----------------------" << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "Total Collected: " << setw(3) << "$" << setw(6) << total_amount_collected << endl
		<< "Sales: " << setw(13) << "$" << setw(6) << product_sale << endl
		<< "County Sales Tax: " << setw(2) << "$" << setw(6) << county_tax_amount << endl
		<< "State Sales Tax: " << setw(3) << "$" << setw(6) << state_tax_amount << endl
		<< "Total Sales Tax :" << setw(3) << "$" << setw(6) << total_tax << endl;

	return 0;
}