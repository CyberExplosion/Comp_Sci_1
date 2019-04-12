#include <iostream>
#include <cmath>
using namespace std;

int main_done17c() {
	double weight,
		height,
		BMI;

	cout << "Enter your weight then height: ";
	cin >> weight >> height;

	BMI = weight * (703 / pow(height, 2));

	if (BMI > 18.5&&BMI < 25) {
		cout << "You have optimal weight\n";
	}
	else if (BMI < 18.5) {
		cout << "You are underweight\n";
	}
	else if (BMI > 25) {
		cout << "You are overweight.\n";
	}

	return 0;
}