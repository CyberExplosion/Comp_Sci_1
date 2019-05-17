#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main_done3() {
	vector<string> RomanNumberal{ "I","II","III","IV","V","VI","VII","VIII","IX","X" };
	int input;

	do {
		cout << "Enter the decimal number between 1-20: ";
		cin >> input;
		if (input == 0) {
			cout << "The program will exit\n";
		}
		else {
			if (input > 10 || input < 0) {
				cout << "Only allows input between 1-20. Please try again\n";
			}
			else {
				cout << "The Roman Numeral Equivalent is: ";
				cout << RomanNumberal[input - 1];
				cout << endl;
			}
		}
	} while (input != 0);

	return 0;
}