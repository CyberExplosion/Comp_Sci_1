#include <iostream>
using namespace std;

int main_done22() {
	/*Pseudo Code
	Input:
		the amount of a sale
	Processing:
		pay amount = pre-sale - after sale
			\
			after sale = pre-sale * (15% off)
				\
				pre-sale = original amount
	Output:
		amount customer saves
		amount customers pay
	*/
	double const SALE_PERCENT = 15.0 / 100;
	double pay_amount,
		save_from_sales;

	cout << "Enter the total of value in $: $";
	cin >> pay_amount;

	save_from_sales = pay_amount * SALE_PERCENT;
	pay_amount -= pay_amount * SALE_PERCENT;

	cout << "The saving you save from the purchase made is: $" << save_from_sales << endl
		<< "The amount you must pay is: $" << pay_amount << endl;
	
	return 0;
}