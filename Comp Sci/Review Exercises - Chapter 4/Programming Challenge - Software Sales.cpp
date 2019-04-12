#include <iostream>
using namespace std;

int main_done9() {
	const int RETAIL = 199;

	int quantity;

	cout << "How much you purchased: ";
	cin >> quantity;

	if (quantity > 0 && quantity < 10) {
		cout << "The cost is: " << quantity * RETAIL << endl;
	}
	else if (quantity >= 10 && quantity <= 19) {
		cout << "The discount is 20%. Your cost is: " << quantity * RETAIL - (quantity*RETAIL*0.2) << endl;
	}
	else if (quantity >= 20 && quantity <= 49) {
		cout << "The discount is 30%. Your cost is " << quantity * RETAIL - (quantity*RETAIL*0.3) << endl;
	}
	else if (quantity >= 50 && quantity <= 99) {
		cout << "The discount is 40%. Your cost is " << quantity * RETAIL - (quantity*RETAIL*0.4) << endl;
	}
	else if (quantity >= 50 && quantity >= 99) {
		cout << "The discount is 50%. Your cost is " << quantity * RETAIL - (quantity*RETAIL*0.5) << endl;
	}
	else cout << "The quantity entered is invalid\n";

	return 0;
}