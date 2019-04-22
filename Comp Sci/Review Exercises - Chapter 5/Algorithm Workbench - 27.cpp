#include <iostream>
using namespace std;

int main_done27() {
	double input = 0.0;

	cin >> input;
	
	while (input <= 50) {
		input *= 2.0;
		cout << input << "\t";
	}

	return 0;
}