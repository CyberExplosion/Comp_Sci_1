#include <iostream>
using namespace std;

int main_done11() {
	for (int rows = 0; rows<4; rows++) {
		for (int space = 0; space < 4-rows; space++) {
			cout << " ";
		}
		for (int hash = 0; hash < (2 * rows + 1); hash++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}