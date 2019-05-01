#include <iostream>
using namespace std;

int main_done5() {

	cout << "Km/H \t\t MPH\n";
	cout << "-------------------\n";

	for (int kilometer = 40; kilometer <= 120; kilometer += 10) {
		cout << kilometer << "\t\t" << kilometer * 0.6214 << endl;
	}

	return 0;
}