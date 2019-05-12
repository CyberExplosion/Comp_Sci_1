#include <iostream>
#include <cmath>
using namespace std;

int main_done16() {
	double inflate_rate;

	cout << "Enter the inflation rate: ";
	cin >> inflate_rate;

	cout << "Money value\t\tYear\n";
	for (int i = 0; i < 10; i++) {
		cout << 1030 * pow((1 / (1 + (inflate_rate / 100.0))), i + 1) << "\t\t" << i + 1 << endl;
	}

	return 0;
}