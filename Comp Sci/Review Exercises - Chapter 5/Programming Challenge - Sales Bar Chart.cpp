#include <iostream>
using namespace std;

int main_done24() {
	int sale_1,
		sale_2,
		sale_3;

	cout << "Enter todays sale for store 1-3: ";
	cin >> sale_1 >> sale_2 >> sale_3;

	cout << "\tDaily Sales\n";
	cout << "(each * = $100)\n";
	cout << "Store 1: ";
	for (int i = 0; i < sale_1 / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 2: ";
	for (int k = 0; k < sale_2 / 100; k++) {
		cout << "*";
	}
	cout << endl;
	cout << "Store 3: ";
	for (int l = 0; l < sale_3 / 100; l++) {
		cout << "*";
	}
	cout << endl;
	return 0;
}