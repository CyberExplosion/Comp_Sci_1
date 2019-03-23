#include <iostream>
using namespace std;

int main_done15() {
	const double YEN_PER_DOLLAR = 120.005,
		EUROS_PER_DOLLAR = .881;

	double user_dollar,
		user_yen,
		user_euro;

	cout << "Enter the money value in U.S. Dollar: ";
	cin >> user_dollar;
	
	user_yen = YEN_PER_DOLLAR * user_dollar;
	user_euro = EUROS_PER_DOLLAR * user_dollar;

	cout << "The value in yen is: " << user_yen << endl
	<< "The value in euro is: " << user_euro << endl;

	return 0;
}