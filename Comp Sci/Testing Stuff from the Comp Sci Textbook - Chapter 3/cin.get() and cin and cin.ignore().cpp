#include <iostream>
#include <string>
using namespace std;

int main_donecin() {
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore(1,'\n');
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank you! \n";

	return 0;
}