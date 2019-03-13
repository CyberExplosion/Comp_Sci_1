#include <iostream>
#include <iomanip>
using namespace std;

int main_done2() {
	/*Pseudo Code
	Input:
		ticket A sold
		ticket B sold
		ticket C sold
	Processing:
		Income generated = A tickets money + B tickets money + C tickets money
	Output:
		money made
end
	*/
	int A_tickets_sold,
		B_tickets_sold,
		C_tickets_sold;
	double const A_PRICE = 15.0,
		B_PRICE = 12.0,
		C_PRICE = 9.0;
	double total;
	
	cout << "Amount of A tickets sold: ";
	cin >> A_tickets_sold;
	cout << "Amount of B tickets sold: ";
	cin >> B_tickets_sold;
	cout << "Amount of C tickets sold: ";
	cin >> C_tickets_sold;

	A_tickets_sold *= A_PRICE;
	B_tickets_sold *= B_PRICE;
	C_tickets_sold *= C_PRICE;

	total = A_tickets_sold + B_tickets_sold + C_tickets_sold;
	static_cast<double>(total);

	cout << showpoint << fixed << setprecision(2);
	cout << "Total income generated from ticket sales: $" << total << endl;

	return 0;
}