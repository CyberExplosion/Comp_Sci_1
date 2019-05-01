#include <iostream>
using namespace std;

int main_done7() {
	cout << "Radius \t\t Circle Area\n";
	cout << "-----------------------------------\n";

	for (int radius = 1; radius <= 8; radius *= 2) {
		cout << radius << "\t\t" << 3.14 * radius << endl;
	}
	return 0;
}