#include <iostream>
#include <iomanip>
using namespace std;

int main_done21() {
	double monthly_interest_rate,
		loan_amount,
		interest_payment,
		monthly_payment,
		amount_need_paid_back,
		monthly_interest_percent;

	int number_of_payment;

	cout << "Enter the loan amount: ";
	cin >> loan_amount;
	cout << "Enter the number of payment: ";
	cin >> number_of_payment;
	cout << "Enter the monthly interest rate: ";
	cin >> monthly_interest_rate;

	monthly_interest_percent = monthly_interest_rate / 100.0;

	monthly_payment = ((monthly_interest_percent*pow(1 + monthly_interest_percent, number_of_payment))*loan_amount) / (pow(1 + monthly_interest_percent, number_of_payment) - 1);

	amount_need_paid_back = monthly_payment * number_of_payment;

	interest_payment = amount_need_paid_back - loan_amount;
	

	cout << showpoint << fixed << setprecision(2);
	cout << "Loan Amount: " << setw(10) << "$" << setw(8) << loan_amount << endl;
	
	cout << noshowpoint << fixed << setprecision(0)
		<< "Monthly Interest Rate: " << setw(10) << monthly_interest_rate << "%" << endl;
	
	cout << showpoint << fixed << setprecision(2)
		<< "Number of Payments: " << setw(10) << number_of_payment << endl
		<< "Monthly Payment: " << setw(10) << "$" << setw(8) << monthly_payment << endl
		<< "Amount Paid Back: " << setw(10) << "$" << setw(8) << amount_need_paid_back << endl
		<< "Interest Paid: " << setw(10) << "$" << setw(8) << interest_payment << endl << endl;

	return 0;
}