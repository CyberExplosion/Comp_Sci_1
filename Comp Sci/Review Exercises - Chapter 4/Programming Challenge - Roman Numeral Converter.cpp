#include <iostream>
#include <string>
using namespace std;

int main_done2() {
	int num;
	string roman;

	do {
		cout << "Enter the number and I will display the Roman numeral version of that number. Enter a number outside of range 1-10 to exit the program: ";
		cin >> num;
		switch (num) {
		case 1:
			roman = "I";
			break;
		case 2:
			roman = "II";
			break;
		case 3: 
			roman = "III";
			break;
		case 4:
			roman = "IV";
			break;
		case 5:
			roman = "V";
			break;
		case 6:
			roman = "VI";
			break;
		case 7:
			roman = "VII";
			break;
		case 8:
			roman = "VIII";
			break;
		case 9:
			roman = "IX";
			break;
		case 10:
			roman = "X";
			break;
		default:
			roman = "Invalid";
		}
		cout << "The Roman numeral version of " << num << " is: " << roman << endl << endl;
	} while (num >= 1 && num <= 10);
	 
	if (roman == "Invalid") {
		cout << "You entered wrong number. Program will exit\n";
	}

	return 0;
}