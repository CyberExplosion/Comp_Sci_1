#include <iostream>
using namespace std;

int main_done9() {
	double starting_weight;
	
	cout << "Enter your starting weight: ";
	cin >> starting_weight;
	cout << "Month \t\t Expected Weight\n";
	cout << "----------------------------------\n";
	for (int i = 1; i <= 6; i++) {
		cout << i << "\t\t" << starting_weight -(i * 4.0) << endl;
	}

	return 0;
}