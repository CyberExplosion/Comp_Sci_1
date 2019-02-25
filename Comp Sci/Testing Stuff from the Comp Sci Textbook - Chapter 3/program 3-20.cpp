#include <iostream>
#include <string>
using namespace std;

int main_done20() {
	string name,
		city;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;

	return 0;
}