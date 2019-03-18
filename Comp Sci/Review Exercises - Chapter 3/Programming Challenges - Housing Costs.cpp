#include <iostream>
using namespace std;

int main_done3() {
	/*Pseudo Code
	Input:
		monthly cost for each section
	Processing:
		total cost = sum of each
		annual cost = total cost x 12
	Output:
		monthly cost
		annual cost
end
		*/
	double rent_mortgage_pay,
		phones_pay,
		ultilities_pay,
		cable_pay,
		monthly_cost,
		annual_cost;

	cout << "Enter the monthly cost for rent or mortgage payment: ";
	cin >> rent_mortgage_pay;
	cout << "Enter the monthly cost for phones: ";
	cin >> phones_pay;
	cout << "Enter the monthly cost for utilities: ";
	cin >> ultilities_pay;
	cout << "Enter the monthly cost for cable: ";
	cin >> cable_pay;

	monthly_cost = rent_mortgage_pay + phones_pay + ultilities_pay + cable_pay;
	annual_cost = monthly_cost * 12;

	cout << "The monthly expense is: " << monthly_cost << endl
		<< "The annual expense is: " << annual_cost << endl;
	
	return 0;
}