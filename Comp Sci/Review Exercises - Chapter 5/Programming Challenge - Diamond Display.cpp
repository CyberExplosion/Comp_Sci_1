#include <iostream>
#include <cmath>
using namespace std;

int main_done21() {

	for (int row = 0; row < 4; row++) {
		for (int k = 4; k >= row+2; k--) {
			cout << " ";
		}
		for (int i = 1; i <= (2*row)+1; i++) {
			cout << "+";
		}
		cout << endl;
	}
	for (int lower_row = 0; lower_row < 3; lower_row++) {
		for (int k = 0; k < lower_row+1 ; k++) {
			cout << " ";
		}
		for (int j = 0; j < 6-(2*lower_row+1); j++) {
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}