#include <iostream>
#include <string>
using namespace std;


int main_done5ch12() {
	string first,
		middle,
		last,
		formal;

	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your middle name: ";
	cin >> middle;
	cout << "Enter your last name: ";
	cin >> last;
	cout << endl;
	formal = last + ", " + first + " " + middle;

	cout << formal << endl;
	return 0;
}