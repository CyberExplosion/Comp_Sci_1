#include <iostream>
using namespace std;

int main() {
	short int books,
		points = 0;

	cout << "Enter the number of books purchased this month: ";
	cin >> books;

	if (books >= 0) {
		switch (books) {
		case 0:
			points = 0;
			break;
		case 1:
			points = 5;
			break;
		case 2:
			points = 15;
			break;
		case 3:
			points = 30;
			break;
		default:
			points = 50;
		}
	}
	else {
		cout << "The input is invalid\n";
	}

	cout << "The points awarded: " << points << endl;

	return 0;
}