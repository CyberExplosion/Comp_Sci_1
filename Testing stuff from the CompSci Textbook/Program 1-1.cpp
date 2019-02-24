#include <iostream>

using namespace std;


int done() {
	double hours, rate, pay;
	//This is for it not to close
	cout << "How many hours did you work? ";
	cin >> hours;
	cout << endl;
	cout << "How much dod you get paid per hour? ";
	cin >> rate;
	pay = hours * rate;
	cout << endl << "You have earned $" << pay << endl;
	return 0;
}