/*Pseudo Code
Display: Enter customer's maximum credit: 
Input max_credit
Display: Enter customer's used credit:
Input used_credit
available_credit = max_credit - used_credit
Display: Customer's avavilable credit is: "available_credit"
end
*/

#include <iostream>

using namespace std;

int done1() {
	int max_credit, used_credit, available_credit;

	cout << "Enter customer's maximum credit: ";
	cin >> max_credit;
	cout << endl;
	cout << "Enter customer's used credit: ";
	cin >> used_credit;
	available_credit = max_credit - used_credit;
	cout << endl << "Customer's available credit is: " << available_credit << endl;
	return 0;
}
