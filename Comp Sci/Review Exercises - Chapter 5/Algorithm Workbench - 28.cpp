#include <iostream>
using namespace std;

int main_done28() {
	double num1,
		num2,
		sum;
	char choice;

	do{
		cout << "Please enter two number: ";
		cin >> num1 >> num2;
		sum = num1 + num2;
		cout << "This is the sum of those 2 numbers: " << sum << endl;
		cout << "Do you want to do this operation again? Enter Y/y(yes) to continue, otherwise enter anything else to terminate the program: ";
		cin >> choice;
	} while (toupper(choice)=='Y');


	return 0;
}