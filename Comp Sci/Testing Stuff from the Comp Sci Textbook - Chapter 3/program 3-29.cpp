#include <iostream>
#include <cmath>
using namespace std;

int main_done29() {
	double a, b, c;
	
	cout << "Enter the length of side a: ";
	cin >> a;
	cout << "Enter the length of side b: ";
	cin >> b;

	c = sqrt(pow(a, 2.0) + pow(b, 2.0));

	cout << "THe length of the hypotenuse is ";
	cout << c << endl;

	return 0;
}