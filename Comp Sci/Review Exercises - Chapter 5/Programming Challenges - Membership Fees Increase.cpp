#include <iostream>
using namespace std;

int main_done11() {
	double charges = 3000;

	for (int i = 0; i <= 5; i++) {
		cout << i + 1 << "\t\t" << charges + ((0.3 * charges) * i) << endl;
	}

	return 0;
}