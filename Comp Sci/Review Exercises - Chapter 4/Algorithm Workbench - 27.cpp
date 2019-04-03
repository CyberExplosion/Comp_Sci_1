#include <iostream>
using namespace std;

int main_done27() {
	int hours;

	cout << "Enter the hours: ";
	cin >> hours;

	cout << (hours < 0 || hours>80 ? "The number is not valid\n" : "The number is valid\n");



	return 0;
}