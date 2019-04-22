#include <iostream>
using namespace std;

int main_done33() {
	char doAgain = 'y';
	int sum = 0;

	cout << "This code will increment sum 1 or more times.\n";
	cout << "Enter the sum you want to start incrementing: ";
	cin >> sum;
	do{
		sum++;
		cout << "Sum has been incremented. Increment it again(y/n)? ";
		cin >> doAgain;

	} while (toupper(doAgain)=='Y');

	cout << "Sum was incremented " << sum << " times.\n";

	return 0;
}