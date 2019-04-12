#include <iostream>
#include <string>
using namespace std;

//Screw that prompt in book, I dont have time to type all that, imma just use array 

int main_done14() {
	string vaulter;
	int day[3], month[3], year[3];
	int height[3] = {0,0,0};
	int first_height,
		second_height,
		third_height;

	cout << "Enter the name of the pole vaulter: ";
	getline(cin, vaulter);

	for (int i = 1; i <= 3; i++) {
		cout << "Enter the month, then date, then year for jump number " << i << endl;
		cin >> month[i - 1];
		cin >> day[i - 1];
		cin >> year[i - 1];
		cout << "Enter the vault heights (in meter) for jump number " << i << ": ";
		cin >> height[i-1];
		cout << endl;
	}

	if (height[0] < 0 || height[1] < 0 || height[2] < 0) {
		cout << "Height cannot be a negative number.\n";
	}
	else {
		if (height[0] > height[1]) {
			first_height = height[0];
			second_height = height[1];
			third_height = height[2];
			if (height[2] > second_height) {
				second_height = height[2];
				third_height = height[1];
			}

			if (height[2] > first_height) {
				first_height = height[2];
				second_height = height[0];
				third_height = height[1];
			}

		}
		else {
			first_height = height[1];
			second_height = height[0];
			third_height = height[2];
			if (height[2] > second_height) {
				second_height = height[2];
				third_height = height[0];
			}
			if (height[2] > first_height) {
				first_height = height[2];
				second_height = height[1];
				third_height = height[0];
			}
		}
		cout << "REPORT for " << vaulter << endl;
		cout << "------------------------------\n";
		cout << "Height:\t 1. " << first_height << "m, on " << month[0] << "/" << day[0] << "/" << year[0] << endl;
		cout << "       \t 2. " << second_height << "m, on " << month[1] << "/" << day[1] << "/" << year[1] << endl;
		cout << "       \t 3. " << third_height << "m, on " << month[2] << "/" << day[2] << "/" << year[2] << endl;
	}

	return 0;
}