#include <iostream>
using namespace std;

int main_done17() {
	float rise = 1.8e6, //milimeters
		centimeter,
		inches;

//1milimeter = 0.1 centimeters
//1centimeters =  0.3937 inches
	centimeter = rise * 0.1;
	inches = centimeter * 0.3937;
	cout << "Number in centimeter: " << centimeter << " cm.\n";
	cout << "Number in inches: " << inches << " in.\n";
	return 0;
}