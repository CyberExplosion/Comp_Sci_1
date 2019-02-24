#include <iostream>
using namespace std;

int main_done18() {
	float rise_rate = 3.1e6,
		centimeters,
		inches;
	int years = 15;

	centimeters = (years*rise_rate)*0.1;
	inches = centimeters * 0.3937;
	
	cout << "Centimeters: " << centimeters << " cm\n";
	cout << "Inches: " << inches << " in\n";
	return 0;
}