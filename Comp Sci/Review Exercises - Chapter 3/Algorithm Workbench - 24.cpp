#include <iostream>
using namespace std;

int main_done24() {
	/*Pseudo Code
	Input:
		Maximum credit
		amount of credit used
	Processing:
		customer's available credit
			\
			max credit - amount of credit used
	Output:
		customer's available credits
end
	*/
	double max_credit,
		used_credit;

	cout << "Enter your maximum credits allocated by the store: ";
	cin >> max_credit;
	cout << "Enter the amount of credit you have used: ";
	cin >> used_credit;

	max_credit -= used_credit;

	cout << "Your available amount of credit is: " << max_credit << endl;

	return 0;
}