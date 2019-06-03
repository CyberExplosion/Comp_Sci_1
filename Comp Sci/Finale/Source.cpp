#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

bool haveImaginaryRoots(int, int, int);

int main() {
	double first_root,
		second_root;
	int a, b, c;
	char choice;

	do {
		cout << "Enter a: ";
		cin >> a;
		if (a == 0 || !isdigit(a)) {
			cout << "The equation is not quadratic!\n";
		}
		else {
			cout << "Enter b: ";
			cin >> b;
			cout << "Enter c: ";
			cin >> c;
			if (!haveImaginaryRoots(a, b, c)) {
				first_root = ((-b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
				second_root = ((-b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
				if (first_root > second_root) {
					swap(first_root, second_root);
				}
				cout << "The roots are " << first_root << " and " << second_root << ".\n";
			}
			else {
				first_root = ((-b) - sqrt(abs(pow(b, 2) - (4 * a * c)))) / (2 * a);
				second_root = ((-b) + sqrt(abs(pow(b, 2) - (4 * a * c)))) / (2 * a);
				if (first_root < second_root) {
					swap(first_root, second_root);
				}
				cout << "The roots are " << first_root << "i and " << second_root << "i.\n";
			}
		}
		do {
			cout << "Do you want to continue (Y/N)? ";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N') {
				cout << "Please enter only Y or N\n";
			}
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
	} while (toupper(choice) == 'Y');
		
	return 0;
}

bool haveImaginaryRoots(int a, int b, int c) {
	// b^2 -4(ac)
	if ((pow(b, 2) - (4 * a * c)) < 0) {
		return true;
	}
	return false;
}