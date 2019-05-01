#include <iostream>
using namespace std;

int main_done3() {
	double speed,
		hours,
		distance;

	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	cout << "How many hours has it traveled? ";
	cin >> hours;

	cout << "Hour \t\t Miles Traveled\n"
		<< "----------------------------------\n";

	for (int i = 0; i < hours; i++) {
		distance = speed * (i + 1);
		cout << i + 1 << "\t\t" << distance << endl;
	}

	cout << endl;

	return 0;
}