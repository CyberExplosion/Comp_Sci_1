#include <iostream>
using namespace std;

int main_done13() {
	float pay_annual = 39000.0,
		monthly_pay = 24,
		weekly_pay = 26;
	
	cout << "The amount of gross pay for a period of twice a month: $" << pay_annual / monthly_pay << endl;
	cout << "The amount of gross pay for a period of bi-weekly: $" << pay_annual / weekly_pay << endl;
	return 0;
}