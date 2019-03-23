#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main_done25c() {
	double angle,
		user_input;

	cout << "Enter the angle in radian: ";
	cin >> user_input;

	angle = (user_input * 3.14)/180;

	cout << showpoint << fixed << setprecision(1);
	cout << "The sine of the angle is: " << sin(angle) << endl
		<< "The cosine of the angle is: " << cos(angle) << endl
		<< "The tangent of the angle is: " << tan(angle) << endl;

	return 0;
}