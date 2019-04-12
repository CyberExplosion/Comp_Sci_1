#include <iostream>
using namespace std;

int main_done19cha() {
	int choice;
	double time,
		meter;

	cout << "Medium \t\t\t Speed (meters per sec)\n";
	cout << "----------------------------------------\n";
	cout << "1. Carbon dioxide \t 258.0\n";
	cout << "2. Air \t\t\t 331.5\n";
	cout << "3. Helium \t\t 972.0\n";
	cout << "4. Hydrogen \t\t 1270.0\n";
	cout << "Enter your choice using the header number: ";
	cin >> choice;
	if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
		cout << "Enter a number of second (from 0 to 30) it took for the sounds to travel in this medium from its source to the location at which it was detected: ";
		cin >> time;

		if (time > 0 && time < 30) {
			switch (choice) {
			case 1:
				meter = time * 258.0;
				break;
			case 2:
				meter = time * 331.5;
				break;
			case 3:
				meter = time * 972.0;
				break;
			case 4:
				meter = time * 1270.0;
				break;
			default:
				cout << "Error invalid choice\n";
			}
			cout << "The distance from the sound detection to the source of the sound is: " << meter << "m\n";
		}
		else {
			cout << "Please enter time between 0 to 30\n";
		}
	}
	else cout << "Invalid choice, please only enter numbers in the header of the program.";

	return 0;
}