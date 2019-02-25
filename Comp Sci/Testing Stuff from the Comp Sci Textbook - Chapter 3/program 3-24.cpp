#include <iostream>
using namespace std;

int main_done24() {
	const int SIZE = 12;
	char name[SIZE]; //you can put variable with value inside, this time it's a set of 12 memory cells. Which mean it can stores 11 characters and one cell for the null-terminator

	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Hello, " << name << endl;

	return 0;
}