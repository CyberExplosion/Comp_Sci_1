#include <iostream>
using namespace std;

int main_done21cha() {
	double temperature;

	cout << "Enter the temperature: ";
	cin >> temperature;

	if (temperature < -173) {
		cout << "Ethyl alcohol will freeze at " << temperature << " F\n";
	}
	if (temperature < -38) {
		cout << "Mercury will freeze at " << temperature << " F\n";
	}
	if (temperature < -362) {
		cout << "Oxygen will freeze at " << temperature << " F\n";
	}
	if (temperature > 172) {
		cout << "Ethyl alcohol will boil at " << temperature << " F\n";
	}
	if (temperature > 676) {
		cout << "Mercury will boil at " << temperature << " F\n";
	}
	if (temperature > -306) {
		cout << "Oxygen will boil at " << temperature << " F\n";
	}
	if (temperature > 212) {
		cout << "Water will boil at " << temperature << " F\n";
	}

	return 0;
}