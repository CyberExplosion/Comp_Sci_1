#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Array dimension constants
	const int NUM_MONKEYS = 3;
	const int NUM_DAYS = 5;

	// 2-D array to hold the food consumed each weekday for 3 different monkeys
	double monkeyFood[NUM_MONKEYS][NUM_DAYS]
		= { {-1.0,-1.0,-1.0,-1.0,-1.0},
			{-1.0,-1.0,-1.0,-1.0,-1.0},
			{-1.0,-1.0,-1.0,-1.0,-1.0} };
	// Counter variables
	int i, j;

	// Variables used to hold and/or calculate the average, minim, and maxim values
	double min = -1.0, max = -1.0;
	double total = 0.0, average = 0.0;

	for (i = 0; i < NUM_MONKEYS; i++) {
		cout << "For monkey " << i + 1 << ", please enter the"
			<< " number of pounds of food eaten by the money"
			<< endl;
		for (j = 0; j < NUM_DAYS; j++) {
			// Input the amount of food the monkeys for each days
			cout << setw(15) << "For days " << j + 1 << ": ";
			cin >> monkeyFood[i][j];
			while (monkeyFood[i][j] < 0) {
				cout << "Your entry for day " << j + 1
					<< " was invalid. Please try again: ";
				cin >> monkeyFood[i][j];
			}
			// Calculate the sum
			total += monkeyFood[i][j];
			
			// Check if the entry read in becomes a minim and/or maximum
			if (monkeyFood[i][j] < min || min == -1.0) {
				min = monkeyFood[i][j];
			}
			if (monkeyFood[i][j] > max) {
				max = monkeyFood[i][j];
			}
		}
	}

	// Calculate the average
	average = (double)total / (NUM_MONKEYS * NUM_DAYS);
	
	cout << endl << "the average number of pounds of food eaten by all the monkeys is " << average << " pounds." << endl;
	cout << "The minimum amount of pounds eaten by any one monkey was " << min << " pounds." << endl;
	cout << "The maximum amount of pounds eaten by any one monkey was " << max << " pounds." << endl;

	return 0;
}