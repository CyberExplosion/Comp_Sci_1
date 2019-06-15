//Khoi Nguyen
//CS1, Section #0109
//Extra Credit, Problem #2
//The program utilizes the Stats class file to hold rainfall data and report annual rainfall statistics

#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;

int main_done() {
	double rain_amount;
	Stats rainfall;

	for (int i = 0; i <12; i++) {
		cout << "Enter Month" << setw(3) << i + 1 << "'s rainfall amount: ";
		cin >> rain_amount;
		// User enter the value of each month
		rainfall.setValue(i, rain_amount);
	}
	cout << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "Annual Rainfall Report:\n";
	cout << "Amounts:\n";
	for (int j = 0; j < 12; j++) {
		// getValue function that takes an argument as the month to display the amount of rain in such month
		cout << "Month" << setw(3) << j + 1 << ":" << setw(7) << 
		rainfall.getValue(j) << endl;
	}
	cout << endl;
	cout << "Total: " << rainfall.getTotal() << endl;
	cout << "Average: " << rainfall.getAvg() << endl;
	cout << "Lowest: " << rainfall.getSmallest() << endl;
	cout << "Highest: " << rainfall.getLargest() << endl;

	return 0;
}