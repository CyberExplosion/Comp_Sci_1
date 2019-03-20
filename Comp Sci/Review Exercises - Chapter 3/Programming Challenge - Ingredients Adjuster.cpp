#include <iostream>
using namespace std;

int main_done13() {
	const double CUP_OF_SUGAR = 1.5,
		CUP_OF_BUTTER = 1.0,
		CUP_OF_FLOUR = 2.75;
	
	double sugar_amount,
		butter_amount,
		flour_amount;

	const int cookie_with_above_ingredient = 48;

	int cookie;

	cout << "How many cookies you want to make: ";
	cin >> cookie;

	sugar_amount = (CUP_OF_SUGAR*cookie) / cookie_with_above_ingredient;
	butter_amount = (CUP_OF_BUTTER*cookie) / cookie_with_above_ingredient;
	flour_amount = (CUP_OF_FLOUR*cookie) / cookie_with_above_ingredient;

	cout << "Number of Cup of Sugar need: " << sugar_amount << endl
		<< "Number of Cup of Butter need: " << butter_amount << endl
		<< "Number of Cup of Flour need: " << flour_amount << endl;

	return 0;
}