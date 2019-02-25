#include <iostream>
using namespace std;

int main_done11() {
	int beg_inv,
		sold,
		store1,
		store2;

	cout << "One week ago, 2 new widget stores opened\n";
	cout << "at the same time with the same beginning\n";
	cout << "inventory. What was the beginning inventory? ";
	cin >> beg_inv;
	store1 = store2 = beg_inv;
	cout << "How many widgets has store 1 sold? ";
	cin >> sold;
	store1 -= sold;
	cout << "How many widgets has store 2 sold? ";
	cin >> sold;
	store2 -= sold;
	cout << "\nThe current inventory of each stores: \n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;
	return 0;
}