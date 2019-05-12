#include <iostream>
using namespace std;

int main_done22() {
	for (int upper_row = 0; upper_row < 4; upper_row++) {
		for (int i = 0; i < (2 * upper_row) + 1; i++) {
			cout << "+";
		}
		cout << endl;
	}
	for (int lower_row = 0; lower_row < 3; lower_row++) {
		for (int k = 0; k < 6-((lower_row*2)+1) ; k++) {
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}