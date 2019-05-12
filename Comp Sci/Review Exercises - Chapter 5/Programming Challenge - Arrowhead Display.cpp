#include <iostream>
using namespace std;

int main_done23() {
	for (int upper = 0; upper < 3; upper++) {
		for (int upper_space=0; upper_space < 6; upper_space++) {
			cout << " ";
		}
		for (int i = 0; i < (2*upper)+1; i++) {
			cout << "+";
		}
		cout << endl;
	}
	for (int k = 0; k < 13; k++) {
		cout << "+";
	}
	cout << endl;
	for (int lower = 0; lower<3; lower++) {
		for (int lower_space=0; lower_space < 6; lower_space++) {
			cout << " ";
		}
		for (int j = 0; j < 6-((lower*2)+1); j++) {
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}