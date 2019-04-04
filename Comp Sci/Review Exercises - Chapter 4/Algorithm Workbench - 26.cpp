#include <iostream>
using namespace std;

int main_done26() {
	int temperature;

	cout << "Enter the temperature: ";
	cin >> temperature;

	cout << (temperature > -50 && temperature < 150 ? "The number is valid" : "The number is invalid");


	return 0;
}