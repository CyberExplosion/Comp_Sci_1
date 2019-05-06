#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main_done12() {
	int input,
		random;

	srand(time(0));
	random = rand() % 100 + 1;

	do {
		cout << "Enter your guess number from 1 - 100: ";
		cin >> input;
		if (input < random) {
			cout << "Too low. Try again\n";
		}
		if (input > random) {
			cout << "Too high. Try again\n";
		}
	} while (input != random);

	cout << "\nCongratulation. You figured out my number";

	return 0;
}