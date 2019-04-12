#include <iostream>
#include <iomanip>
using namespace std;

int main_done19ch() {
	int choice;
	double feet,
		time;

	cout << "Medium \t\t Speed (feet per sec)\n";
	cout << "----------------------------------\n";
	cout << "1. Air \t\t\t 1,100\n";
	cout << "2. Water \t\t 4,900\n";
	cout << "3. Steel \t\t 16,400\n";
	cout << "Enter the heading number to choose what you want to use: ";
	cin >> choice;

	cout << "Enter the number of feet a sounds wave will travel through the medium you chose: ";
	cin >> feet;
	if (feet > 0) {

		switch (choice) {
		case 1:
			time = feet / 1100;
			break;
		case 2:
			time = feet / 4900;
			break;
		case 3:
			time = feet / 16400;
			break;
		default:
			time = -1;
			cout << "User input invalid\n";
		}

		cout << showpoint << fixed << setprecision(4);
		cout << "The amount of time it will take: " << time << "s \n";
	}
	else {
		cout << "Distance traveled cannot be negative\n";
	}
	return 0;
}