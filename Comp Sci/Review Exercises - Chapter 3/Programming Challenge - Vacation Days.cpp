#include <iostream>
using namespace std;

int main_done9() {
	int days,
		hours,
		minutes,
		seconds;

	cout << "Enter the number of days spend on vacation: ";
	cin >> days;

	hours = days * 24;
	minutes =  hours * 60;
	seconds =  minutes * 60;

	cout << "Report in hours: " << hours << endl
		<< "Reports in minutes: " << minutes << endl
		<< "Reports in seconds: " << seconds << endl;

	return 0;
}