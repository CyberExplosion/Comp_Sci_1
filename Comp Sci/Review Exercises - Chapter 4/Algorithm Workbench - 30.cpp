#include <iostream>
using namespace std;

int main_done30() {
	int dept,
		price;
	double discount = 0.0;

	cout << "Enter the debt and price: ";
	cin >> dept >> price;

	switch (dept){
	case 5:
		discount = (price == 100 || price > 100) ? 0.2 : 0.1;
		break;
	default:
		discount = (price == 100 || price > 100) ? 0.15 : 0.05;
	}

	cout << "The percentage of discount you get is: " << discount * 100 << "%\n";

	return 0;
}