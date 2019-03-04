//Khoi Nguyen
//CS 1, Section #0109
//Assignment #1
//A program that takes in the user input then display the area of the base of the pyramid, the height of the pyramid, and finally the volume of the pyramid

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main_done4() {
	/*Pseudo Code
	Input:
		length of the side of square base
		height of the pyramid
	Processing:
		area = base^2 
		volume = area * height * 1/3
	Output:
		area of the base of the pyramid
		the height of the pyramid
		the volume of the pyramid
end
--Variable use: base_length, height, area, volume
	*/
	double base_length,
		height,
		area,
		volume;
	
	cout << "The volume of the square base pyramid\n\n";
	cout << "Enter the length of a side for the square base: \n\n";
	cin >> base_length;
	cout << endl;
	cout << "Enter the height of the pyramid: \n\n";
	cin >> height;
	cout << endl;
	
	area = pow(base_length, 2);
	volume = area * (height/3);

	cout << showpoint << fixed << setprecision(2);
	cout << "The area of the base is: "
		<< area << "\n\n"
		<< "The height of the pyramid is: " << height << "\n\n"
		<< "The volume of the pyramid is: " << volume << "\n\n";

	return 0;
}