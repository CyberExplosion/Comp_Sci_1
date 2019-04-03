#include <iostream>
using namespace std;

int main_done1() {
	int num1,
		num2,
		big,
		smol;

	cout << "Enter two number: ";
	cin >> num1 >> num2;

	big = num1 > num2 ? num1 : num2;
	smol = num1 < num2 ? num1 : num2;

	cout << "Bigger number is: " << big << endl
		<< "Smaller number is: " << smol << endl;


	return 0;
}