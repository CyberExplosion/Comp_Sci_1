#include <iostream>
using namespace std;

int main_done3() {
	int length,
		width,
		area;

	cout << "This program calculates the area of a rectangle. \n";
	cout << "Enter the length and width of the rectangle ";
	cout << " separated by a space.\n";
	cin >> length >> width;
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	return 0;
}