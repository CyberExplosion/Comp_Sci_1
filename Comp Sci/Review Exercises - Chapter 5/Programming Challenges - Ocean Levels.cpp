#include <iostream>
using namespace std;

int main_done6() {
	cout << "Years \t\t OCean Meter each year\n";
	cout << "------------------------------------------\n";

	for (int year = 1; year <= 25; year++) {
		cout << year << "\t\t" << year * 3.1 << endl;
	}

	return 0;
}